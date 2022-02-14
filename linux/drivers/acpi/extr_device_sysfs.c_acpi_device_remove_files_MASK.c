
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ bus_address; } ;
struct TYPE_10__ {TYPE_4__ type; scalar_t__ unique_id; int str_obj; } ;
struct TYPE_7__ {scalar_t__ power_resources; } ;
struct TYPE_8__ {TYPE_2__ flags; } ;
struct TYPE_6__ {scalar_t__ power_manageable; } ;
struct acpi_device {int dev; scalar_t__ handle; TYPE_5__ pnp; TYPE_3__ power; TYPE_1__ flags; int data; } ;


 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(struct acpi_device *VAR_12)
{
 FUNC_1(&VAR_12->data);

 if (VAR_12->flags.power_manageable) {
  FUNC_2(&VAR_12->dev, &VAR_7);
  if (VAR_12->power.flags.power_resources)
   FUNC_2(&VAR_12->dev,
        &VAR_8);
 }




 if (FUNC_0(VAR_12->handle, "_STR")) {
  FUNC_3(VAR_12->pnp.str_obj);
  FUNC_2(&VAR_12->dev, &VAR_1);
 }



 if (FUNC_0(VAR_12->handle, "_EJ0"))
  FUNC_2(&VAR_12->dev, &VAR_2);

 if (FUNC_0(VAR_12->handle, "_SUN"))
  FUNC_2(&VAR_12->dev, &VAR_10);

 if (FUNC_0(VAR_12->handle, "_HRV"))
  FUNC_2(&VAR_12->dev, &VAR_4);

 if (VAR_12->pnp.unique_id)
  FUNC_2(&VAR_12->dev, &VAR_11);
 if (VAR_12->pnp.type.bus_address)
  FUNC_2(&VAR_12->dev, &VAR_0);
 FUNC_2(&VAR_12->dev, &VAR_5);
 FUNC_2(&VAR_12->dev, &VAR_3);
 if (FUNC_0(VAR_12->handle, "_STA"))
  FUNC_2(&VAR_12->dev, &VAR_9);
 if (VAR_12->handle)
  FUNC_2(&VAR_12->dev, &VAR_6);
}
