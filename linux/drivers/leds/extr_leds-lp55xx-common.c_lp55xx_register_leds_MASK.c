
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct lp55xx_platform_data {int num_channels; TYPE_2__* led_config; } ;
struct lp55xx_led {struct lp55xx_chip* chip; } ;
struct lp55xx_device_config {int (* set_led_current ) (struct lp55xx_led*,scalar_t__) ;int brightness_fn; } ;
struct lp55xx_chip {int num_leds; TYPE_1__* cl; struct lp55xx_device_config* cfg; struct lp55xx_platform_data* pdata; } ;
struct TYPE_4__ {scalar_t__ led_current; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (struct lp55xx_led*,struct lp55xx_chip*,int) ;
 int FUNC_2 (struct lp55xx_led*,struct lp55xx_chip*) ;
 int FUNC_3 (struct lp55xx_led*,scalar_t__) ;

int FUNC_4(struct lp55xx_led *VAR_1, struct lp55xx_chip *VAR_2)
{
 struct lp55xx_platform_data *VAR_3 = VAR_2->pdata;
 struct lp55xx_device_config *VAR_4 = VAR_2->cfg;
 int VAR_5 = VAR_3->num_channels;
 struct lp55xx_led *VAR_6;
 u8 VAR_7;
 int VAR_8;
 int VAR_9;

 if (!VAR_4->brightness_fn) {
  FUNC_0(&VAR_2->cl->dev, "empty brightness configuration\n");
  return -VAR_0;
 }

 for (VAR_9 = 0; VAR_9 < VAR_5; VAR_9++) {


  if (VAR_3->led_config[VAR_9].led_current == 0)
   continue;

  VAR_7 = VAR_3->led_config[VAR_9].led_current;
  VAR_6 = VAR_1 + VAR_9;
  VAR_8 = FUNC_1(VAR_6, VAR_2, VAR_9);
  if (VAR_8)
   goto err_init_led;

  VAR_2->num_leds++;
  VAR_6->chip = VAR_2;


  if (VAR_4->set_led_current)
   VAR_4->set_led_current(VAR_6, VAR_7);
 }

 return 0;

err_init_led:
 FUNC_2(VAR_1, VAR_2);
 return VAR_8;
}
