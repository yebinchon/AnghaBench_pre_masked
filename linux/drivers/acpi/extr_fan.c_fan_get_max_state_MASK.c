
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thermal_cooling_device {struct acpi_device* devdata; } ;
struct acpi_fan {int fps_count; scalar_t__ acpi4; } ;
struct acpi_device {int dummy; } ;


 struct acpi_fan* FUNC_0 (struct acpi_device*) ;

__attribute__((used)) static int FUNC_1(struct thermal_cooling_device *VAR_0, unsigned long
        *VAR_1)
{
 struct acpi_device *VAR_2 = VAR_0->devdata;
 struct acpi_fan *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3->acpi4)
  *VAR_1 = VAR_3->fps_count - 1;
 else
  *VAR_1 = 1;
 return 0;
}
