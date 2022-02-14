
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int flags; int brightness; int max_brightness; scalar_t__ blink_delay_off; scalar_t__ blink_delay_on; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct led_classdev*,int ) ;
 int FUNC_1 (int,int ) ;

int FUNC_2(struct led_classdev *VAR_2,
       enum led_brightness VAR_3)
{
 if (VAR_2->blink_delay_on || VAR_2->blink_delay_off)
  return -VAR_0;

 VAR_2->brightness = FUNC_1(VAR_3, VAR_2->max_brightness);

 if (VAR_2->flags & VAR_1)
  return 0;

 return FUNC_0(VAR_2, VAR_2->brightness);
}
