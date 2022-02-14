
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct of_device_id {scalar_t__ data; } ;
struct TYPE_3__ {int * parent; } ;
struct iio_trigger {int * ops; TYPE_1__ dev; } ;
struct TYPE_4__ {int * parent; } ;
struct iio_dev {int modes; TYPE_2__ dev; int id; int name; int num_channels; int channels; int * info; } ;
struct i2c_device_id {size_t driver_data; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct atlas_device {int (* calibration ) (struct atlas_data*) ;int num_channels; int channels; } ;
struct atlas_data {struct iio_trigger* trig; int work; int regmap; struct atlas_device* chip; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 struct atlas_device* VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (struct atlas_data*,int) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_3 (int *,char*,...) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 struct iio_trigger* FUNC_5 (int *,char*,int ,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,scalar_t__,int *,int ,int,char*,struct iio_dev*) ;
 int FUNC_8 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 int VAR_17 ;
 struct atlas_data* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (struct iio_trigger*) ;
 int FUNC_12 (struct iio_trigger*,struct iio_dev*) ;
 int FUNC_13 (struct iio_trigger*) ;
 int FUNC_14 (struct iio_dev*) ;
 int FUNC_15 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_16 (int *,int ) ;
 struct of_device_id* FUNC_17 (int ,int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *) ;
 int FUNC_23 (struct atlas_data*) ;

__attribute__((used)) static int FUNC_24(struct i2c_client *VAR_18,
         const struct i2c_device_id *VAR_19)
{
 struct atlas_data *VAR_20;
 struct atlas_device *VAR_21;
 const struct of_device_id *VAR_22;
 struct iio_trigger *VAR_23;
 struct iio_dev *VAR_24;
 int VAR_25;

 VAR_24 = FUNC_4(&VAR_18->dev, sizeof(*VAR_20));
 if (!VAR_24)
  return -VAR_2;

 VAR_22 = FUNC_17(VAR_10, &VAR_18->dev);
 if (!VAR_22)
  VAR_21 = &VAR_9[VAR_19->driver_data];
 else
  VAR_21 = &VAR_9[(unsigned long)VAR_22->data];

 VAR_24->info = &VAR_11;
 VAR_24->name = VAR_0;
 VAR_24->channels = VAR_21->channels;
 VAR_24->num_channels = VAR_21->num_channels;
 VAR_24->modes = VAR_3 | VAR_4;
 VAR_24->dev.parent = &VAR_18->dev;

 VAR_23 = FUNC_5(&VAR_18->dev, "%s-dev%d",
          VAR_24->name, VAR_24->id);

 if (!VAR_23)
  return -VAR_2;

 VAR_20 = FUNC_10(VAR_24);
 VAR_20->client = VAR_18;
 VAR_20->trig = VAR_23;
 VAR_20->chip = VAR_21;
 VAR_23->dev.parent = VAR_24->dev.parent;
 VAR_23->ops = &VAR_13;
 FUNC_12(VAR_23, VAR_24);

 FUNC_8(VAR_18, VAR_24);

 VAR_20->regmap = FUNC_6(VAR_18, &VAR_14);
 if (FUNC_0(VAR_20->regmap)) {
  FUNC_3(&VAR_18->dev, "regmap initialization failed\n");
  return FUNC_1(VAR_20->regmap);
 }

 VAR_25 = FUNC_20(&VAR_18->dev);
 if (VAR_25)
  return VAR_25;

 if (VAR_18->irq <= 0) {
  FUNC_3(&VAR_18->dev, "no valid irq defined\n");
  return -VAR_1;
 }

 VAR_25 = VAR_21->calibration(VAR_20);
 if (VAR_25)
  return VAR_25;

 VAR_25 = FUNC_11(VAR_23);
 if (VAR_25) {
  FUNC_3(&VAR_18->dev, "failed to register trigger\n");
  return VAR_25;
 }

 VAR_25 = FUNC_15(VAR_24, &VAR_17,
  &VAR_15, &VAR_8);
 if (VAR_25) {
  FUNC_3(&VAR_18->dev, "cannot setup iio trigger\n");
  goto unregister_trigger;
 }

 FUNC_16(&VAR_20->work, VAR_16);


 VAR_25 = FUNC_7(&VAR_18->dev, VAR_18->irq,
     ((void*)0), VAR_12,
     VAR_7 |
     VAR_6 | VAR_5,
     "atlas_irq",
     VAR_24);
 if (VAR_25) {
  FUNC_3(&VAR_18->dev, "request irq (%d) failed\n", VAR_18->irq);
  goto unregister_buffer;
 }

 VAR_25 = FUNC_2(VAR_20, 1);
 if (VAR_25) {
  FUNC_3(&VAR_18->dev, "cannot power device on");
  goto unregister_buffer;
 }

 FUNC_19(&VAR_18->dev);
 FUNC_21(&VAR_18->dev, 2500);
 FUNC_22(&VAR_18->dev);

 VAR_25 = FUNC_9(VAR_24);
 if (VAR_25) {
  FUNC_3(&VAR_18->dev, "unable to register device\n");
  goto unregister_pm;
 }

 return 0;

unregister_pm:
 FUNC_18(&VAR_18->dev);
 FUNC_2(VAR_20, 0);

unregister_buffer:
 FUNC_14(VAR_24);

unregister_trigger:
 FUNC_13(VAR_20->trig);

 return VAR_25;
}
