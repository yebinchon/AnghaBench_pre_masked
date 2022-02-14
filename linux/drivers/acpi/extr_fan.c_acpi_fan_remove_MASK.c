
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct platform_device {TYPE_1__ dev; } ;
struct acpi_fan {TYPE_3__* cdev; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_6__ {TYPE_2__ device; } ;


 struct acpi_fan* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct acpi_fan *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_0->dev.kobj, "thermal_cooling");
 FUNC_1(&VAR_1->cdev->device.kobj, "device");
 FUNC_2(VAR_1->cdev);

 return 0;
}
