
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct gpio_led_data {int gpiod; scalar_t__ can_sleep; scalar_t__ blinking; int (* platform_gpio_blink_set ) (int ,int,int *,int *) ;} ;
typedef enum led_brightness { ____Placeholder_led_brightness } led_brightness ;


 int VAR_0 ;
 struct gpio_led_data* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int,int *,int *) ;

__attribute__((used)) static void FUNC_4(struct led_classdev *VAR_1,
 enum led_brightness VAR_2)
{
 struct gpio_led_data *VAR_3 = FUNC_0(VAR_1);
 int VAR_4;

 if (VAR_2 == VAR_0)
  VAR_4 = 0;
 else
  VAR_4 = 1;

 if (VAR_3->blinking) {
  VAR_3->platform_gpio_blink_set(VAR_3->gpiod, VAR_4,
       ((void*)0), ((void*)0));
  VAR_3->blinking = 0;
 } else {
  if (VAR_3->can_sleep)
   FUNC_2(VAR_3->gpiod, VAR_4);
  else
   FUNC_1(VAR_3->gpiod, VAR_4);
 }
}
