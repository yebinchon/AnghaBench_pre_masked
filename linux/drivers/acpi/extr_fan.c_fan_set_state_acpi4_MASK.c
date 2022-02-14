
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_fan {unsigned long fps_count; TYPE_1__* fps; } ;
struct acpi_device {int dev; int handle; } ;
typedef int acpi_status ;
struct TYPE_2__ {int control; } ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 struct acpi_fan* FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int *,char*) ;

__attribute__((used)) static int FUNC_4(struct acpi_device *VAR_1, unsigned long VAR_2)
{
 struct acpi_fan *VAR_3 = FUNC_1(VAR_1);
 acpi_status VAR_4;

 if (VAR_2 >= VAR_3->fps_count)
  return -VAR_0;

 VAR_4 = FUNC_2(VAR_1->handle, "_FSL",
         VAR_3->fps[VAR_2].control);
 if (FUNC_0(VAR_4)) {
  FUNC_3(&VAR_1->dev, "Failed to set state by _FSL\n");
  return VAR_4;
 }

 return 0;
}
