
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tlc591xx_priv {struct tlc591xx_led* leds; int regmap; } ;
struct TYPE_2__ {int name; int max_brightness; int brightness_set_blocking; } ;
struct tlc591xx_led {unsigned int led_no; TYPE_1__ ldev; struct tlc591xx_priv* priv; int active; } ;
struct tlc591xx {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (struct device*,char*,int ) ;
 int FUNC_1 (struct device*,TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_2 (struct tlc591xx_priv*,unsigned int) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static int
FUNC_4(struct device *VAR_4,
     struct tlc591xx_priv *VAR_5,
     const struct tlc591xx *VAR_6)
{
 unsigned int VAR_7;
 int VAR_8 = 0;

 FUNC_3(VAR_5->regmap, VAR_1);
 for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
  struct tlc591xx_led *VAR_9 = &VAR_5->leds[VAR_7];

  if (!VAR_9->active)
   continue;

  VAR_9->priv = VAR_5;
  VAR_9->led_no = VAR_7;
  VAR_9->ldev.brightness_set_blocking = VAR_3;
  VAR_9->ldev.max_brightness = VAR_0;
  VAR_8 = FUNC_1(VAR_4, &VAR_9->ldev);
  if (VAR_8 < 0) {
   FUNC_0(VAR_4, "couldn't register LED %s\n",
    VAR_9->ldev.name);
   goto exit;
  }
 }

 return 0;

exit:
 FUNC_2(VAR_5, VAR_7);
 return VAR_8;
}
