
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union power_supply_propval {int intval; int strval; } ;
struct wacom_battery {int bat_connected; int battery_capacity; int bat_status; int ps_connected; int bat_charging; TYPE_2__* wacom; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ wacom_wac; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct wacom_battery* FUNC_0 (struct power_supply*) ;

__attribute__((used)) static int FUNC_1(struct power_supply *VAR_7,
          enum power_supply_property VAR_8,
          union power_supply_propval *VAR_9)
{
 struct wacom_battery *VAR_10 = FUNC_0(VAR_7);
 int VAR_11 = 0;

 switch (VAR_8) {
  case 131:
   VAR_9->strval = VAR_10->wacom->wacom_wac.name;
   break;
  case 130:
   VAR_9->intval = VAR_10->bat_connected;
   break;
  case 129:
   VAR_9->intval = VAR_1;
   break;
  case 132:
   VAR_9->intval = VAR_10->battery_capacity;
   break;
  case 128:
   if (VAR_10->bat_status != VAR_6)
    VAR_9->intval = VAR_10->bat_status;
   else if (VAR_10->bat_charging)
    VAR_9->intval = VAR_2;
   else if (VAR_10->battery_capacity == 100 &&
        VAR_10->ps_connected)
    VAR_9->intval = VAR_4;
   else if (VAR_10->ps_connected)
    VAR_9->intval = VAR_5;
   else
    VAR_9->intval = VAR_3;
   break;
  default:
   VAR_11 = -VAR_0;
   break;
 }

 return VAR_11;
}
