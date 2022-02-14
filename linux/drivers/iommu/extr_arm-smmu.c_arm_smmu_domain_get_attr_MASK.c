
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int type; } ;
struct arm_smmu_domain {int non_strict; int stage; } ;
typedef enum iommu_attr { ____Placeholder_iommu_attr } iommu_attr ;


 int VAR_0 ;


 int VAR_1 ;
 int VAR_2 ;


 struct arm_smmu_domain* FUNC_0 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_1(struct iommu_domain *VAR_3,
        enum iommu_attr VAR_4, void *VAR_5)
{
 struct arm_smmu_domain *VAR_6 = FUNC_0(VAR_3);

 switch(VAR_3->type) {
 case 128:
  switch (VAR_4) {
  case 130:
   *(int *)VAR_5 = (VAR_6->stage == VAR_0);
   return 0;
  default:
   return -VAR_2;
  }
  break;
 case 129:
  switch (VAR_4) {
  case 131:
   *(int *)VAR_5 = VAR_6->non_strict;
   return 0;
  default:
   return -VAR_2;
  }
  break;
 default:
  return -VAR_1;
 }
}
