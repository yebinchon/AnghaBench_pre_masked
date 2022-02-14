
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmmu_vmsa_domain {int dummy; } ;
struct iommu_fwspec {unsigned int num_ids; int * ids; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 struct iommu_fwspec* FUNC_0 (struct device*) ;
 int FUNC_1 (struct ipmmu_vmsa_domain*,int ) ;
 struct ipmmu_vmsa_domain* FUNC_2 (struct iommu_domain*) ;

__attribute__((used)) static void FUNC_3(struct iommu_domain *VAR_0,
    struct device *VAR_1)
{
 struct iommu_fwspec *VAR_2 = FUNC_0(VAR_1);
 struct ipmmu_vmsa_domain *VAR_3 = FUNC_2(VAR_0);
 unsigned int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_2->num_ids; ++VAR_4)
  FUNC_1(VAR_3, VAR_2->ids[VAR_4]);




}
