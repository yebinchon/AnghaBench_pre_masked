
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct led_classdev {int dummy; } ;
struct gpio_led_data {int blinking; int (* platform_gpio_blink_set ) (int ,int ,unsigned long*,unsigned long*) ;int gpiod; } ;


 int VAR_0 ;
 struct gpio_led_data* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (int ,int ,unsigned long*,unsigned long*) ;

__attribute__((used)) static int FUNC_2(struct led_classdev *VAR_1,
 unsigned long *VAR_2, unsigned long *VAR_3)
{
 struct gpio_led_data *VAR_4 = FUNC_0(VAR_1);

 VAR_4->blinking = 1;
 return VAR_4->platform_gpio_blink_set(VAR_4->gpiod, VAR_0,
      VAR_2, VAR_3);
}
