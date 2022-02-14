
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct gpio_leds_priv {int num_leds; struct gpio_led_data* leds; } ;
struct gpio_led_platform_data {int num_leds; int gpio_blink_set; struct gpio_led* leds; } ;
struct gpio_led_data {struct gpio_leds_priv* gpiod; } ;
struct gpio_led {int name; int gpio; struct gpio_leds_priv* gpiod; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct gpio_leds_priv*) ;
 int FUNC_1 (struct gpio_leds_priv*) ;
 int FUNC_2 (struct gpio_led const*,struct gpio_led_data*,int *,int *,int ) ;
 struct gpio_led_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ,int ) ;
 struct gpio_leds_priv* FUNC_5 (int *,int ,int ) ;
 struct gpio_leds_priv* FUNC_6 (int *,int,struct gpio_led const*) ;
 struct gpio_leds_priv* FUNC_7 (struct platform_device*) ;
 int FUNC_8 (struct platform_device*,struct gpio_leds_priv*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int FUNC_10(struct platform_device *VAR_2)
{
 struct gpio_led_platform_data *VAR_3 = FUNC_3(&VAR_2->dev);
 struct gpio_leds_priv *VAR_4;
 int VAR_5, VAR_6 = 0;

 if (VAR_3 && VAR_3->num_leds) {
  VAR_4 = FUNC_5(&VAR_2->dev,
    FUNC_9(VAR_3->num_leds),
     VAR_1);
  if (!VAR_4)
   return -VAR_0;

  VAR_4->num_leds = VAR_3->num_leds;
  for (VAR_5 = 0; VAR_5 < VAR_4->num_leds; VAR_5++) {
   const struct gpio_led *VAR_7 = &VAR_3->leds[VAR_5];
   struct gpio_led_data *VAR_8 = &VAR_4->leds[VAR_5];

   if (VAR_7->gpiod)
    VAR_8->gpiod = VAR_7->gpiod;
   else
    VAR_8->gpiod =
     FUNC_6(&VAR_2->dev,
          VAR_5, VAR_7);
   if (FUNC_0(VAR_8->gpiod)) {
    FUNC_4(&VAR_2->dev, "Skipping unavailable LED gpio %d (%s)\n",
      VAR_7->gpio, VAR_7->name);
    continue;
   }

   VAR_6 = FUNC_2(VAR_7, VAR_8,
           &VAR_2->dev, ((void*)0),
           VAR_3->gpio_blink_set);
   if (VAR_6 < 0)
    return VAR_6;
  }
 } else {
  VAR_4 = FUNC_7(VAR_2);
  if (FUNC_0(VAR_4))
   return FUNC_1(VAR_4);
 }

 FUNC_8(VAR_2, VAR_4);

 return 0;
}
