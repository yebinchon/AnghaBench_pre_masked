
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
struct sony_sc {int battery_charging; int battery_capacity; int cable_state; int lock; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;




 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct sony_sc* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_5,
         enum power_supply_property VAR_6,
         union power_supply_propval *VAR_7)
{
 struct sony_sc *VAR_8 = FUNC_0(VAR_5);
 unsigned long VAR_9;
 int VAR_10 = 0;
 u8 VAR_11, VAR_12, VAR_13;

 FUNC_1(&VAR_8->lock, VAR_9);
 VAR_11 = VAR_8->battery_charging;
 VAR_12 = VAR_8->battery_capacity;
 VAR_13 = VAR_8->cable_state;
 FUNC_2(&VAR_8->lock, VAR_9);

 switch (VAR_6) {
 case 130:
  VAR_7->intval = 1;
  break;
 case 129:
  VAR_7->intval = VAR_1;
  break;
 case 131:
  VAR_7->intval = VAR_12;
  break;
 case 128:
  if (VAR_11)
   VAR_7->intval = VAR_2;
  else
   if (VAR_12 == 100 && VAR_13)
    VAR_7->intval = VAR_4;
   else
    VAR_7->intval = VAR_3;
  break;
 default:
  VAR_10 = -VAR_0;
  break;
 }
 return VAR_10;
}
