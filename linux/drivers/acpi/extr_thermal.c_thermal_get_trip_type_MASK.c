
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
struct TYPE_15__ {TYPE_5__ flags; } ;
struct TYPE_12__ {scalar_t__ valid; } ;
struct TYPE_13__ {TYPE_3__ flags; } ;
struct TYPE_10__ {scalar_t__ valid; } ;
struct TYPE_11__ {TYPE_1__ flags; } ;
struct TYPE_18__ {TYPE_8__* active; TYPE_6__ passive; TYPE_4__ hot; TYPE_2__ critical; } ;
struct acpi_thermal {TYPE_9__ trips; } ;
typedef enum thermal_trip_type { ____Placeholder_thermal_trip_type } thermal_trip_type ;
struct TYPE_16__ {scalar_t__ valid; } ;
struct TYPE_17__ {TYPE_7__ flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_0(struct thermal_zone_device *VAR_6,
     int VAR_7, enum thermal_trip_type *VAR_8)
{
 struct acpi_thermal *VAR_9 = VAR_6->devdata;
 int VAR_10;

 if (!VAR_9 || VAR_7 < 0)
  return -VAR_1;

 if (VAR_9->trips.critical.flags.valid) {
  if (!VAR_7) {
   *VAR_8 = VAR_3;
   return 0;
  }
  VAR_7--;
 }

 if (VAR_9->trips.hot.flags.valid) {
  if (!VAR_7) {
   *VAR_8 = VAR_4;
   return 0;
  }
  VAR_7--;
 }

 if (VAR_9->trips.passive.flags.valid) {
  if (!VAR_7) {
   *VAR_8 = VAR_5;
   return 0;
  }
  VAR_7--;
 }

 for (VAR_10 = 0; VAR_10 < VAR_0 &&
  VAR_9->trips.active[VAR_10].flags.valid; VAR_10++) {
  if (!VAR_7) {
   *VAR_8 = VAR_2;
   return 0;
  }
  VAR_7--;
 }

 return -VAR_1;
}
