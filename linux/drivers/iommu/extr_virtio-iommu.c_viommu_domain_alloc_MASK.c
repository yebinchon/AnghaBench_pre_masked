
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_domain {int dummy; } ;
struct viommu_domain {struct iommu_domain domain; int mappings; int mappings_lock; int mutex; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct iommu_domain*) ;
 int FUNC_1 (struct viommu_domain*) ;
 struct viommu_domain* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct iommu_domain *FUNC_5(unsigned VAR_4)
{
 struct viommu_domain *VAR_5;

 if (VAR_4 != VAR_2 && VAR_4 != VAR_1)
  return ((void*)0);

 VAR_5 = FUNC_2(sizeof(*VAR_5), VAR_0);
 if (!VAR_5)
  return ((void*)0);

 FUNC_3(&VAR_5->mutex);
 FUNC_4(&VAR_5->mappings_lock);
 VAR_5->mappings = VAR_3;

 if (VAR_4 == VAR_1 &&
     FUNC_0(&VAR_5->domain)) {
  FUNC_1(VAR_5);
  return ((void*)0);
 }

 return &VAR_5->domain;
}
