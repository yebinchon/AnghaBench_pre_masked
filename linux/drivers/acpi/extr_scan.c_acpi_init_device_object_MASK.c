
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int match_driver; int initialized; int enumeration_by_parent; } ;
struct TYPE_6__ {int ids; } ;
struct TYPE_4__ {int * ops; } ;
struct acpi_device {int device_type; int dep_unmet; int dev; TYPE_2__ flags; TYPE_3__ pnp; TYPE_1__ fwnode; int parent; int handle; } ;
typedef int acpi_handle ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct acpi_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct acpi_device*) ;
 int FUNC_4 (struct acpi_device*) ;
 int VAR_0 ;
 int FUNC_5 (struct acpi_device*) ;
 int FUNC_6 (struct acpi_device*) ;
 int FUNC_7 (struct acpi_device*) ;
 int FUNC_8 (struct acpi_device*,unsigned long long) ;
 int FUNC_9 (int ,TYPE_3__*,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *) ;

void FUNC_12(struct acpi_device *VAR_1, acpi_handle VAR_2,
        int VAR_3, unsigned long long VAR_4)
{
 FUNC_0(&VAR_1->pnp.ids);
 VAR_1->device_type = VAR_3;
 VAR_1->handle = VAR_2;
 VAR_1->parent = FUNC_2(VAR_2);
 VAR_1->fwnode.ops = &VAR_0;
 FUNC_8(VAR_1, VAR_4);
 FUNC_5(VAR_1);
 FUNC_9(VAR_2, &VAR_1->pnp, VAR_3);
 FUNC_7(VAR_1);
 FUNC_1(VAR_1);
 VAR_1->flags.match_driver = 0;
 VAR_1->flags.initialized = 1;
 VAR_1->flags.enumeration_by_parent =
  FUNC_4(VAR_1);
 FUNC_3(VAR_1);
 FUNC_11(&VAR_1->dev);
 FUNC_10(&VAR_1->dev, 1);
 FUNC_6(VAR_1);

 VAR_1->dep_unmet = 1;
}
