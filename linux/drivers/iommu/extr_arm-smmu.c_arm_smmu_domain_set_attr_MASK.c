
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int type; } ;
struct arm_smmu_domain {int non_strict; int init_mutex; int stage; int smmu; } ;
typedef enum iommu_attr { ____Placeholder_iommu_attr } iommu_attr ;


 int VAR_0 ;
 int VAR_1 ;


 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct arm_smmu_domain* FUNC_2 (struct iommu_domain*) ;

__attribute__((used)) static int FUNC_3(struct iommu_domain *VAR_5,
        enum iommu_attr VAR_6, void *VAR_7)
{
 int VAR_8 = 0;
 struct arm_smmu_domain *VAR_9 = FUNC_2(VAR_5);

 FUNC_0(&VAR_9->init_mutex);

 switch(VAR_5->type) {
 case 128:
  switch (VAR_6) {
  case 130:
   if (VAR_9->smmu) {
    VAR_8 = -VAR_4;
    goto out_unlock;
   }

   if (*(int *)VAR_7)
    VAR_9->stage = VAR_0;
   else
    VAR_9->stage = VAR_1;
   break;
  default:
   VAR_8 = -VAR_3;
  }
  break;
 case 129:
  switch (VAR_6) {
  case 131:
   VAR_9->non_strict = *(int *)VAR_7;
   break;
  default:
   VAR_8 = -VAR_3;
  }
  break;
 default:
  VAR_8 = -VAR_2;
 }
out_unlock:
 FUNC_1(&VAR_9->init_mutex);
 return VAR_8;
}
