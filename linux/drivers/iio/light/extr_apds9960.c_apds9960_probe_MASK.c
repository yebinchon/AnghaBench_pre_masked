
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int * setup_ops; int available_scan_masks; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct iio_buffer {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct apds9960_data {int lock; struct iio_dev* indio_dev; struct i2c_client* client; int regmap; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct apds9960_data*) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_4 (struct apds9960_data*) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_5 (struct apds9960_data*,int) ;
 int FUNC_6 (int *,char*,...) ;
 struct iio_dev* FUNC_7 (int *,int) ;
 struct iio_buffer* FUNC_8 (int *) ;
 int FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (int *,scalar_t__,int *,int ,int,char*,struct iio_dev*) ;
 int FUNC_11 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_12 (struct iio_dev*,struct iio_buffer*) ;
 int FUNC_13 (struct iio_dev*) ;
 struct apds9960_data* FUNC_14 (struct iio_dev*) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *,int) ;
 int FUNC_19 (int *) ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_13,
     const struct i2c_device_id *VAR_14)
{
 struct apds9960_data *VAR_15;
 struct iio_buffer *VAR_16;
 struct iio_dev *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_7(&VAR_13->dev, sizeof(*VAR_15));
 if (!VAR_17)
  return -VAR_2;

 VAR_16 = FUNC_8(&VAR_13->dev);
 if (!VAR_16)
  return -VAR_2;

 FUNC_12(VAR_17, VAR_16);

 VAR_17->dev.parent = &VAR_13->dev;
 VAR_17->info = &VAR_9;
 VAR_17->name = VAR_0;
 VAR_17->channels = VAR_8;
 VAR_17->num_channels = FUNC_0(VAR_8);
 VAR_17->available_scan_masks = VAR_12;
 VAR_17->modes = (VAR_3 | VAR_4);
 VAR_17->setup_ops = &VAR_7;

 VAR_15 = FUNC_14(VAR_17);
 FUNC_11(VAR_13, VAR_17);

 VAR_15->regmap = FUNC_9(VAR_13, &VAR_11);
 if (FUNC_1(VAR_15->regmap)) {
  FUNC_6(&VAR_13->dev, "regmap initialization failed.\n");
  return FUNC_2(VAR_15->regmap);
 }

 VAR_15->client = VAR_13;
 VAR_15->indio_dev = VAR_17;
 FUNC_15(&VAR_15->lock);

 VAR_18 = FUNC_17(&VAR_13->dev);
 if (VAR_18)
  goto error_power_down;

 FUNC_16(&VAR_13->dev);
 FUNC_18(&VAR_13->dev, 5000);
 FUNC_19(&VAR_13->dev);

 FUNC_5(VAR_15, 1);

 VAR_18 = FUNC_4(VAR_15);
 if (VAR_18)
  goto error_power_down;

 VAR_18 = FUNC_3(VAR_15);
 if (VAR_18)
  goto error_power_down;

 if (VAR_13->irq <= 0) {
  FUNC_6(&VAR_13->dev, "no valid irq defined\n");
  VAR_18 = -VAR_1;
  goto error_power_down;
 }
 VAR_18 = FUNC_10(&VAR_13->dev, VAR_13->irq,
     ((void*)0), VAR_10,
     VAR_6 | VAR_5,
     "apds9960_event",
     VAR_17);
 if (VAR_18) {
  FUNC_6(&VAR_13->dev, "request irq (%d) failed\n", VAR_13->irq);
  goto error_power_down;
 }

 VAR_18 = FUNC_13(VAR_17);
 if (VAR_18)
  goto error_power_down;

 FUNC_5(VAR_15, 0);

 return 0;

error_power_down:
 FUNC_5(VAR_15, 0);

 return VAR_18;
}
