
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
struct arm_smmu_domain {struct iommu_domain domain; int devices_lock; int devices; int init_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_1 (struct iommu_domain*) ;
 int FUNC_2 (struct arm_smmu_domain*) ;
 struct arm_smmu_domain* FUNC_3 (int,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct iommu_domain *FUNC_6(unsigned VAR_4)
{
 struct arm_smmu_domain *VAR_5;

 if (VAR_4 != VAR_3 &&
     VAR_4 != VAR_1 &&
     VAR_4 != VAR_2)
  return ((void*)0);






 VAR_5 = FUNC_3(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 if (VAR_4 == VAR_1 &&
     FUNC_1(&VAR_5->domain)) {
  FUNC_2(VAR_5);
  return ((void*)0);
 }

 FUNC_4(&VAR_5->init_mutex);
 FUNC_0(&VAR_5->devices);
 FUNC_5(&VAR_5->devices_lock);

 return &VAR_5->domain;
}
