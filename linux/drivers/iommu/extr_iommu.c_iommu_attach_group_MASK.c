
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {int mutex; } ;
struct iommu_domain {int dummy; } ;


 int FUNC_0 (struct iommu_domain*,struct iommu_group*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct iommu_domain *VAR_0, struct iommu_group *VAR_1)
{
 int VAR_2;

 FUNC_1(&VAR_1->mutex);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 FUNC_2(&VAR_1->mutex);

 return VAR_2;
}
