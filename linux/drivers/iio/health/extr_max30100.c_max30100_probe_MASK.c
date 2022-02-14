
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct max30100_data {int regmap; int lock; struct i2c_client* client; struct iio_dev* indio_dev; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; TYPE_1__ dev; int * setup_ops; int available_scan_masks; int num_channels; int * info; int channels; int name; } ;
struct iio_buffer {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 struct iio_buffer* FUNC_5 (int *) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,scalar_t__,int *,int ,int,char*,struct iio_dev*) ;
 int FUNC_8 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*,struct iio_buffer*) ;
 int FUNC_10 (struct iio_dev*) ;
 struct max30100_data* FUNC_11 (struct iio_dev*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_12 (struct max30100_data*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_13 (struct max30100_data*,int) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_13,
     const struct i2c_device_id *VAR_14)
{
 struct max30100_data *VAR_15;
 struct iio_buffer *VAR_16;
 struct iio_dev *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_4(&VAR_13->dev, sizeof(*VAR_15));
 if (!VAR_17)
  return -VAR_1;

 VAR_16 = FUNC_5(&VAR_13->dev);
 if (!VAR_16)
  return -VAR_1;

 FUNC_9(VAR_17, VAR_16);

 VAR_17->name = VAR_6;
 VAR_17->channels = VAR_8;
 VAR_17->info = &VAR_9;
 VAR_17->num_channels = FUNC_0(VAR_8);
 VAR_17->available_scan_masks = VAR_12;
 VAR_17->modes = (VAR_2 | VAR_3);
 VAR_17->setup_ops = &VAR_7;
 VAR_17->dev.parent = &VAR_13->dev;

 VAR_15 = FUNC_11(VAR_17);
 VAR_15->indio_dev = VAR_17;
 VAR_15->client = VAR_13;

 FUNC_14(&VAR_15->lock);
 FUNC_8(VAR_13, VAR_17);

 VAR_15->regmap = FUNC_6(VAR_13, &VAR_11);
 if (FUNC_1(VAR_15->regmap)) {
  FUNC_3(&VAR_13->dev, "regmap initialization failed.\n");
  return FUNC_2(VAR_15->regmap);
 }
 FUNC_13(VAR_15, 0);

 VAR_18 = FUNC_12(VAR_15);
 if (VAR_18)
  return VAR_18;

 if (VAR_13->irq <= 0) {
  FUNC_3(&VAR_13->dev, "no valid irq defined\n");
  return -VAR_0;
 }
 VAR_18 = FUNC_7(&VAR_13->dev, VAR_13->irq,
     ((void*)0), VAR_10,
     VAR_5 | VAR_4,
     "max30100_irq", VAR_17);
 if (VAR_18) {
  FUNC_3(&VAR_13->dev, "request irq (%d) failed\n", VAR_13->irq);
  return VAR_18;
 }

 return FUNC_10(VAR_17);
}
