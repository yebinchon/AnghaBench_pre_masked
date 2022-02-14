
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acpi_power_meter_resource {int num_sensors; TYPE_3__* sensors; TYPE_2__* acpi_dev; } ;
struct TYPE_5__ {int name; } ;
struct TYPE_8__ {TYPE_1__ attr; } ;
struct TYPE_7__ {TYPE_4__ dev_attr; } ;
struct TYPE_6__ {int dev; } ;


 int FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (struct acpi_power_meter_resource*) ;

__attribute__((used)) static void FUNC_2(struct acpi_power_meter_resource *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_sensors; VAR_1++) {
  if (!VAR_0->sensors[VAR_1].dev_attr.attr.name)
   continue;
  FUNC_0(&VAR_0->acpi_dev->dev,
       &VAR_0->sensors[VAR_1].dev_attr);
 }

 FUNC_1(VAR_0);

 VAR_0->num_sensors = 0;
}
