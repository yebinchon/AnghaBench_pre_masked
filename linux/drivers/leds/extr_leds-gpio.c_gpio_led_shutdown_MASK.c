
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct gpio_leds_priv {int num_leds; struct gpio_led_data* leds; } ;
struct TYPE_2__ {int flags; } ;
struct gpio_led_data {TYPE_1__ cdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 struct gpio_leds_priv* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static void FUNC_2(struct platform_device *VAR_2)
{
 struct gpio_leds_priv *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_3->num_leds; VAR_4++) {
  struct gpio_led_data *VAR_5 = &VAR_3->leds[VAR_4];

  if (!(VAR_5->cdev.flags & VAR_1))
   FUNC_0(&VAR_5->cdev, VAR_0);
 }
}
