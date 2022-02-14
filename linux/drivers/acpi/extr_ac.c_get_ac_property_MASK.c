
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
struct power_supply {int dummy; } ;
struct acpi_ac {int state; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;

 scalar_t__ FUNC_0 (struct acpi_ac*) ;
 struct acpi_ac* FUNC_1 (struct power_supply*) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_2,
      enum power_supply_property VAR_3,
      union power_supply_propval *VAR_4)
{
 struct acpi_ac *VAR_5 = FUNC_1(VAR_2);

 if (!VAR_5)
  return -VAR_1;

 if (FUNC_0(VAR_5))
  return -VAR_1;

 switch (VAR_3) {
 case 128:
  VAR_4->intval = VAR_5->state;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
