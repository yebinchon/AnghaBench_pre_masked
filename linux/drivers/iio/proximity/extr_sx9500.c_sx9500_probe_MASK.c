
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sx9500_data {int trigger_enabled; TYPE_3__* trig; int regmap; int completion; int mutex; struct i2c_client* client; } ;
struct TYPE_7__ {int * parent; } ;
struct iio_dev {int id; int name; int modes; int * info; int num_channels; int channels; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct TYPE_8__ {int * parent; } ;
struct TYPE_9__ {int * ops; TYPE_2__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int *,char*) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 TYPE_3__* FUNC_5 (int *,char*,int ,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (int *,scalar_t__,int ,int ,int,int ,struct iio_dev*) ;
 int FUNC_8 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*) ;
 struct sx9500_data* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (struct iio_dev*) ;
 int FUNC_15 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_18 (struct i2c_client*,struct sx9500_data*) ;
 int VAR_8 ;
 int FUNC_19 (struct iio_dev*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_20(struct i2c_client *VAR_14,
   const struct i2c_device_id *VAR_15)
{
 int VAR_16;
 struct iio_dev *VAR_17;
 struct sx9500_data *VAR_18;

 VAR_17 = FUNC_4(&VAR_14->dev, sizeof(*VAR_18));
 if (VAR_17 == ((void*)0))
  return -VAR_0;

 VAR_18 = FUNC_10(VAR_17);
 VAR_18->client = VAR_14;
 FUNC_17(&VAR_18->mutex);
 FUNC_16(&VAR_18->completion);
 VAR_18->trigger_enabled = 0;

 VAR_18->regmap = FUNC_6(VAR_14, &VAR_11);
 if (FUNC_1(VAR_18->regmap))
  return FUNC_2(VAR_18->regmap);

 VAR_17->dev.parent = &VAR_14->dev;
 VAR_17->name = VAR_4;
 VAR_17->channels = VAR_7;
 VAR_17->num_channels = FUNC_0(VAR_7);
 VAR_17->info = &VAR_8;
 VAR_17->modes = VAR_1;
 FUNC_8(VAR_14, VAR_17);

 FUNC_18(VAR_14, VAR_18);

 VAR_16 = FUNC_19(VAR_17);
 if (VAR_16 < 0)
  return VAR_16;

 if (VAR_14->irq <= 0)
  FUNC_3(&VAR_14->dev, "no valid irq found\n");
 else {
  VAR_16 = FUNC_7(&VAR_14->dev, VAR_14->irq,
    VAR_9, VAR_10,
    VAR_3 | VAR_2,
    VAR_5, VAR_17);
  if (VAR_16 < 0)
   return VAR_16;

  VAR_18->trig = FUNC_5(&VAR_14->dev,
    "%s-dev%d", VAR_17->name, VAR_17->id);
  if (!VAR_18->trig)
   return -VAR_0;

  VAR_18->trig->dev.parent = &VAR_14->dev;
  VAR_18->trig->ops = &VAR_13;
  FUNC_12(VAR_18->trig, VAR_17);

  VAR_16 = FUNC_11(VAR_18->trig);
  if (VAR_16)
   return VAR_16;
 }

 VAR_16 = FUNC_15(VAR_17, ((void*)0),
      VAR_12,
      &VAR_6);
 if (VAR_16 < 0)
  goto out_trigger_unregister;

 VAR_16 = FUNC_9(VAR_17);
 if (VAR_16 < 0)
  goto out_buffer_cleanup;

 return 0;

out_buffer_cleanup:
 FUNC_14(VAR_17);
out_trigger_unregister:
 if (VAR_14->irq > 0)
  FUNC_13(VAR_18->trig);

 return VAR_16;
}
