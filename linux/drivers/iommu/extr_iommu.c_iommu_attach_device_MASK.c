
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {int mutex; } ;
struct iommu_domain {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iommu_domain*,struct iommu_group*) ;
 int FUNC_1 (struct iommu_group*) ;
 struct iommu_group* FUNC_2 (struct device*) ;
 int FUNC_3 (struct iommu_group*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iommu_domain *VAR_2, struct device *VAR_3)
{
 struct iommu_group *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_3);
 if (!VAR_4)
  return -VAR_1;





 FUNC_4(&VAR_4->mutex);
 VAR_5 = -VAR_0;
 if (FUNC_1(VAR_4) != 1)
  goto out_unlock;

 VAR_5 = FUNC_0(VAR_2, VAR_4);

out_unlock:
 FUNC_5(&VAR_4->mutex);
 FUNC_3(VAR_4);

 return VAR_5;
}
