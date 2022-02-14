
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stk8312_data {TYPE_3__* dready_trig; int sample_rate_idx; struct i2c_client* client; int lock; } ;
struct TYPE_7__ {int * parent; } ;
struct iio_dev {int id; int name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct TYPE_8__ {int * parent; } ;
struct TYPE_9__ {int * ops; TYPE_2__ dev; } ;


 int FUNC_0 (int ) ;
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
 int FUNC_1 (int *,char*,...) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 TYPE_3__* FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,scalar_t__,int ,int *,int,int ,struct iio_dev*) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;
 int FUNC_7 (struct iio_dev*) ;
 int VAR_12 ;
 struct stk8312_data* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (struct iio_dev*,int ,int ,int *) ;
 int FUNC_14 (int *) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_15 (struct stk8312_data*,int) ;
 int FUNC_16 (struct stk8312_data*,int ) ;
 int VAR_17 ;
 int VAR_18 ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_19,
    const struct i2c_device_id *VAR_20)
{
 int VAR_21;
 struct iio_dev *VAR_22;
 struct stk8312_data *VAR_23;

 VAR_22 = FUNC_2(&VAR_19->dev, sizeof(*VAR_23));
 if (!VAR_22) {
  FUNC_1(&VAR_19->dev, "iio allocation failed!\n");
  return -VAR_0;
 }

 VAR_23 = FUNC_8(VAR_22);
 VAR_23->client = VAR_19;
 FUNC_5(VAR_19, VAR_22);
 FUNC_14(&VAR_23->lock);

 VAR_22->dev.parent = &VAR_19->dev;
 VAR_22->info = &VAR_16;
 VAR_22->name = VAR_4;
 VAR_22->modes = VAR_1;
 VAR_22->channels = VAR_14;
 VAR_22->num_channels = FUNC_0(VAR_14);


 VAR_21 = FUNC_6(VAR_23->client, VAR_9, 0x00);
 if (VAR_21 < 0) {
  FUNC_1(&VAR_19->dev, "failed to reset sensor\n");
  return VAR_21;
 }
 VAR_23->sample_rate_idx = VAR_11;
 VAR_21 = FUNC_16(VAR_23, VAR_10);
 if (VAR_21 < 0)
  return VAR_21;

 VAR_21 = FUNC_15(VAR_23,
          VAR_7 | VAR_6);
 if (VAR_21 < 0)
  return VAR_21;

 if (VAR_19->irq > 0) {
  VAR_21 = FUNC_4(&VAR_19->dev, VAR_19->irq,
      VAR_15,
      ((void*)0),
      VAR_3 |
      VAR_2,
      VAR_5,
      VAR_22);
  if (VAR_21 < 0) {
   FUNC_1(&VAR_19->dev, "request irq %d failed\n",
    VAR_19->irq);
   goto err_power_off;
  }

  VAR_23->dready_trig = FUNC_3(&VAR_19->dev,
          "%s-dev%d",
          VAR_22->name,
          VAR_22->id);
  if (!VAR_23->dready_trig) {
   VAR_21 = -VAR_0;
   goto err_power_off;
  }

  VAR_23->dready_trig->dev.parent = &VAR_19->dev;
  VAR_23->dready_trig->ops = &VAR_18;
  FUNC_10(VAR_23->dready_trig, VAR_22);
  VAR_21 = FUNC_9(VAR_23->dready_trig);
  if (VAR_21) {
   FUNC_1(&VAR_19->dev, "iio trigger register failed\n");
   goto err_power_off;
  }
 }

 VAR_21 = FUNC_13(VAR_22,
      VAR_12,
      VAR_17,
      &VAR_13);
 if (VAR_21 < 0) {
  FUNC_1(&VAR_19->dev, "iio triggered buffer setup failed\n");
  goto err_trigger_unregister;
 }

 VAR_21 = FUNC_7(VAR_22);
 if (VAR_21 < 0) {
  FUNC_1(&VAR_19->dev, "device_register failed\n");
  goto err_buffer_cleanup;
 }

 return 0;

err_buffer_cleanup:
 FUNC_12(VAR_22);
err_trigger_unregister:
 if (VAR_23->dready_trig)
  FUNC_11(VAR_23->dready_trig);
err_power_off:
 FUNC_15(VAR_23, VAR_8);
 return VAR_21;
}
