
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sc27xx_led_priv {struct sc27xx_led* leds; int regmap; } ;
struct TYPE_2__ {char* default_trigger; int pattern_clear; int pattern_set; int brightness_set_blocking; } ;
struct sc27xx_led {int line; TYPE_1__ ldev; int fwnode; struct sc27xx_led_priv* priv; int active; } ;
struct led_init_data {char* devicename; char* default_label; int fwnode; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct device*,TYPE_1__*,struct led_init_data*) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_2(struct device *VAR_4, struct sc27xx_led_priv *VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = FUNC_1(VAR_5->regmap);
 if (VAR_7)
  return VAR_7;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  struct sc27xx_led *VAR_8 = &VAR_5->leds[VAR_6];
  struct led_init_data VAR_9 = {};

  if (!VAR_8->active)
   continue;

  VAR_8->line = VAR_6;
  VAR_8->priv = VAR_5;
  VAR_8->ldev.brightness_set_blocking = VAR_3;
  VAR_8->ldev.pattern_set = VAR_2;
  VAR_8->ldev.pattern_clear = VAR_1;
  VAR_8->ldev.default_trigger = "pattern";

  VAR_9.fwnode = VAR_8->fwnode;
  VAR_9.devicename = "sc27xx";
  VAR_9.default_label = ":";

  VAR_7 = FUNC_0(VAR_4, &VAR_8->ldev,
           &VAR_9);
  if (VAR_7)
   return VAR_7;
 }

 return 0;
}
