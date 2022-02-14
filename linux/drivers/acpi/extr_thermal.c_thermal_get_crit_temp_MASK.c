
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct thermal_zone_device {struct acpi_thermal* devdata; } ;
struct TYPE_4__ {scalar_t__ valid; } ;
struct TYPE_5__ {int temperature; TYPE_1__ flags; } ;
struct TYPE_6__ {TYPE_2__ critical; } ;
struct acpi_thermal {int kelvin_offset; TYPE_3__ trips; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_1,
    int *VAR_2)
{
 struct acpi_thermal *VAR_3 = VAR_1->devdata;

 if (VAR_3->trips.critical.flags.valid) {
  *VAR_2 = FUNC_0(
    VAR_3->trips.critical.temperature,
    VAR_3->kelvin_offset);
  return 0;
 } else
  return -VAR_0;
}
