
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct lm355x_platform_data {int dummy; } ;
struct TYPE_3__ {char* name; int max_brightness; char* default_trigger; int groups; int brightness_set_blocking; } ;
struct lm355x_chip_data {int type; TYPE_1__ cdev_flash; TYPE_1__ cdev_torch; TYPE_1__ cdev_indicator; int lock; int regmap; struct lm355x_platform_data* pdata; int regs; int * dev; } ;
struct i2c_device_id {int driver_data; } ;
struct i2c_client {int dev; int adapter; } ;
struct device {int dummy; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,char*,...) ;
 struct lm355x_platform_data* FUNC_3 (int *) ;
 int FUNC_4 (int *,char*,int ) ;
 struct lm355x_chip_data* FUNC_5 (int *,int,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (struct i2c_client*,struct lm355x_chip_data*) ;
 int FUNC_9 (struct device*,TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (struct lm355x_chip_data*) ;
 int VAR_8 ;
 int VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_14,
      const struct i2c_device_id *VAR_15)
{
 struct lm355x_platform_data *VAR_16 = FUNC_3(&VAR_14->dev);
 struct lm355x_chip_data *VAR_17;

 int VAR_18;

 if (!FUNC_7(VAR_14->adapter, VAR_5)) {
  FUNC_2(&VAR_14->dev, "i2c functionality check fail.\n");
  return -VAR_3;
 }

 if (VAR_16 == ((void*)0)) {
  FUNC_2(&VAR_14->dev, "needs Platform Data.\n");
  return -VAR_0;
 }

 VAR_17 = FUNC_5(&VAR_14->dev,
       sizeof(struct lm355x_chip_data), VAR_4);
 if (!VAR_17)
  return -VAR_1;

 VAR_17->dev = &VAR_14->dev;
 VAR_17->type = VAR_15->driver_data;
 switch (VAR_15->driver_data) {
 case 129:
  VAR_17->regs = VAR_6;
  break;
 case 128:
  VAR_17->regs = VAR_7;
  break;
 default:
  return -VAR_2;
 }
 VAR_17->pdata = VAR_16;

 VAR_17->regmap = FUNC_6(VAR_14, &VAR_11);
 if (FUNC_0(VAR_17->regmap)) {
  VAR_18 = FUNC_1(VAR_17->regmap);
  FUNC_2(&VAR_14->dev,
   "Failed to allocate register map: %d\n", VAR_18);
  return VAR_18;
 }

 FUNC_12(&VAR_17->lock);
 FUNC_8(VAR_14, VAR_17);

 VAR_18 = FUNC_11(VAR_17);
 if (VAR_18 < 0)
  goto err_out;


 VAR_17->cdev_flash.name = "flash";
 VAR_17->cdev_flash.max_brightness = 16;
 VAR_17->cdev_flash.brightness_set_blocking = VAR_12;
 VAR_17->cdev_flash.default_trigger = "flash";
 VAR_18 = FUNC_9((struct device *)
        &VAR_14->dev, &VAR_17->cdev_flash);
 if (VAR_18 < 0)
  goto err_out;

 VAR_17->cdev_torch.name = "torch";
 VAR_17->cdev_torch.max_brightness = 8;
 VAR_17->cdev_torch.brightness_set_blocking = VAR_13;
 VAR_17->cdev_torch.default_trigger = "torch";
 VAR_18 = FUNC_9((struct device *)
        &VAR_14->dev, &VAR_17->cdev_torch);
 if (VAR_18 < 0)
  goto err_create_torch_file;

 VAR_17->cdev_indicator.name = "indicator";
 if (VAR_15->driver_data == 129)
  VAR_17->cdev_indicator.max_brightness = 4;
 else
  VAR_17->cdev_indicator.max_brightness = 8;
 VAR_17->cdev_indicator.brightness_set_blocking =
     VAR_8;

 if (VAR_15->driver_data == 128)
  VAR_17->cdev_indicator.groups = VAR_9;
 VAR_18 = FUNC_9((struct device *)
        &VAR_14->dev, &VAR_17->cdev_indicator);
 if (VAR_18 < 0)
  goto err_create_indicator_file;

 FUNC_4(&VAR_14->dev, "%s is initialized\n",
   VAR_10[VAR_15->driver_data]);
 return 0;

err_create_indicator_file:
 FUNC_10(&VAR_17->cdev_torch);
err_create_torch_file:
 FUNC_10(&VAR_17->cdev_flash);
err_out:
 return VAR_18;
}
