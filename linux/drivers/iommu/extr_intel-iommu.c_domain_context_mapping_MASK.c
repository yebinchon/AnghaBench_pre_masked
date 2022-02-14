
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct pasid_table {int dummy; } ;
struct intel_iommu {int dummy; } ;
struct domain_context_mapping_data {struct pasid_table* table; struct intel_iommu* iommu; struct dmar_domain* domain; } ;
struct dmar_domain {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*) ;
 struct intel_iommu* FUNC_1 (struct device*,int *,int *) ;
 int VAR_1 ;
 int FUNC_2 (struct dmar_domain*,struct intel_iommu*,struct pasid_table*,int ,int ) ;
 struct pasid_table* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,int *,struct domain_context_mapping_data*) ;
 int FUNC_5 (struct device*) ;

__attribute__((used)) static int
FUNC_6(struct dmar_domain *VAR_2, struct device *VAR_3)
{
 struct domain_context_mapping_data VAR_4;
 struct pasid_table *VAR_5;
 struct intel_iommu *VAR_6;
 u8 VAR_7, VAR_8;

 VAR_6 = FUNC_1(VAR_3, &VAR_7, &VAR_8);
 if (!VAR_6)
  return -VAR_0;

 VAR_5 = FUNC_3(VAR_3);

 if (!FUNC_0(VAR_3))
  return FUNC_2(VAR_2, VAR_6, VAR_5,
        VAR_7, VAR_8);

 VAR_4.domain = VAR_2;
 VAR_4.iommu = VAR_6;
 VAR_4.table = VAR_5;

 return FUNC_4(FUNC_5(VAR_3),
          &VAR_1, &VAR_4);
}
