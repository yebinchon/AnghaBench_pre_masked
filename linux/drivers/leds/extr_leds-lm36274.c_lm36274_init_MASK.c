
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm36274 {int num_leds; int* led_sources; int regmap; int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static int FUNC_2(struct lm36274 *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_3->num_leds; VAR_5++)
  VAR_4 |= (1 << VAR_3->led_sources[VAR_5]);

 if (!VAR_4) {
  FUNC_0(VAR_3->dev, "No LEDs were enabled\n");
  return -VAR_0;
 }

 VAR_4 |= VAR_1;

 return FUNC_1(VAR_3->regmap, VAR_2,
       VAR_4);
}
