
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct stk8ba50_data {TYPE_3__* dready_trig; int sample_rate_idx; scalar_t__ range; int lock; struct i2c_client* client; } ;
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
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (int *,char*,...) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 TYPE_3__* FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (int *,scalar_t__,int ,int *,int,int ,struct iio_dev*) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,int ,int ) ;
 int FUNC_7 (struct iio_dev*) ;
 int VAR_14 ;
 struct stk8ba50_data* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (TYPE_3__*) ;
 int FUNC_10 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_11 (TYPE_3__*) ;
 int FUNC_12 (struct iio_dev*) ;
 int FUNC_13 (struct iio_dev*,int ,int ,int *) ;
 int FUNC_14 (int *) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_15 (struct stk8ba50_data*,int ) ;
 int VAR_19 ;
 int VAR_20 ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_21,
     const struct i2c_device_id *VAR_22)
{
 int VAR_23;
 struct iio_dev *VAR_24;
 struct stk8ba50_data *VAR_25;

 VAR_24 = FUNC_2(&VAR_21->dev, sizeof(*VAR_25));
 if (!VAR_24) {
  FUNC_1(&VAR_21->dev, "iio allocation failed!\n");
  return -VAR_0;
 }

 VAR_25 = FUNC_8(VAR_24);
 VAR_25->client = VAR_21;
 FUNC_5(VAR_21, VAR_24);
 FUNC_14(&VAR_25->lock);

 VAR_24->dev.parent = &VAR_21->dev;
 VAR_24->info = &VAR_18;
 VAR_24->name = VAR_6;
 VAR_24->modes = VAR_1;
 VAR_24->channels = VAR_16;
 VAR_24->num_channels = FUNC_0(VAR_16);


 VAR_23 = FUNC_6(VAR_21,
   VAR_11, VAR_12);
 if (VAR_23 < 0) {
  FUNC_1(&VAR_21->dev, "failed to reset sensor\n");
  goto err_power_off;
 }


 VAR_25->range = 0;


 VAR_25->sample_rate_idx = VAR_13;


 VAR_23 = FUNC_6(VAR_21,
   VAR_9, VAR_5);
 if (VAR_23 < 0) {
  FUNC_1(&VAR_21->dev, "failed to set up interrupts\n");
  goto err_power_off;
 }
 VAR_23 = FUNC_6(VAR_21,
   VAR_10, VAR_4);
 if (VAR_23 < 0) {
  FUNC_1(&VAR_21->dev, "failed to set up interrupts\n");
  goto err_power_off;
 }

 if (VAR_21->irq > 0) {
  VAR_23 = FUNC_4(&VAR_21->dev, VAR_21->irq,
      VAR_17,
      ((void*)0),
      VAR_3 |
      VAR_2,
      VAR_7,
      VAR_24);
  if (VAR_23 < 0) {
   FUNC_1(&VAR_21->dev, "request irq %d failed\n",
    VAR_21->irq);
   goto err_power_off;
  }

  VAR_25->dready_trig = FUNC_3(&VAR_21->dev,
          "%s-dev%d",
          VAR_24->name,
          VAR_24->id);
  if (!VAR_25->dready_trig) {
   VAR_23 = -VAR_0;
   goto err_power_off;
  }

  VAR_25->dready_trig->dev.parent = &VAR_21->dev;
  VAR_25->dready_trig->ops = &VAR_20;
  FUNC_10(VAR_25->dready_trig, VAR_24);
  VAR_23 = FUNC_9(VAR_25->dready_trig);
  if (VAR_23) {
   FUNC_1(&VAR_21->dev, "iio trigger register failed\n");
   goto err_power_off;
  }
 }

 VAR_23 = FUNC_13(VAR_24,
      VAR_14,
      VAR_19,
      &VAR_15);
 if (VAR_23 < 0) {
  FUNC_1(&VAR_21->dev, "iio triggered buffer setup failed\n");
  goto err_trigger_unregister;
 }

 VAR_23 = FUNC_7(VAR_24);
 if (VAR_23 < 0) {
  FUNC_1(&VAR_21->dev, "device_register failed\n");
  goto err_buffer_cleanup;
 }

 return VAR_23;

err_buffer_cleanup:
 FUNC_12(VAR_24);
err_trigger_unregister:
 if (VAR_25->dready_trig)
  FUNC_11(VAR_25->dready_trig);
err_power_off:
 FUNC_15(VAR_25, VAR_8);
 return VAR_23;
}
