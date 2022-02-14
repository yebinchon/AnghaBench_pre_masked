
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {TYPE_1__* dev; } ;
struct lenovo_drvdata_tpkbd {int led_state; struct led_classdev led_micmute; } ;
struct hid_device {int dummy; } ;
struct device {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct lenovo_drvdata_tpkbd* FUNC_0 (struct hid_device*) ;
 struct hid_device* FUNC_1 (struct device*) ;

__attribute__((used)) static enum led_brightness FUNC_2(
   struct led_classdev *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev->parent;
 struct hid_device *VAR_4 = FUNC_1(VAR_3);
 struct lenovo_drvdata_tpkbd *VAR_5 = FUNC_0(VAR_4);
 int VAR_6 = 0;

 if (VAR_2 == &VAR_5->led_micmute)
  VAR_6 = 1;

 return VAR_5->led_state & (1 << VAR_6)
    ? VAR_0
    : VAR_1;
}
