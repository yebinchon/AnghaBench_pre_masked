
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_13__ ;
typedef struct TYPE_17__ TYPE_12__ ;
typedef struct TYPE_16__ TYPE_11__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_25__ {scalar_t__ valid; } ;
struct TYPE_26__ {int tsp; TYPE_7__ flags; } ;
struct TYPE_21__ {scalar_t__ valid; } ;
struct TYPE_22__ {TYPE_3__ flags; } ;
struct TYPE_19__ {scalar_t__ valid; } ;
struct TYPE_20__ {TYPE_1__ flags; } ;
struct TYPE_27__ {TYPE_8__ passive; TYPE_6__* active; TYPE_4__ hot; TYPE_2__ critical; } ;
struct acpi_thermal {int polling_frequency; int tz_enabled; TYPE_13__* thermal_zone; TYPE_11__* device; TYPE_9__ trips; } ;
typedef int acpi_status ;
struct TYPE_23__ {scalar_t__ valid; } ;
struct TYPE_24__ {TYPE_5__ flags; } ;
struct TYPE_15__ {int kobj; } ;
struct TYPE_18__ {int id; TYPE_10__ device; } ;
struct TYPE_17__ {int kobj; } ;
struct TYPE_16__ {TYPE_12__ dev; int handle; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_13__*) ;
 int FUNC_2 (int ,TYPE_13__*) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_12__*,char*,int ) ;
 int FUNC_4 (int *,int *,char*) ;
 void* FUNC_5 (char*,int,int ,struct acpi_thermal*,int *,int *,int,int) ;

__attribute__((used)) static int FUNC_6(struct acpi_thermal *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;
 acpi_status VAR_6;
 int VAR_7;

 if (VAR_3->trips.critical.flags.valid)
  VAR_4++;

 if (VAR_3->trips.hot.flags.valid)
  VAR_4++;

 if (VAR_3->trips.passive.flags.valid)
  VAR_4++;

 for (VAR_7 = 0; VAR_7 < VAR_0 &&
   VAR_3->trips.active[VAR_7].flags.valid; VAR_7++, VAR_4++);

 if (VAR_3->trips.passive.flags.valid)
  VAR_3->thermal_zone =
   FUNC_5("acpitz", VAR_4, 0, VAR_3,
      &VAR_2, ((void*)0),
           VAR_3->trips.passive.tsp*100,
           VAR_3->polling_frequency*100);
 else
  VAR_3->thermal_zone =
   FUNC_5("acpitz", VAR_4, 0, VAR_3,
      &VAR_2, ((void*)0),
      0, VAR_3->polling_frequency*100);
 if (FUNC_1(VAR_3->thermal_zone))
  return -VAR_1;

 VAR_5 = FUNC_4(&VAR_3->device->dev.kobj,
       &VAR_3->thermal_zone->device.kobj, "thermal_zone");
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_4(&VAR_3->thermal_zone->device.kobj,
       &VAR_3->device->dev.kobj, "device");
 if (VAR_5)
  return VAR_5;

 VAR_6 = FUNC_2(VAR_3->device->handle,
            VAR_3->thermal_zone);
 if (FUNC_0(VAR_6))
  return -VAR_1;

 VAR_3->tz_enabled = 1;

 FUNC_3(&VAR_3->device->dev, "registered as thermal_zone%d\n",
   VAR_3->thermal_zone->id);
 return 0;
}
