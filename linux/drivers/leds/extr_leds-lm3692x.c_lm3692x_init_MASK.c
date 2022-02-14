
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lm3692x_led {int led_enable; TYPE_1__* client; scalar_t__ regulator; scalar_t__ enable_gpio; int regmap; int model_id; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (scalar_t__,int) ;
 int FUNC_2 (struct lm3692x_led*) ;
 int FUNC_3 (int ,int ,int ,int) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;

__attribute__((used)) static int FUNC_7(struct lm3692x_led *VAR_22)
{
 int VAR_23;
 int VAR_24;

 if (VAR_22->regulator) {
  VAR_24 = FUNC_6(VAR_22->regulator);
  if (VAR_24) {
   FUNC_0(&VAR_22->client->dev,
    "Failed to enable regulator\n");
   return VAR_24;
  }
 }

 if (VAR_22->enable_gpio)
  FUNC_1(VAR_22->enable_gpio, 1);

 VAR_24 = FUNC_2(VAR_22);
 if (VAR_24) {
  FUNC_0(&VAR_22->client->dev, "Cannot read/clear faults\n");
  goto out;
 }

 VAR_24 = FUNC_4(VAR_22->regmap, VAR_9, 0x00);
 if (VAR_24)
  goto out;







 VAR_24 = FUNC_4(VAR_22->regmap, VAR_13, VAR_12);
 if (VAR_24)
  goto out;




 VAR_24 = FUNC_4(VAR_22->regmap, VAR_11, 0);
 if (VAR_24)
  goto out;

 VAR_24 = FUNC_4(VAR_22->regmap, VAR_10, 0);
 if (VAR_24)
  goto out;

 VAR_24 = FUNC_4(VAR_22->regmap, VAR_17,
  VAR_18 | VAR_20);
 if (VAR_24)
  goto out;

 VAR_24 = FUNC_4(VAR_22->regmap, VAR_7,
   VAR_8 |
   VAR_5 |
   VAR_21);
 if (VAR_24)
  goto out;

 VAR_24 = FUNC_4(VAR_22->regmap, VAR_3, 0x00);
 if (VAR_24)
  goto out;

 VAR_24 = FUNC_4(VAR_22->regmap, VAR_4, 0x00);
 if (VAR_24)
  goto out;

 VAR_24 = FUNC_4(VAR_22->regmap, VAR_6, 0x00);
 if (VAR_24)
  goto out;

 VAR_24 = FUNC_4(VAR_22->regmap, VAR_9,
   VAR_5 | VAR_19);
 if (VAR_24)
  goto out;

 switch (VAR_22->led_enable) {
 case 0:
 default:
  if (VAR_22->model_id == VAR_2)
   VAR_23 = VAR_15 | VAR_16 |
          VAR_1;
  else
   VAR_23 = VAR_15 | VAR_16;

  break;
 case 1:
  VAR_23 = VAR_15;
  break;
 case 2:
  VAR_23 = VAR_16;
  break;

 case 3:
  if (VAR_22->model_id == VAR_2) {
   VAR_23 = VAR_1;
   break;
  }

  VAR_24 = -VAR_0;
  FUNC_0(&VAR_22->client->dev,
   "LED3 sync not available on this device\n");
  goto out;
 }

 VAR_24 = FUNC_3(VAR_22->regmap, VAR_13, VAR_14,
     VAR_23 | VAR_12);

 return VAR_24;
out:
 FUNC_0(&VAR_22->client->dev, "Fail writing initialization values\n");

 if (VAR_22->enable_gpio)
  FUNC_1(VAR_22->enable_gpio, 0);

 if (VAR_22->regulator) {
  VAR_24 = FUNC_5(VAR_22->regulator);
  if (VAR_24)
   FUNC_0(&VAR_22->client->dev,
    "Failed to disable regulator\n");
 }

 return VAR_24;
}
