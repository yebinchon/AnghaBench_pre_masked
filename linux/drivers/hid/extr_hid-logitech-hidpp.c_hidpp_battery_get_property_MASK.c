
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


union power_supply_propval {char* strval; int intval; } ;
struct power_supply {int dummy; } ;
struct TYPE_3__ {int online; int level; int capacity; int status; } ;
struct hidpp_device {char* name; TYPE_2__* hid_dev; TYPE_1__ battery; } ;
typedef enum power_supply_property { ____Placeholder_power_supply_property } power_supply_property ;
struct TYPE_4__ {char* uniq; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct hidpp_device* FUNC_0 (struct power_supply*) ;
 int FUNC_1 (char*,char*,int) ;

__attribute__((used)) static int FUNC_2(struct power_supply *VAR_2,
          enum power_supply_property VAR_3,
          union power_supply_propval *VAR_4)
{
 struct hidpp_device *VAR_5 = FUNC_0(VAR_2);
 int VAR_6 = 0;

 switch(VAR_3) {
  case 128:
   VAR_4->intval = VAR_5->battery.status;
   break;
  case 135:
   VAR_4->intval = VAR_5->battery.capacity;
   break;
  case 134:
   VAR_4->intval = VAR_5->battery.level;
   break;
  case 130:
   VAR_4->intval = VAR_1;
   break;
  case 131:
   VAR_4->intval = VAR_5->battery.online;
   break;
  case 132:
   if (!FUNC_1(VAR_5->name, "Logitech ", 9))
    VAR_4->strval = VAR_5->name + 9;
   else
    VAR_4->strval = VAR_5->name;
   break;
  case 133:
   VAR_4->strval = "Logitech";
   break;
  case 129:
   VAR_4->strval = VAR_5->hid_dev->uniq;
   break;
  default:
   VAR_6 = -VAR_0;
   break;
 }

 return VAR_6;
}
