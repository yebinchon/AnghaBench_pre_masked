
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct acpi_video_device {TYPE_4__* cooling_dev; TYPE_2__* dev; TYPE_5__* brightness; int * backlight; } ;
struct TYPE_10__ {struct TYPE_10__* levels; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_9__ {TYPE_3__ device; } ;
struct TYPE_6__ {int kobj; } ;
struct TYPE_7__ {TYPE_1__ dev; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_5__*) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_4(struct acpi_video_device *VAR_0)
{
 if (VAR_0->backlight) {
  FUNC_0(VAR_0->backlight);
  VAR_0->backlight = ((void*)0);
 }
 if (VAR_0->brightness) {
  FUNC_1(VAR_0->brightness->levels);
  FUNC_1(VAR_0->brightness);
  VAR_0->brightness = ((void*)0);
 }
 if (VAR_0->cooling_dev) {
  FUNC_2(&VAR_0->dev->dev.kobj, "thermal_cooling");
  FUNC_2(&VAR_0->cooling_dev->device.kobj, "device");
  FUNC_3(VAR_0->cooling_dev);
  VAR_0->cooling_dev = ((void*)0);
 }
}
