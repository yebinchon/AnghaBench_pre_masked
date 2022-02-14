
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct acpi_sbs {int charger_present; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;

 struct acpi_sbs* FUNC_0 (struct power_supply*) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_1,
          enum power_supply_property VAR_2,
          union power_supply_propval *VAR_3)
{
 struct acpi_sbs *VAR_4 = FUNC_0(VAR_1);
 switch (VAR_2) {
 case 128:
  VAR_3->intval = VAR_4->charger_present;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
