
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; int lock; } ;
struct wiimote_data {TYPE_1__ state; struct led_classdev** leds; } ;
struct led_classdev {TYPE_2__* dev; } ;
struct device {int dummy; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;
struct TYPE_4__ {struct device* parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 struct wiimote_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

__attribute__((used)) static enum led_brightness FUNC_4(struct led_classdev *VAR_2)
{
 struct device *VAR_3 = VAR_2->dev->parent;
 struct wiimote_data *VAR_4 = FUNC_1(VAR_3);
 int VAR_5;
 unsigned long VAR_6;
 bool VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < 4; ++VAR_5) {
  if (VAR_4->leds[VAR_5] == VAR_2) {
   FUNC_2(&VAR_4->state.lock, VAR_6);
   VAR_7 = VAR_4->state.flags & FUNC_0(VAR_5 + 1);
   FUNC_3(&VAR_4->state.lock, VAR_6);
   break;
  }
 }

 return VAR_7 ? VAR_0 : VAR_1;
}
