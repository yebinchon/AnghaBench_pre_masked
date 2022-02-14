
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; int strval; } ;
struct power_supply {int dummy; } ;
struct acpi_battery {int state; int cycle_count; int design_voltage; int voltage_now; int rate_now; int design_capacity; int full_charge_capacity; int capacity_now; int alarm; int serial_number; int oem_info; int model_number; int flags; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (struct acpi_battery*) ;
 int FUNC_1 (struct acpi_battery*) ;
 int FUNC_2 (struct acpi_battery*) ;
 int FUNC_3 (struct acpi_battery*) ;
 int FUNC_4 (struct acpi_battery*) ;
 int FUNC_5 (int ,int *) ;
 struct acpi_battery* FUNC_6 (struct power_supply*) ;

__attribute__((used)) static int FUNC_7(struct power_supply *VAR_14,
         enum power_supply_property VAR_15,
         union power_supply_propval *VAR_16)
{
 int VAR_17 = 0;
 struct acpi_battery *VAR_18 = FUNC_6(VAR_14);

 if (FUNC_3(VAR_18)) {

  FUNC_0(VAR_18);
 } else if (VAR_15 != 133)
  return -VAR_6;
 switch (VAR_15) {
 case 131:
  if (VAR_18->state & VAR_3)
   VAR_16->intval = FUNC_1(VAR_18);
  else if (VAR_18->state & VAR_1)
   VAR_16->intval = VAR_11;
  else if (FUNC_2(VAR_18))
   VAR_16->intval = VAR_12;
  else
   VAR_16->intval = VAR_13;
  break;
 case 133:
  VAR_16->intval = FUNC_3(VAR_18);
  break;
 case 130:
  VAR_16->intval = FUNC_4(VAR_18);
  break;
 case 140:
  VAR_16->intval = VAR_18->cycle_count;
  break;
 case 129:
  if (VAR_18->design_voltage == VAR_4)
   VAR_17 = -VAR_6;
  else
   VAR_16->intval = VAR_18->design_voltage * 1000;
  break;
 case 128:
  if (VAR_18->voltage_now == VAR_4)
   VAR_17 = -VAR_6;
  else
   VAR_16->intval = VAR_18->voltage_now * 1000;
  break;
 case 141:
 case 134:
  if (VAR_18->rate_now == VAR_4)
   VAR_17 = -VAR_6;
  else
   VAR_16->intval = VAR_18->rate_now * 1000;
  break;
 case 143:
 case 138:
  if (VAR_18->design_capacity == VAR_4)
   VAR_17 = -VAR_6;
  else
   VAR_16->intval = VAR_18->design_capacity * 1000;
  break;
 case 144:
 case 139:
  if (VAR_18->full_charge_capacity == VAR_4)
   VAR_17 = -VAR_6;
  else
   VAR_16->intval = VAR_18->full_charge_capacity * 1000;
  break;
 case 142:
 case 137:
  if (VAR_18->capacity_now == VAR_4)
   VAR_17 = -VAR_6;
  else
   VAR_16->intval = VAR_18->capacity_now * 1000;
  break;
 case 146:
  if (VAR_18->capacity_now && VAR_18->full_charge_capacity)
   VAR_16->intval = VAR_18->capacity_now * 100/
     VAR_18->full_charge_capacity;
  else
   VAR_16->intval = 0;
  break;
 case 145:
  if (VAR_18->state & VAR_2)
   VAR_16->intval = VAR_7;
  else if (FUNC_5(VAR_0, &VAR_18->flags) &&
   (VAR_18->capacity_now <= VAR_18->alarm))
   VAR_16->intval = VAR_9;
  else if (FUNC_2(VAR_18))
   VAR_16->intval = VAR_8;
  else
   VAR_16->intval = VAR_10;
  break;
 case 135:
  VAR_16->strval = VAR_18->model_number;
  break;
 case 136:
  VAR_16->strval = VAR_18->oem_info;
  break;
 case 132:
  VAR_16->strval = VAR_18->serial_number;
  break;
 default:
  VAR_17 = -VAR_5;
 }
 return VAR_17;
}
