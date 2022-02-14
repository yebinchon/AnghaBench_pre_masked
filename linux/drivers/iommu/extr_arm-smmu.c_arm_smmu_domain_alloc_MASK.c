
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
struct arm_smmu_domain {struct iommu_domain domain; int cb_lock; int init_mutex; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 scalar_t__ FUNC_0 (struct iommu_domain*) ;
 int FUNC_1 (struct arm_smmu_domain*) ;
 struct arm_smmu_domain* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static struct iommu_domain *FUNC_5(unsigned VAR_5)
{
 struct arm_smmu_domain *VAR_6;

 if (VAR_5 != VAR_3 &&
     VAR_5 != VAR_1 &&
     VAR_5 != VAR_2)
  return ((void*)0);





 VAR_6 = FUNC_2(sizeof(*VAR_6), VAR_0);
 if (!VAR_6)
  return ((void*)0);

 if (VAR_5 == VAR_1 && (VAR_4 ||
     FUNC_0(&VAR_6->domain))) {
  FUNC_1(VAR_6);
  return ((void*)0);
 }

 FUNC_3(&VAR_6->init_mutex);
 FUNC_4(&VAR_6->cb_lock);

 return &VAR_6->domain;
}
