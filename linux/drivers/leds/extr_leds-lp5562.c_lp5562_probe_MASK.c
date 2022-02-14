
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct lp55xx_platform_data {int num_channels; } ;
struct lp55xx_led {int dummy; } ;
struct lp55xx_chip {int lock; int * cfg; struct lp55xx_platform_data* pdata; struct i2c_client* cl; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_6__ {struct device_node* of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct device_node {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct lp55xx_platform_data*) ;
 int FUNC_1 (struct lp55xx_platform_data*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 struct lp55xx_platform_data* FUNC_3 (TYPE_1__*) ;
 struct lp55xx_led* FUNC_4 (TYPE_1__*,int ,int,int ) ;
 struct lp55xx_chip* FUNC_5 (TYPE_1__*,int,int ) ;
 int FUNC_6 (struct i2c_client*,struct lp55xx_led*) ;
 int VAR_3 ;
 int FUNC_7 (struct lp55xx_chip*) ;
 int FUNC_8 (struct lp55xx_chip*) ;
 struct lp55xx_platform_data* FUNC_9 (TYPE_1__*,struct device_node*) ;
 int FUNC_10 (struct lp55xx_led*,struct lp55xx_chip*) ;
 int FUNC_11 (struct lp55xx_chip*) ;
 int FUNC_12 (struct lp55xx_led*,struct lp55xx_chip*) ;
 int FUNC_13 (int *) ;

__attribute__((used)) static int FUNC_14(struct i2c_client *VAR_4,
   const struct i2c_device_id *VAR_5)
{
 int VAR_6;
 struct lp55xx_chip *VAR_7;
 struct lp55xx_led *VAR_8;
 struct lp55xx_platform_data *VAR_9 = FUNC_3(&VAR_4->dev);
 struct device_node *VAR_10 = VAR_4->dev.of_node;

 if (!VAR_9) {
  if (VAR_10) {
   VAR_9 = FUNC_9(&VAR_4->dev, VAR_10);
   if (FUNC_0(VAR_9))
    return FUNC_1(VAR_9);
  } else {
   FUNC_2(&VAR_4->dev, "no platform data\n");
   return -VAR_0;
  }
 }

 VAR_7 = FUNC_5(&VAR_4->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_8 = FUNC_4(&VAR_4->dev,
   VAR_9->num_channels, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 VAR_7->cl = VAR_4;
 VAR_7->pdata = VAR_9;
 VAR_7->cfg = &VAR_3;

 FUNC_13(&VAR_7->lock);

 FUNC_6(VAR_4, VAR_8);

 VAR_6 = FUNC_8(VAR_7);
 if (VAR_6)
  goto err_init;

 VAR_6 = FUNC_10(VAR_8, VAR_7);
 if (VAR_6)
  goto err_register_leds;

 VAR_6 = FUNC_11(VAR_7);
 if (VAR_6) {
  FUNC_2(&VAR_4->dev, "registering sysfs failed\n");
  goto err_register_sysfs;
 }

 return 0;

err_register_sysfs:
 FUNC_12(VAR_8, VAR_7);
err_register_leds:
 FUNC_7(VAR_7);
err_init:
 return VAR_6;
}
