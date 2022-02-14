
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_12__ {int kobj; } ;
struct TYPE_10__ {scalar_t__ power_resources; } ;
struct TYPE_11__ {TYPE_4__ flags; } ;
struct TYPE_9__ {scalar_t__ power_manageable; } ;
struct TYPE_7__ {scalar_t__ bus_address; } ;
struct TYPE_8__ {scalar_t__ unique_id; TYPE_1__ type; int * str_obj; int ids; } ;
struct acpi_device {int data; TYPE_6__ dev; TYPE_5__ power; TYPE_3__ flags; scalar_t__ handle; TYPE_2__ pnp; } ;
struct acpi_buffer {int * pointer; int * member_1; int member_0; } ;
typedef int acpi_status ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__,char*,int *,struct acpi_buffer*) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
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
 int VAR_12 ;
 int FUNC_4 (TYPE_6__*,int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct acpi_device *VAR_13)
{
 struct acpi_buffer VAR_14 = {&VAR_0, ((void*)0)};
 acpi_status VAR_15;
 int VAR_16 = 0;




 if (VAR_13->handle) {
  VAR_16 = FUNC_4(&VAR_13->dev, &VAR_7);
  if (VAR_16)
   goto end;
 }

 if (!FUNC_5(&VAR_13->pnp.ids)) {
  VAR_16 = FUNC_4(&VAR_13->dev, &VAR_4);
  if (VAR_16)
   goto end;

  VAR_16 = FUNC_4(&VAR_13->dev, &VAR_6);
  if (VAR_16)
   goto end;
 }




 if (FUNC_3(VAR_13->handle, "_STR")) {
  VAR_15 = FUNC_1(VAR_13->handle, "_STR",
     ((void*)0), &VAR_14);
  if (FUNC_0(VAR_15))
   VAR_14.pointer = ((void*)0);
  VAR_13->pnp.str_obj = VAR_14.pointer;
  VAR_16 = FUNC_4(&VAR_13->dev, &VAR_2);
  if (VAR_16)
   goto end;
 }

 if (VAR_13->pnp.type.bus_address)
  VAR_16 = FUNC_4(&VAR_13->dev, &VAR_1);
 if (VAR_13->pnp.unique_id)
  VAR_16 = FUNC_4(&VAR_13->dev, &VAR_12);

 if (FUNC_3(VAR_13->handle, "_SUN")) {
  VAR_16 = FUNC_4(&VAR_13->dev, &VAR_11);
  if (VAR_16)
   goto end;
 }

 if (FUNC_3(VAR_13->handle, "_HRV")) {
  VAR_16 = FUNC_4(&VAR_13->dev, &VAR_5);
  if (VAR_16)
   goto end;
 }

 if (FUNC_3(VAR_13->handle, "_STA")) {
  VAR_16 = FUNC_4(&VAR_13->dev, &VAR_10);
  if (VAR_16)
   goto end;
 }





 if (FUNC_3(VAR_13->handle, "_EJ0")) {
  VAR_16 = FUNC_4(&VAR_13->dev, &VAR_3);
  if (VAR_16)
   return VAR_16;
 }

 if (VAR_13->flags.power_manageable) {
  VAR_16 = FUNC_4(&VAR_13->dev, &VAR_8);
  if (VAR_16)
   return VAR_16;

  if (VAR_13->power.flags.power_resources)
   VAR_16 = FUNC_4(&VAR_13->dev,
          &VAR_9);
 }

 FUNC_2(&VAR_13->dev.kobj, &VAR_13->data);

end:
 return VAR_16;
}
