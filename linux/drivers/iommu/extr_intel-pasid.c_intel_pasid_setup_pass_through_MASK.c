
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct pasid_entry {int dummy; } ;
struct intel_iommu {int cap; int ecap; int agaw; } ;
struct dmar_domain {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct pasid_entry*,int) ;
 int FUNC_2 (struct device*,char*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 struct pasid_entry* FUNC_5 (struct device*,int) ;
 int FUNC_6 (struct intel_iommu*) ;
 int FUNC_7 (struct intel_iommu*,int ,int) ;
 int FUNC_8 (struct intel_iommu*,int ,int) ;
 int FUNC_9 (struct pasid_entry*) ;
 int FUNC_10 (struct pasid_entry*,int ) ;
 int FUNC_11 (struct pasid_entry*,int ) ;
 int FUNC_12 (struct pasid_entry*) ;
 int FUNC_13 (struct pasid_entry*,int) ;
 int FUNC_14 (struct pasid_entry*) ;
 int FUNC_15 (struct pasid_entry*) ;
 int FUNC_16 (struct pasid_entry*,int) ;

int FUNC_17(struct intel_iommu *VAR_2,
       struct dmar_domain *VAR_3,
       struct device *VAR_4, int VAR_5)
{
 u16 VAR_6 = VAR_1;
 struct pasid_entry *VAR_7;

 VAR_7 = FUNC_5(VAR_4, VAR_5);
 if (!VAR_7) {
  FUNC_2(VAR_4, "Failed to get pasid entry of PASID %d\n", VAR_5);
  return -VAR_0;
 }

 FUNC_9(VAR_7);
 FUNC_11(VAR_7, VAR_6);
 FUNC_10(VAR_7, VAR_2->agaw);
 FUNC_16(VAR_7, 4);
 FUNC_12(VAR_7);
 FUNC_13(VAR_7, !!FUNC_4(VAR_2->ecap));





 FUNC_15(VAR_7);
 FUNC_14(VAR_7);

 if (!FUNC_3(VAR_2->ecap))
  FUNC_1(VAR_7, sizeof(*VAR_7));

 if (FUNC_0(VAR_2->cap)) {
  FUNC_8(VAR_2, VAR_6, VAR_5);
  FUNC_7(VAR_2, VAR_6, VAR_5);
 } else {
  FUNC_6(VAR_2);
 }

 return 0;
}
