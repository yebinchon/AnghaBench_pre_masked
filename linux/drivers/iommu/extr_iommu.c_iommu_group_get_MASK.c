
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iommu_group {int devices_kobj; } ;
struct device {struct iommu_group* iommu_group; } ;


 int FUNC_0 (int ) ;

struct iommu_group *FUNC_1(struct device *VAR_0)
{
 struct iommu_group *VAR_1 = VAR_0->iommu_group;

 if (VAR_1)
  FUNC_0(VAR_1->devices_kobj);

 return VAR_1;
}
