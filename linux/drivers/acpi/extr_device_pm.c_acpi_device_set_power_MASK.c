
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_16__ {int bus_id; } ;
struct TYPE_14__ {int explicit_get; scalar_t__ power_resources; int ignore_parent; } ;
struct TYPE_15__ {int state; TYPE_6__ flags; TYPE_3__* states; } ;
struct TYPE_9__ {int power_manageable; } ;
struct acpi_device {TYPE_8__ pnp; TYPE_7__ power; int dev; TYPE_5__* parent; int handle; TYPE_1__ flags; } ;
struct TYPE_12__ {int state; } ;
struct TYPE_13__ {TYPE_4__ power; } ;
struct TYPE_10__ {int valid; } ;
struct TYPE_11__ {TYPE_2__ flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct acpi_device*,int*) ;
 int FUNC_2 (struct acpi_device*,int) ;
 int FUNC_3 (int ,char*,int ,int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct acpi_device*,int) ;
 int FUNC_6 (int *,char*,int ,...) ;

int FUNC_7(struct acpi_device *VAR_6, int VAR_7)
{
 int VAR_8 = VAR_7;
 int VAR_9 = 0;

 if (!VAR_6 || !VAR_6->flags.power_manageable
     || (VAR_7 < VAR_1) || (VAR_7 > VAR_2))
  return -VAR_4;

 FUNC_3(VAR_6->handle, "Power state change: %s -> %s\n",
     FUNC_4(VAR_6->power.state),
     FUNC_4(VAR_7));




 if (VAR_7 > VAR_1 && VAR_7 == VAR_6->power.state) {
  FUNC_0((VAR_0, "Device [%s] already in %s\n",
      VAR_6->pnp.bus_id,
      FUNC_4(VAR_7)));
  return 0;
 }

 if (VAR_7 == VAR_2) {




  VAR_7 = VAR_3;

  if (!VAR_6->power.states[VAR_2].flags.valid)
   VAR_8 = VAR_7;
 } else if (!VAR_6->power.states[VAR_7].flags.valid) {
  FUNC_6(&VAR_6->dev, "Power state %s not supported\n",
    FUNC_4(VAR_7));
  return -VAR_5;
 }

 if (!VAR_6->power.flags.ignore_parent &&
     VAR_6->parent && (VAR_7 < VAR_6->parent->power.state)) {
  FUNC_6(&VAR_6->dev,
    "Cannot transition to power state %s for parent in %s\n",
    FUNC_4(VAR_7),
    FUNC_4(VAR_6->parent->power.state));
  return -VAR_5;
 }
 if (VAR_7 > VAR_1) {




  if (VAR_7 < VAR_6->power.state) {
   FUNC_6(&VAR_6->dev, "Cannot transition from %s to %s\n",
     FUNC_4(VAR_6->power.state),
     FUNC_4(VAR_7));
   return -VAR_5;
  }





  if (VAR_6->power.state < VAR_3) {
   VAR_9 = FUNC_2(VAR_6, VAR_7);
   if (VAR_9)
    goto end;
  }

  if (VAR_6->power.flags.power_resources)
   VAR_9 = FUNC_5(VAR_6, VAR_8);
 } else {
  int VAR_10 = VAR_6->power.state;

  if (VAR_6->power.flags.power_resources) {
   VAR_9 = FUNC_5(VAR_6, VAR_1);
   if (VAR_9)
    goto end;
  }

  if (VAR_10 == VAR_1) {
   int VAR_11;


   if (!VAR_6->power.flags.explicit_get)
    return 0;
   VAR_9 = FUNC_1(VAR_6, &VAR_11);
   if (VAR_9 || VAR_11 == VAR_1)
    return 0;
  }

  VAR_9 = FUNC_2(VAR_6, VAR_1);
 }

 end:
 if (VAR_9) {
  FUNC_6(&VAR_6->dev, "Failed to change power state to %s\n",
    FUNC_4(VAR_7));
 } else {
  VAR_6->power.state = VAR_8;
  FUNC_0((VAR_0,
      "Device [%s] transitioned to %s\n",
      VAR_6->pnp.bus_id,
      FUNC_4(VAR_7)));
 }

 return VAR_9;
}
