
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acpi_device_power_state {int resources; } ;
struct TYPE_7__ {int power_resources; } ;
struct TYPE_8__ {struct acpi_device_power_state* states; TYPE_3__ flags; } ;
struct TYPE_5__ {scalar_t__ valid; } ;
struct TYPE_6__ {int resources; TYPE_1__ flags; } ;
struct acpi_device {TYPE_4__ power; TYPE_2__ wakeup; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct acpi_device *VAR_2)
{
 int VAR_3;

 if (VAR_2->wakeup.flags.valid)
  FUNC_0(&VAR_2->wakeup.resources);

 if (!VAR_2->power.flags.power_resources)
  return;

 for (VAR_3 = VAR_0; VAR_3 <= VAR_1; VAR_3++) {
  struct acpi_device_power_state *VAR_4 = &VAR_2->power.states[VAR_3];
  FUNC_0(&VAR_4->resources);
 }
}
