
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ notifier_present; } ;
struct acpi_device_wakeup {scalar_t__ sleep_state; int gpe_number; int gpe_device; TYPE_1__ flags; } ;
struct acpi_device_id {char* member_0; int member_1; } ;
struct acpi_device {int handle; int dev; struct acpi_device_wakeup wakeup; } ;
typedef int acpi_status ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (struct acpi_device*,struct acpi_device_id const*) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static bool FUNC_5(struct acpi_device *VAR_2)
{
 static const struct acpi_device_id VAR_3[] = {
  {"PNP0C0C", 0},
  {"PNP0C0D", 0},
  {"PNP0C0E", 0},
  {"", 0},
 };
 struct acpi_device_wakeup *VAR_4 = &VAR_2->wakeup;
 acpi_status VAR_5;

 VAR_4->flags.notifier_present = 0;


 if (!FUNC_2(VAR_2, VAR_3)) {
  if (!FUNC_2(VAR_2, &VAR_3[1])) {

   if (VAR_4->sleep_state == VAR_1)
    VAR_4->sleep_state = VAR_0;
  }
  FUNC_1(VAR_4->gpe_device, VAR_4->gpe_number);
  FUNC_4(&VAR_2->dev, 1);
  return 1;
 }

 VAR_5 = FUNC_3(VAR_2->handle, VAR_4->gpe_device,
      VAR_4->gpe_number);
 return FUNC_0(VAR_5);
}
