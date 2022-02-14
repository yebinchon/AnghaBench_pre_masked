
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


struct TYPE_12__ {int bus_id; } ;
struct TYPE_8__ {int ignore_parent; scalar_t__ explicit_get; scalar_t__ power_resources; } ;
struct TYPE_9__ {TYPE_2__ flags; } ;
struct TYPE_7__ {int power_manageable; } ;
struct acpi_device {TYPE_6__ pnp; TYPE_5__* parent; TYPE_3__ power; TYPE_1__ flags; } ;
struct TYPE_10__ {int state; } ;
struct TYPE_11__ {TYPE_4__ power; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct acpi_device*,int*) ;
 int FUNC_2 (struct acpi_device*,int*) ;
 int FUNC_3 (int) ;

int FUNC_4(struct acpi_device *VAR_7, int *VAR_8)
{
 int VAR_9 = VAR_5;
 int VAR_10;

 if (!VAR_7 || !VAR_8)
  return -VAR_6;

 if (!VAR_7->flags.power_manageable) {

  *VAR_8 = VAR_7->parent ?
   VAR_7->parent->power.state : VAR_1;
  goto out;
 }





 if (VAR_7->power.flags.power_resources) {
  VAR_10 = FUNC_2(VAR_7, &VAR_9);
  if (VAR_10)
   return VAR_10;
 }
 if (VAR_7->power.flags.explicit_get) {
  int VAR_11;

  VAR_10 = FUNC_1(VAR_7, &VAR_11);
  if (VAR_10)
   return VAR_10;
  if (VAR_11 > VAR_9 && VAR_11 < VAR_3)
   VAR_9 = VAR_11;
  else if (VAR_9 == VAR_5)
   VAR_9 = VAR_11 > VAR_2 ? VAR_4 : VAR_11;
 }






 if (!VAR_7->power.flags.ignore_parent && VAR_7->parent
     && VAR_7->parent->power.state == VAR_5
     && VAR_9 == VAR_1)
  VAR_7->parent->power.state = VAR_1;

 *VAR_8 = VAR_9;

 out:
 FUNC_0((VAR_0, "Device [%s] power state is %s\n",
     VAR_7->pnp.bus_id, FUNC_3(*VAR_8)));

 return 0;
}
