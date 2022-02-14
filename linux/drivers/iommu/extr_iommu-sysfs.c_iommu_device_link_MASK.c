
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_device {TYPE_1__* dev; } ;
struct device {int kobj; } ;
struct TYPE_2__ {int kobj; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct iommu_device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *,char*,int *,int ) ;
 int FUNC_3 (int *,int *,char*) ;
 int FUNC_4 (int *,char*,int ) ;

int FUNC_5(struct iommu_device *VAR_1, struct device *VAR_2)
{
 int VAR_3;

 if (!VAR_1 || FUNC_0(VAR_1))
  return -VAR_0;

 VAR_3 = FUNC_2(&VAR_1->dev->kobj, "devices",
          &VAR_2->kobj, FUNC_1(VAR_2));
 if (VAR_3)
  return VAR_3;

 VAR_3 = FUNC_3(&VAR_2->kobj, &VAR_1->dev->kobj, "iommu");
 if (VAR_3)
  FUNC_4(&VAR_1->dev->kobj, "devices",
          FUNC_1(VAR_2));

 return VAR_3;
}
