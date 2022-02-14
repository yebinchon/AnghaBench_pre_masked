
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct led_classdev {TYPE_1__* dev; } ;
struct hid_device {int dummy; } ;
struct gt683r_led {int* brightnesses; int work; struct led_classdev* led_devs; } ;
struct device {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_2__ {struct device* parent; } ;


 int VAR_0 ;
 struct gt683r_led* FUNC_0 (struct hid_device*) ;
 int FUNC_1 (int *) ;
 struct hid_device* FUNC_2 (struct device*) ;

__attribute__((used)) static void FUNC_3(struct led_classdev *VAR_1,
    enum led_brightness VAR_2)
{
 int VAR_3;
 struct device *VAR_4 = VAR_1->dev->parent;
 struct hid_device *VAR_5 = FUNC_2(VAR_4);
 struct gt683r_led *VAR_6 = FUNC_0(VAR_5);

 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  if (VAR_1 == &VAR_6->led_devs[VAR_3])
   break;
 }

 if (VAR_3 < VAR_0) {
  VAR_6->brightnesses[VAR_3] = VAR_2;
  FUNC_1(&VAR_6->work);
 }
}
