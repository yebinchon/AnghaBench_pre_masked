
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct thermal_zone_device {struct acpi_thermal* devdata; } ;
struct TYPE_14__ {scalar_t__ valid; } ;
struct TYPE_15__ {int temperature; TYPE_5__ flags; } ;
struct TYPE_12__ {scalar_t__ valid; } ;
struct TYPE_13__ {int temperature; TYPE_3__ flags; } ;
struct TYPE_10__ {scalar_t__ valid; } ;
struct TYPE_11__ {int temperature; TYPE_1__ flags; } ;
struct TYPE_18__ {TYPE_8__* active; TYPE_6__ passive; TYPE_4__ hot; TYPE_2__ critical; } ;
struct acpi_thermal {int kelvin_offset; TYPE_9__ trips; } ;
struct TYPE_16__ {scalar_t__ valid; } ;
struct TYPE_17__ {int temperature; TYPE_7__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_1(struct thermal_zone_device *VAR_2,
     int VAR_3, int *VAR_4)
{
 struct acpi_thermal *VAR_5 = VAR_2->devdata;
 int VAR_6;

 if (!VAR_5 || VAR_3 < 0)
  return -VAR_1;

 if (VAR_5->trips.critical.flags.valid) {
  if (!VAR_3) {
   *VAR_4 = FUNC_0(
    VAR_5->trips.critical.temperature,
    VAR_5->kelvin_offset);
   return 0;
  }
  VAR_3--;
 }

 if (VAR_5->trips.hot.flags.valid) {
  if (!VAR_3) {
   *VAR_4 = FUNC_0(
    VAR_5->trips.hot.temperature,
    VAR_5->kelvin_offset);
   return 0;
  }
  VAR_3--;
 }

 if (VAR_5->trips.passive.flags.valid) {
  if (!VAR_3) {
   *VAR_4 = FUNC_0(
    VAR_5->trips.passive.temperature,
    VAR_5->kelvin_offset);
   return 0;
  }
  VAR_3--;
 }

 for (VAR_6 = 0; VAR_6 < VAR_0 &&
  VAR_5->trips.active[VAR_6].flags.valid; VAR_6++) {
  if (!VAR_3) {
   *VAR_4 = FUNC_0(
    VAR_5->trips.active[VAR_6].temperature,
    VAR_5->kelvin_offset);
   return 0;
  }
  VAR_3--;
 }

 return -VAR_1;
}
