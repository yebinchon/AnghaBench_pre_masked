
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {int mutex; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct iommu_domain*,struct iommu_group*) ;
 int FUNC_2 (struct iommu_group*) ;
 struct iommu_group* FUNC_3 (struct device*) ;
 int FUNC_4 (struct iommu_group*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(struct iommu_domain *VAR_0, struct device *VAR_1)
{
 struct iommu_group *VAR_2;

 VAR_2 = FUNC_3(VAR_1);
 if (!VAR_2)
  return;

 FUNC_5(&VAR_2->mutex);
 if (FUNC_2(VAR_2) != 1) {
  FUNC_0(1);
  goto out_unlock;
 }

 FUNC_1(VAR_0, VAR_2);

out_unlock:
 FUNC_6(&VAR_2->mutex);
 FUNC_4(VAR_2);
}
