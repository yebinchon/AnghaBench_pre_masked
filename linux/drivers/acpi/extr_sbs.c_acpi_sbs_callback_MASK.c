
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct acpi_sbs {scalar_t__ charger_present; int batteries_supported; struct acpi_battery* battery; scalar_t__ manager_present; TYPE_2__* charger; scalar_t__ charger_exists; } ;
struct acpi_battery {scalar_t__ present; TYPE_4__* bat; } ;
struct TYPE_7__ {int kobj; } ;
struct TYPE_8__ {TYPE_3__ dev; } ;
struct TYPE_5__ {int kobj; } ;
struct TYPE_6__ {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct acpi_sbs*) ;
 int FUNC_1 (struct acpi_battery*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void FUNC_3(void *VAR_2)
{
 int VAR_3;
 struct acpi_sbs *VAR_4 = VAR_2;
 struct acpi_battery *VAR_5;
 u8 VAR_6 = VAR_4->charger_present;
 u8 VAR_7;

 if (VAR_4->charger_exists) {
  FUNC_0(VAR_4);
  if (VAR_4->charger_present != VAR_6)
   FUNC_2(&VAR_4->charger->dev.kobj, VAR_0);
 }

 if (VAR_4->manager_present) {
  for (VAR_3 = 0; VAR_3 < VAR_1; ++VAR_3) {
   if (!(VAR_4->batteries_supported & (1 << VAR_3)))
    continue;
   VAR_5 = &VAR_4->battery[VAR_3];
   VAR_7 = VAR_5->present;
   FUNC_1(VAR_5);
   if (VAR_7 == VAR_5->present)
    continue;
   FUNC_2(&VAR_5->bat->dev.kobj, VAR_0);
  }
 }
}
