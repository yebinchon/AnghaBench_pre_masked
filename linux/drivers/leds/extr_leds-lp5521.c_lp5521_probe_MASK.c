
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct lp55xx_platform_data {int num_channels; } ;
struct lp55xx_led {int dummy; } ;
struct lp55xx_chip {int lock; int * cfg; struct lp55xx_platform_data* pdata; struct i2c_client* cl; } ;
struct i2c_device_id {int name; } ;
struct TYPE_7__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct lp55xx_platform_data*) ;
 int FUNC_1 (struct lp55xx_platform_data*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct lp55xx_platform_data* FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,char*,int ) ;
 struct lp55xx_led* FUNC_5 (TYPE_1__*,int ,int,int ) ;
 struct lp55xx_chip* FUNC_6 (TYPE_1__*,int,int ) ;
 int FUNC_7 (struct i2c_client*,struct lp55xx_led*) ;
 int VAR_3 ;
 int FUNC_8 (struct lp55xx_chip*) ;
 int FUNC_9 (struct lp55xx_chip*) ;
 struct lp55xx_platform_data* FUNC_10 (TYPE_1__*,struct device_node*) ;
 int FUNC_11 (struct lp55xx_led*,struct lp55xx_chip*) ;
 int FUNC_12 (struct lp55xx_chip*) ;
 int FUNC_13 (struct lp55xx_led*,struct lp55xx_chip*) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_4,
   const struct i2c_device_id *VAR_5)
{
 int VAR_6;
 struct lp55xx_chip *VAR_7;
 struct lp55xx_led *VAR_8;
 struct lp55xx_platform_data *VAR_9 = FUNC_3(&VAR_4->dev);
 struct device_node *VAR_10 = VAR_4->dev.of_node;

 if (!VAR_9) {
  if (VAR_10) {
   VAR_9 = FUNC_10(&VAR_4->dev, VAR_10);
   if (FUNC_0(VAR_9))
    return FUNC_1(VAR_9);
  } else {
   FUNC_2(&VAR_4->dev, "no platform data\n");
   return -VAR_0;
  }
 }

 VAR_7 = FUNC_6(&VAR_4->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_5(&VAR_4->dev,
   VAR_9->num_channels, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_7->cl = VAR_4;
 VAR_7->pdata = VAR_9;
 VAR_7->cfg = &VAR_3;

 FUNC_14(&VAR_7->lock);

 FUNC_7(VAR_4, VAR_8);

 VAR_6 = FUNC_9(VAR_7);
 if (VAR_6)
  goto err_init;

 FUNC_4(&VAR_4->dev, "%s programmable led chip found\n", VAR_5->name);

 VAR_6 = FUNC_11(VAR_8, VAR_7);
 if (VAR_6)
  goto err_register_leds;

 VAR_6 = FUNC_12(VAR_7);
 if (VAR_6) {
  FUNC_2(&VAR_4->dev, "registering sysfs failed\n");
  goto err_register_sysfs;
 }

 return 0;

err_register_sysfs:
 FUNC_13(VAR_8, VAR_7);
err_register_leds:
 FUNC_8(VAR_7);
err_init:
 return VAR_6;
}
