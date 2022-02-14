
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; } ;
struct TYPE_2__ {int cmd_battery; int lock; } ;
struct wiimote_data {TYPE_1__ state; } ;
struct power_supply {int dummy; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct wiimote_data* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct wiimote_data*) ;
 int FUNC_4 (struct wiimote_data*) ;
 int FUNC_5 (struct wiimote_data*,int ,int ) ;
 int FUNC_6 (struct wiimote_data*) ;
 int FUNC_7 (struct wiimote_data*) ;

__attribute__((used)) static int FUNC_8(struct power_supply *VAR_5,
           enum power_supply_property VAR_6,
           union power_supply_propval *VAR_7)
{
 struct wiimote_data *VAR_8 = FUNC_0(VAR_5);
 int VAR_9 = 0, VAR_10;
 unsigned long VAR_11;

 if (VAR_6 == VAR_2) {
  VAR_7->intval = VAR_3;
  return 0;
 } else if (VAR_6 != VAR_1) {
  return -VAR_0;
 }

 VAR_9 = FUNC_3(VAR_8);
 if (VAR_9)
  return VAR_9;

 FUNC_1(&VAR_8->state.lock, VAR_11);
 FUNC_5(VAR_8, VAR_4, 0);
 FUNC_7(VAR_8);
 FUNC_2(&VAR_8->state.lock, VAR_11);

 FUNC_6(VAR_8);
 FUNC_4(VAR_8);

 FUNC_1(&VAR_8->state.lock, VAR_11);
 VAR_10 = VAR_8->state.cmd_battery;
 FUNC_2(&VAR_8->state.lock, VAR_11);

 VAR_7->intval = VAR_10 * 100 / 255;
 return VAR_9;
}
