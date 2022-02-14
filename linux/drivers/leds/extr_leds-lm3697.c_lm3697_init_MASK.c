
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3697_led {int lmu_data; } ;
struct lm3697 {int bank_cfg; TYPE_1__* client; struct lm3697_led* leds; int regmap; scalar_t__ enable_gpio; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct lm3697 *VAR_5)
{
 struct lm3697_led *VAR_6;
 int VAR_7, VAR_8;

 if (VAR_5->enable_gpio) {
  FUNC_1(VAR_5->enable_gpio, 1);
 } else {
  VAR_8 = FUNC_2(VAR_5->regmap, VAR_3, VAR_4);
  if (VAR_8) {
   FUNC_0(&VAR_5->client->dev, "Cannot reset the device\n");
   goto out;
  }
 }

 VAR_8 = FUNC_2(VAR_5->regmap, VAR_0, 0x0);
 if (VAR_8) {
  FUNC_0(&VAR_5->client->dev, "Cannot write ctrl enable\n");
  goto out;
 }

 VAR_8 = FUNC_2(VAR_5->regmap, VAR_2, VAR_5->bank_cfg);
 if (VAR_8)
  FUNC_0(&VAR_5->client->dev, "Cannot write OUTPUT config\n");

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = &VAR_5->leds[VAR_7];
  VAR_8 = FUNC_3(&VAR_6->lmu_data);
  if (VAR_8)
   FUNC_0(&VAR_5->client->dev, "Setting the ramp rate failed\n");
 }
out:
 return VAR_8;
}
