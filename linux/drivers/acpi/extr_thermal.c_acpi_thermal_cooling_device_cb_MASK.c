
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;
typedef struct TYPE_14__ TYPE_11__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct thermal_zone_device {struct acpi_thermal* devdata; } ;
struct thermal_cooling_device {struct acpi_device* devdata; } ;
struct TYPE_15__ {int count; int * handles; } ;
struct TYPE_21__ {int count; int * handles; } ;
struct TYPE_20__ {scalar_t__ valid; } ;
struct TYPE_22__ {TYPE_6__ devices; TYPE_5__ flags; } ;
struct TYPE_18__ {scalar_t__ valid; } ;
struct TYPE_19__ {TYPE_3__ flags; } ;
struct TYPE_16__ {scalar_t__ valid; } ;
struct TYPE_17__ {TYPE_1__ flags; } ;
struct TYPE_14__ {TYPE_10__* active; TYPE_7__ passive; TYPE_4__ hot; TYPE_2__ critical; } ;
struct acpi_thermal {TYPE_12__ devices; TYPE_11__ trips; } ;
struct acpi_device {int dummy; } ;
typedef int acpi_status ;
typedef int acpi_handle ;
struct TYPE_24__ {int count; int * handles; } ;
struct TYPE_23__ {int valid; } ;
struct TYPE_13__ {TYPE_9__ devices; TYPE_8__ flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,struct acpi_device**) ;
 int FUNC_3 (struct thermal_zone_device*,int,struct thermal_cooling_device*,int ,int ,int ) ;
 int FUNC_4 (struct thermal_zone_device*,int,struct thermal_cooling_device*) ;

__attribute__((used)) static int FUNC_5(struct thermal_zone_device *VAR_4,
     struct thermal_cooling_device *VAR_5,
     bool VAR_6)
{
 struct acpi_device *VAR_7 = VAR_5->devdata;
 struct acpi_thermal *VAR_8 = VAR_4->devdata;
 struct acpi_device *VAR_9;
 acpi_status VAR_10;
 acpi_handle VAR_11;
 int VAR_12;
 int VAR_13;
 int VAR_14 = -1;
 int VAR_15 = 0;

 if (VAR_8->trips.critical.flags.valid)
  VAR_14++;

 if (VAR_8->trips.hot.flags.valid)
  VAR_14++;

 if (VAR_8->trips.passive.flags.valid) {
  VAR_14++;
  for (VAR_12 = 0; VAR_12 < VAR_8->trips.passive.devices.count;
      VAR_12++) {
   VAR_11 = VAR_8->trips.passive.devices.handles[VAR_12];
   VAR_10 = FUNC_2(VAR_11, &VAR_9);
   if (FUNC_0(VAR_10) || VAR_9 != VAR_7)
    continue;
   if (VAR_6)
    VAR_15 =
     FUNC_3
     (VAR_4, VAR_14, VAR_5,
      VAR_1, VAR_1,
      VAR_3);
   else
    VAR_15 =
     FUNC_4
     (VAR_4, VAR_14, VAR_5);
   if (VAR_15)
    goto failed;
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
  if (!VAR_8->trips.active[VAR_12].flags.valid)
   break;
  VAR_14++;
  for (VAR_13 = 0;
      VAR_13 < VAR_8->trips.active[VAR_12].devices.count;
      VAR_13++) {
   VAR_11 = VAR_8->trips.active[VAR_12].devices.handles[VAR_13];
   VAR_10 = FUNC_2(VAR_11, &VAR_9);
   if (FUNC_0(VAR_10) || VAR_9 != VAR_7)
    continue;
   if (VAR_6)
    VAR_15 = FUNC_3
     (VAR_4, VAR_14, VAR_5,
      VAR_1, VAR_1,
      VAR_3);
   else
    VAR_15 = FUNC_4
     (VAR_4, VAR_14, VAR_5);
   if (VAR_15)
    goto failed;
  }
 }

 for (VAR_12 = 0; VAR_12 < VAR_8->devices.count; VAR_12++) {
  VAR_11 = VAR_8->devices.handles[VAR_12];
  VAR_10 = FUNC_2(VAR_11, &VAR_9);
  if (FUNC_1(VAR_10) && (VAR_9 == VAR_7)) {
   if (VAR_6)
    VAR_15 = FUNC_3
      (VAR_4, VAR_2,
       VAR_5, VAR_1,
       VAR_1,
       VAR_3);
   else
    VAR_15 = FUNC_4
      (VAR_4, VAR_2,
       VAR_5);
   if (VAR_15)
    goto failed;
  }
 }

failed:
 return VAR_15;
}
