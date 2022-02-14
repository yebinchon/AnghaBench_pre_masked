
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union power_supply_propval {int intval; } ;
typedef int u8 ;
struct steam_device {int voltage; int battery_charge; int lock; } ;
struct power_supply {int dummy; } ;
typedef int s16 ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;




 int VAR_1 ;
 struct steam_device* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_2,
    enum power_supply_property VAR_3,
    union power_supply_propval *VAR_4)
{
 struct steam_device *VAR_5 = FUNC_0(VAR_2);
 unsigned long VAR_6;
 s16 VAR_7;
 u8 VAR_8;
 int VAR_9 = 0;

 FUNC_1(&VAR_5->lock, VAR_6);
 VAR_7 = VAR_5->voltage;
 VAR_8 = VAR_5->battery_charge;
 FUNC_2(&VAR_5->lock, VAR_6);

 switch (VAR_3) {
 case 130:
  VAR_4->intval = 1;
  break;
 case 129:
  VAR_4->intval = VAR_1;
  break;
 case 128:
  VAR_4->intval = VAR_7 * 1000;
  break;
 case 131:
  VAR_4->intval = VAR_8;
  break;
 default:
  VAR_9 = -VAR_0;
  break;
 }
 return VAR_9;
}
