
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iommu_device {TYPE_1__* dev; } ;
struct device {int kobj; } ;
struct TYPE_2__ {int kobj; } ;


 scalar_t__ FUNC_0 (struct iommu_device*) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *,char*,int ) ;

void FUNC_4(struct iommu_device *VAR_0, struct device *VAR_1)
{
 if (!VAR_0 || FUNC_0(VAR_0))
  return;

 FUNC_2(&VAR_1->kobj, "iommu");
 FUNC_3(&VAR_0->dev->kobj, "devices", FUNC_1(VAR_1));
}
