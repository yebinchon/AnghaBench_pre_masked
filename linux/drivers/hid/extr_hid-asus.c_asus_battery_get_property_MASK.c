
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union power_supply_propval {int intval; int strval; } ;
struct power_supply {int dummy; } ;
struct asus_drvdata {int battery_stat; int battery_capacity; TYPE_1__* hdev; scalar_t__ battery_next_query; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_2__ {int name; } ;


 int VAR_0 ;





 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct asus_drvdata*) ;
 scalar_t__ VAR_3 ;
 struct asus_drvdata* FUNC_1 (struct power_supply*) ;
 int FUNC_2 (scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct power_supply *VAR_4,
    enum power_supply_property VAR_5,
    union power_supply_propval *VAR_6)
{
 struct asus_drvdata *VAR_7 = FUNC_1(VAR_4);
 int VAR_8 = 0;

 switch (VAR_5) {
 case 128:
 case 132:
  if (FUNC_2(VAR_7->battery_next_query, VAR_3)) {
   VAR_7->battery_next_query =
      VAR_3 + VAR_2;
   VAR_8 = FUNC_0(VAR_7);
   if (VAR_8)
    return VAR_8;
  }
  if (VAR_5 == 128)
   VAR_6->intval = VAR_7->battery_stat;
  else
   VAR_6->intval = VAR_7->battery_capacity;
  break;
 case 130:
  VAR_6->intval = 1;
  break;
 case 129:
  VAR_6->intval = VAR_1;
  break;
 case 131:
  VAR_6->strval = VAR_7->hdev->name;
  break;
 default:
  VAR_8 = -VAR_0;
  break;
 }

 return VAR_8;
}
