
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct picolcd_data {int led_state; struct led_classdev** led; } ;
struct led_classdev {TYPE_1__* dev; } ;
struct hid_device {int dummy; } ;
struct device {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {struct device* parent; } ;


 int VAR_0 ;
 struct picolcd_data* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (struct picolcd_data*) ;
 struct hid_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_1,
   enum led_brightness VAR_2)
{
 struct device *VAR_3;
 struct hid_device *VAR_4;
 struct picolcd_data *VAR_5;
 int VAR_6, VAR_7 = 0;

 VAR_3 = VAR_1->dev->parent;
 VAR_4 = FUNC_2(VAR_3);
 VAR_5 = FUNC_0(VAR_4);
 if (!VAR_5)
  return;
 for (VAR_6 = 0; VAR_6 < 8; VAR_6++) {
  if (VAR_1 != VAR_5->led[VAR_6])
   continue;
  VAR_7 = (VAR_5->led_state >> VAR_6) & 1;
  if (VAR_2 == VAR_0 && VAR_7) {
   VAR_5->led_state &= ~(1 << VAR_6);
   FUNC_1(VAR_5);
  } else if (VAR_2 != VAR_0 && !VAR_7) {
   VAR_5->led_state |= 1 << VAR_6;
   FUNC_1(VAR_5);
  }
  break;
 }
}
