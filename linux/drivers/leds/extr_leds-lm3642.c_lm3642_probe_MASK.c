
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lm3642_platform_data {int strobe_pin; int torch_pin; int tx_pin; } ;
struct TYPE_3__ {char* name; int max_brightness; char* default_trigger; int brightness_set_blocking; int groups; } ;
struct lm3642_chip_data {TYPE_1__ cdev_flash; TYPE_1__ cdev_torch; int * dev; TYPE_1__ cdev_indicator; int lock; int regmap; int strobe_pin; int torch_pin; int tx_pin; struct lm3642_platform_data* pdata; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 struct lm3642_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*) ;
 struct lm3642_chip_data* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct lm3642_chip_data*) ;
 int FUNC_9 (struct device*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (struct lm3642_chip_data*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_11,
      const struct i2c_device_id *VAR_12)
{
 struct lm3642_platform_data *VAR_13 = FUNC_3(&VAR_11->dev);
 struct lm3642_chip_data *VAR_14;

 int VAR_15;

 if (!FUNC_7(VAR_11->adapter, VAR_4)) {
  FUNC_2(&VAR_11->dev, "i2c functionality check fail.\n");
  return -VAR_2;
 }

 if (VAR_13 == ((void*)0)) {
  FUNC_2(&VAR_11->dev, "needs Platform Data.\n");
  return -VAR_0;
 }

 VAR_14 = FUNC_5(&VAR_11->dev,
       sizeof(struct lm3642_chip_data), VAR_3);
 if (!VAR_14)
  return -VAR_1;

 VAR_14->dev = &VAR_11->dev;
 VAR_14->pdata = VAR_13;

 VAR_14->tx_pin = VAR_13->tx_pin;
 VAR_14->torch_pin = VAR_13->torch_pin;
 VAR_14->strobe_pin = VAR_13->strobe_pin;

 VAR_14->regmap = FUNC_6(VAR_11, &VAR_7);
 if (FUNC_0(VAR_14->regmap)) {
  VAR_15 = FUNC_1(VAR_14->regmap);
  FUNC_2(&VAR_11->dev, "Failed to allocate register map: %d\n",
   VAR_15);
  return VAR_15;
 }

 FUNC_12(&VAR_14->lock);
 FUNC_8(VAR_11, VAR_14);

 VAR_15 = FUNC_11(VAR_14);
 if (VAR_15 < 0)
  goto err_out;


 VAR_14->cdev_flash.name = "flash";
 VAR_14->cdev_flash.max_brightness = 16;
 VAR_14->cdev_flash.brightness_set_blocking = VAR_8;
 VAR_14->cdev_flash.default_trigger = "flash";
 VAR_14->cdev_flash.groups = VAR_5,
 VAR_15 = FUNC_9((struct device *)
        &VAR_11->dev, &VAR_14->cdev_flash);
 if (VAR_15 < 0) {
  FUNC_2(VAR_14->dev, "failed to register flash\n");
  goto err_out;
 }


 VAR_14->cdev_torch.name = "torch";
 VAR_14->cdev_torch.max_brightness = 8;
 VAR_14->cdev_torch.brightness_set_blocking = VAR_9;
 VAR_14->cdev_torch.default_trigger = "torch";
 VAR_14->cdev_torch.groups = VAR_10,
 VAR_15 = FUNC_9((struct device *)
        &VAR_11->dev, &VAR_14->cdev_torch);
 if (VAR_15 < 0) {
  FUNC_2(VAR_14->dev, "failed to register torch\n");
  goto err_create_torch_file;
 }


 VAR_14->cdev_indicator.name = "indicator";
 VAR_14->cdev_indicator.max_brightness = 8;
 VAR_14->cdev_indicator.brightness_set_blocking =
      VAR_6;
 VAR_15 = FUNC_9((struct device *)
        &VAR_11->dev, &VAR_14->cdev_indicator);
 if (VAR_15 < 0) {
  FUNC_2(VAR_14->dev, "failed to register indicator\n");
  goto err_create_indicator_file;
 }

 FUNC_4(&VAR_11->dev, "LM3642 is initialized\n");
 return 0;

err_create_indicator_file:
 FUNC_10(&VAR_14->cdev_torch);
err_create_torch_file:
 FUNC_10(&VAR_14->cdev_flash);
err_out:
 return VAR_15;
}
