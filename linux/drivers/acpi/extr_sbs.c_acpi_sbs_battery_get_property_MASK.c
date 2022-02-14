
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; int strval; } ;
struct power_supply {int dummy; } ;
struct acpi_battery {int present; int cycle_count; int design_voltage; int voltage_now; int state_of_charge; int design_capacity; int full_charge_capacity; int capacity_now; int manufacturer_name; int device_name; int temp_now; int rate_avg; int rate_now; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct acpi_battery*) ;
 int FUNC_2 (struct acpi_battery*) ;
 int FUNC_3 (struct acpi_battery*) ;
 int FUNC_4 (struct acpi_battery*) ;
 int FUNC_5 (struct acpi_battery*) ;
 int FUNC_6 (struct acpi_battery*) ;
 struct acpi_battery* FUNC_7 (struct power_supply*) ;

__attribute__((used)) static int FUNC_8(struct power_supply *VAR_5,
      enum power_supply_property VAR_6,
      union power_supply_propval *VAR_7)
{
 struct acpi_battery *VAR_8 = FUNC_7(VAR_5);

 if ((!VAR_8->present) && VAR_6 != 133)
  return -VAR_1;

 FUNC_1(VAR_8);
 switch (VAR_6) {
 case 132:
  if (VAR_8->rate_now < 0)
   VAR_7->intval = VAR_3;
  else if (VAR_8->rate_now > 0)
   VAR_7->intval = VAR_2;
  else
   VAR_7->intval = VAR_4;
  break;
 case 133:
  VAR_7->intval = VAR_8->present;
  break;
 case 131:
  VAR_7->intval = FUNC_5(VAR_8);
  break;
 case 141:
  VAR_7->intval = VAR_8->cycle_count;
  break;
 case 129:
  VAR_7->intval = VAR_8->design_voltage *
   FUNC_6(VAR_8) * 1000;
  break;
 case 128:
  VAR_7->intval = VAR_8->voltage_now *
    FUNC_6(VAR_8) * 1000;
  break;
 case 142:
 case 134:
  VAR_7->intval = FUNC_0(VAR_8->rate_now) *
    FUNC_2(VAR_8) * 1000;
  VAR_7->intval *= (FUNC_3(VAR_8)) ?
    (VAR_8->voltage_now *
    FUNC_6(VAR_8) / 1000) : 1;
  break;
 case 143:
 case 135:
  VAR_7->intval = FUNC_0(VAR_8->rate_avg) *
    FUNC_2(VAR_8) * 1000;
  VAR_7->intval *= (FUNC_3(VAR_8)) ?
    (VAR_8->voltage_now *
    FUNC_6(VAR_8) / 1000) : 1;
  break;
 case 147:
  VAR_7->intval = VAR_8->state_of_charge;
  break;
 case 145:
 case 139:
  VAR_7->intval = VAR_8->design_capacity *
   FUNC_4(VAR_8) * 1000;
  break;
 case 146:
 case 140:
  VAR_7->intval = VAR_8->full_charge_capacity *
   FUNC_4(VAR_8) * 1000;
  break;
 case 144:
 case 138:
  VAR_7->intval = VAR_8->capacity_now *
    FUNC_4(VAR_8) * 1000;
  break;
 case 130:
  VAR_7->intval = VAR_8->temp_now - 2730;
  break;
 case 136:
  VAR_7->strval = VAR_8->device_name;
  break;
 case 137:
  VAR_7->strval = VAR_8->manufacturer_name;
  break;
 default:
  return -VAR_0;
 }
 return 0;
}
