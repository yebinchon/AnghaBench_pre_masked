
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_15__ ;


struct TYPE_17__ {TYPE_3__* parent; } ;
struct iio_dev {int trig; int id; int name; int * info; int modes; int num_channels; int channels; TYPE_1__ dev; } ;
struct i2c_device_id {int driver_data; int name; } ;
struct TYPE_19__ {scalar_t__ of_node; } ;
struct i2c_client {scalar_t__ irq; TYPE_3__ dev; } ;
struct bma180_data {TYPE_15__* part_info; TYPE_4__* trig; int mutex; int orientation; struct i2c_client* client; } ;
typedef enum chip_ids { ____Placeholder_chip_ids } chip_ids ;
struct TYPE_18__ {TYPE_3__* parent; } ;
struct TYPE_20__ {int * ops; TYPE_2__ dev; } ;
struct TYPE_16__ {int (* chip_config ) (struct bma180_data*) ;int (* chip_disable ) (struct bma180_data*) ;int num_channels; int channels; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_15__* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_3__*,char*) ;
 struct iio_dev* FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,scalar_t__,int ,int ,char*,TYPE_4__*) ;
 int FUNC_3 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct bma180_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (TYPE_3__*,char*,int *) ;
 TYPE_4__* FUNC_7 (char*,int ,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int VAR_7 ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_4__*,struct iio_dev*) ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (struct iio_dev*) ;
 int FUNC_14 (struct iio_dev*,int *,int ,int *) ;
 int FUNC_15 (int *) ;
 scalar_t__ FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (struct bma180_data*) ;
 int FUNC_18 (struct bma180_data*) ;

__attribute__((used)) static int FUNC_19(struct i2c_client *VAR_8,
  const struct i2c_device_id *VAR_9)
{
 struct bma180_data *VAR_10;
 struct iio_dev *VAR_11;
 enum chip_ids VAR_12;
 int VAR_13;

 VAR_11 = FUNC_1(&VAR_8->dev, sizeof(*VAR_10));
 if (!VAR_11)
  return -VAR_0;

 VAR_10 = FUNC_5(VAR_11);
 FUNC_3(VAR_8, VAR_11);
 VAR_10->client = VAR_8;
 if (VAR_8->dev.of_node)
  VAR_12 = (enum chip_ids)FUNC_16(&VAR_8->dev);
 else
  VAR_12 = VAR_9->driver_data;
 VAR_10->part_info = &VAR_4[VAR_12];

 VAR_13 = FUNC_6(&VAR_8->dev, "mount-matrix",
    &VAR_10->orientation);
 if (VAR_13)
  return VAR_13;

 VAR_13 = VAR_10->part_info->chip_config(VAR_10);
 if (VAR_13 < 0)
  goto err_chip_disable;

 FUNC_15(&VAR_10->mutex);
 VAR_11->dev.parent = &VAR_8->dev;
 VAR_11->channels = VAR_10->part_info->channels;
 VAR_11->num_channels = VAR_10->part_info->num_channels;
 VAR_11->name = VAR_9->name;
 VAR_11->modes = VAR_1;
 VAR_11->info = &VAR_3;

 if (VAR_8->irq > 0) {
  VAR_10->trig = FUNC_7("%s-dev%d", VAR_11->name,
   VAR_11->id);
  if (!VAR_10->trig) {
   VAR_13 = -VAR_0;
   goto err_chip_disable;
  }

  VAR_13 = FUNC_2(&VAR_8->dev, VAR_8->irq,
   VAR_7, VAR_2,
   "bma180_event", VAR_10->trig);
  if (VAR_13) {
   FUNC_0(&VAR_8->dev, "unable to request IRQ\n");
   goto err_trigger_free;
  }

  VAR_10->trig->dev.parent = &VAR_8->dev;
  VAR_10->trig->ops = &VAR_6;
  FUNC_11(VAR_10->trig, VAR_11);
  VAR_11->trig = FUNC_9(VAR_10->trig);

  VAR_13 = FUNC_10(VAR_10->trig);
  if (VAR_13)
   goto err_trigger_free;
 }

 VAR_13 = FUNC_14(VAR_11, ((void*)0),
   VAR_5, ((void*)0));
 if (VAR_13 < 0) {
  FUNC_0(&VAR_8->dev, "unable to setup iio triggered buffer\n");
  goto err_trigger_unregister;
 }

 VAR_13 = FUNC_4(VAR_11);
 if (VAR_13 < 0) {
  FUNC_0(&VAR_8->dev, "unable to register iio device\n");
  goto err_buffer_cleanup;
 }

 return 0;

err_buffer_cleanup:
 FUNC_13(VAR_11);
err_trigger_unregister:
 if (VAR_10->trig)
  FUNC_12(VAR_10->trig);
err_trigger_free:
 FUNC_8(VAR_10->trig);
err_chip_disable:
 VAR_10->part_info->chip_disable(VAR_10);

 return VAR_13;
}
