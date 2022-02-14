
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct acpi_power_meter_resource {int num_domain_devices; int holders_dir; struct acpi_device** domain_devices; } ;
struct TYPE_2__ {int kobj; } ;
struct acpi_device {TYPE_1__ dev; } ;


 int FUNC_0 (struct acpi_device**) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static void FUNC_5(struct acpi_power_meter_resource *VAR_0)
{
 int VAR_1;

 if (!VAR_0->num_domain_devices)
  return;

 for (VAR_1 = 0; VAR_1 < VAR_0->num_domain_devices; VAR_1++) {
  struct acpi_device *VAR_2 = VAR_0->domain_devices[VAR_1];
  if (!VAR_2)
   continue;

  FUNC_4(VAR_0->holders_dir,
      FUNC_1(&VAR_2->dev.kobj));
  FUNC_3(&VAR_2->dev);
 }

 FUNC_0(VAR_0->domain_devices);
 FUNC_2(VAR_0->holders_dir);
 VAR_0->num_domain_devices = 0;
}
