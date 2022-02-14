
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int delayed_set_value; int set_brightness_work; } ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int FUNC_0 (struct led_classdev*,int) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct led_classdev *VAR_0,
         enum led_brightness VAR_1)
{

 if (!FUNC_0(VAR_0, VAR_1))
  return;


 VAR_0->delayed_set_value = VAR_1;
 FUNC_1(&VAR_0->set_brightness_work);
}
