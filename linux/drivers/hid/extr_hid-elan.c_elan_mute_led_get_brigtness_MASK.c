
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {TYPE_1__* dev; } ;
struct hid_device {int dummy; } ;
struct elan_drvdata {int mute_led_state; } ;
struct device {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {struct device* parent; } ;


 struct elan_drvdata* FUNC_0 (struct hid_device*) ;
 struct hid_device* FUNC_1 (struct device*) ;

__attribute__((used)) static enum led_brightness FUNC_2(struct led_classdev *VAR_0)
{
 struct device *VAR_1 = VAR_0->dev->parent;
 struct hid_device *VAR_2 = FUNC_1(VAR_1);
 struct elan_drvdata *VAR_3 = FUNC_0(VAR_2);

 return VAR_3->mute_led_state;
}
