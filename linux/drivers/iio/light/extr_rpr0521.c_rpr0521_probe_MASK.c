
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct rpr0521_data {TYPE_3__* drdy_trigger0; int lock; struct regmap* regmap; struct i2c_client* client; } ;
struct regmap {int dummy; } ;
struct TYPE_7__ {int * parent; } ;
struct iio_dev {TYPE_2__ dev; int available_scan_masks; int id; int name; int modes; int num_channels; int channels; int * info; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; scalar_t__ irq; } ;
struct TYPE_6__ {int * parent; } ;
struct TYPE_8__ {int * ops; TYPE_1__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,char*,...) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 TYPE_3__* FUNC_5 (int *,char*,int ,int ) ;
 int FUNC_6 (int *,TYPE_3__*) ;
 int FUNC_7 (int *,struct iio_dev*,int ,int ,int *) ;
 struct regmap* FUNC_8 (struct i2c_client*,int *) ;
 int FUNC_9 (int *,scalar_t__,int ,int ,int,int ,struct iio_dev*) ;
 int FUNC_10 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_11 (struct iio_dev*) ;
 struct rpr0521_data* FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_22 (struct rpr0521_data*) ;
 int FUNC_23 (struct rpr0521_data*) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static int FUNC_24(struct i2c_client *VAR_17,
    const struct i2c_device_id *VAR_18)
{
 struct rpr0521_data *VAR_19;
 struct iio_dev *VAR_20;
 struct regmap *VAR_21;
 int VAR_22;

 VAR_20 = FUNC_4(&VAR_17->dev, sizeof(*VAR_19));
 if (!VAR_20)
  return -VAR_0;

 VAR_21 = FUNC_8(VAR_17, &VAR_13);
 if (FUNC_1(VAR_21)) {
  FUNC_3(&VAR_17->dev, "regmap_init failed!\n");
  return FUNC_2(VAR_21);
 }

 VAR_19 = FUNC_12(VAR_20);
 FUNC_10(VAR_17, VAR_20);
 VAR_19->client = VAR_17;
 VAR_19->regmap = VAR_21;

 FUNC_14(&VAR_19->lock);

 VAR_20->dev.parent = &VAR_17->dev;
 VAR_20->info = &VAR_12;
 VAR_20->name = VAR_4;
 VAR_20->channels = VAR_9;
 VAR_20->num_channels = FUNC_0(VAR_9);
 VAR_20->modes = VAR_1;

 VAR_22 = FUNC_22(VAR_19);
 if (VAR_22 < 0) {
  FUNC_3(&VAR_17->dev, "rpr0521 chip init failed\n");
  return VAR_22;
 }

 VAR_22 = FUNC_18(&VAR_17->dev);
 if (VAR_22 < 0)
  goto err_poweroff;

 FUNC_16(&VAR_17->dev);
 FUNC_19(&VAR_17->dev, VAR_6);
 FUNC_21(&VAR_17->dev);







 if (VAR_17->irq) {

  VAR_19->drdy_trigger0 = FUNC_5(
   VAR_20->dev.parent,
   "%s-dev%d", VAR_20->name, VAR_20->id);
  if (!VAR_19->drdy_trigger0) {
   VAR_22 = -VAR_0;
   goto err_pm_disable;
  }
  VAR_19->drdy_trigger0->dev.parent = VAR_20->dev.parent;
  VAR_19->drdy_trigger0->ops = &VAR_16;
  VAR_20->available_scan_masks = VAR_7;
  FUNC_13(VAR_19->drdy_trigger0, VAR_20);


  VAR_22 = FUNC_9(&VAR_17->dev, VAR_17->irq,
   VAR_10, VAR_11,
   VAR_3 | VAR_2,
   VAR_5, VAR_20);
  if (VAR_22 < 0) {
   FUNC_3(&VAR_17->dev, "request irq %d for trigger0 failed\n",
    VAR_17->irq);
   goto err_pm_disable;
   }

  VAR_22 = FUNC_6(VAR_20->dev.parent,
      VAR_19->drdy_trigger0);
  if (VAR_22) {
   FUNC_3(&VAR_17->dev, "iio trigger register failed\n");
   goto err_pm_disable;
  }







  VAR_22 = FUNC_7(VAR_20->dev.parent,
   VAR_20,
   VAR_15,
   VAR_14,
   &VAR_8);
  if (VAR_22 < 0) {
   FUNC_3(&VAR_17->dev, "iio triggered buffer setup failed\n");
   goto err_pm_disable;
  }
 }

 VAR_22 = FUNC_11(VAR_20);
 if (VAR_22)
  goto err_pm_disable;

 return 0;

err_pm_disable:
 FUNC_15(&VAR_17->dev);
 FUNC_20(&VAR_17->dev);
 FUNC_17(&VAR_17->dev);
err_poweroff:
 FUNC_23(VAR_19);

 return VAR_22;
}
