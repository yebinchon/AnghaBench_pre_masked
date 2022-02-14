
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct TYPE_11__ {struct TYPE_11__* parent; } ;
struct iio_dev {TYPE_4__ dev; int name; int modes; int * info; int num_channels; int channels; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int irq; TYPE_4__ dev; } ;
struct gp2ap020a00f_data {struct regmap* vled_reg; TYPE_2__* trig; int work; struct i2c_client* client; int lock; int data_ready_queue; struct regmap* regmap; int cur_opmode; } ;
struct TYPE_9__ {TYPE_4__* parent; } ;
struct TYPE_10__ {TYPE_1__ dev; int * ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (TYPE_4__*,char*) ;
 struct iio_dev* FUNC_4 (TYPE_4__*,int) ;
 TYPE_2__* FUNC_5 (TYPE_4__*,char*,int ) ;
 struct regmap* FUNC_6 (struct i2c_client*,int *) ;
 struct regmap* FUNC_7 (TYPE_4__*,char*) ;
 int FUNC_8 (int ,struct iio_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_9 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*) ;
 int VAR_15 ;
 struct gp2ap020a00f_data* FUNC_11 (struct iio_dev*) ;
 int FUNC_12 (TYPE_2__*) ;
 int FUNC_13 (TYPE_2__*) ;
 int FUNC_14 (struct iio_dev*) ;
 int FUNC_15 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (struct regmap*,int ,int ,int ) ;
 int FUNC_20 (struct regmap*) ;
 int FUNC_21 (struct regmap*) ;
 int FUNC_22 (int ,int *,int *,int,char*,struct iio_dev*) ;

__attribute__((used)) static int FUNC_23(struct i2c_client *VAR_16,
    const struct i2c_device_id *VAR_17)
{
 struct gp2ap020a00f_data *VAR_18;
 struct iio_dev *VAR_19;
 struct regmap *VAR_20;
 int VAR_21;

 VAR_19 = FUNC_4(&VAR_16->dev, sizeof(*VAR_18));
 if (!VAR_19)
  return -VAR_0;

 VAR_18 = FUNC_11(VAR_19);

 VAR_18->vled_reg = FUNC_7(&VAR_16->dev, "vled");
 if (FUNC_1(VAR_18->vled_reg))
  return FUNC_2(VAR_18->vled_reg);

 VAR_21 = FUNC_21(VAR_18->vled_reg);
 if (VAR_21)
  return VAR_21;

 VAR_20 = FUNC_6(VAR_16, &VAR_11);
 if (FUNC_1(VAR_20)) {
  FUNC_3(&VAR_16->dev, "Regmap initialization failed.\n");
  VAR_21 = FUNC_2(VAR_20);
  goto error_regulator_disable;
 }


 VAR_21 = FUNC_19(VAR_20, VAR_2,
   VAR_10,
   FUNC_0(VAR_10));

 if (VAR_21 < 0) {
  FUNC_3(&VAR_16->dev, "Device initialization failed.\n");
  goto error_regulator_disable;
 }

 FUNC_9(VAR_16, VAR_19);

 VAR_18->client = VAR_16;
 VAR_18->cur_opmode = VAR_1;
 VAR_18->regmap = VAR_20;
 FUNC_17(&VAR_18->data_ready_queue);

 FUNC_18(&VAR_18->lock);
 VAR_19->dev.parent = &VAR_16->dev;
 VAR_19->channels = VAR_7;
 VAR_19->num_channels = FUNC_0(VAR_7);
 VAR_19->info = &VAR_9;
 VAR_19->name = VAR_17->name;
 VAR_19->modes = VAR_3;


 VAR_21 = FUNC_15(VAR_19, &VAR_15,
  &VAR_13, &VAR_6);
 if (VAR_21 < 0)
  goto error_regulator_disable;


 VAR_18->trig = FUNC_5(&VAR_16->dev, "%s-trigger",
       VAR_19->name);
 if (VAR_18->trig == ((void*)0)) {
  VAR_21 = -VAR_0;
  FUNC_3(&VAR_19->dev, "Failed to allocate iio trigger.\n");
  goto error_uninit_buffer;
 }


 VAR_21 = FUNC_22(VAR_16->irq, ((void*)0),
       &VAR_12,
       VAR_5 |
       VAR_4,
       "gp2ap020a00f_als_event",
       VAR_19);
 if (VAR_21 < 0) {
  FUNC_3(&VAR_16->dev, "Irq request failed.\n");
  goto error_uninit_buffer;
 }

 VAR_18->trig->ops = &VAR_14;
 VAR_18->trig->dev.parent = &VAR_18->client->dev;

 FUNC_16(&VAR_18->work, VAR_8);

 VAR_21 = FUNC_12(VAR_18->trig);
 if (VAR_21 < 0) {
  FUNC_3(&VAR_16->dev, "Failed to register iio trigger.\n");
  goto error_free_irq;
 }

 VAR_21 = FUNC_10(VAR_19);
 if (VAR_21 < 0)
  goto error_trigger_unregister;

 return 0;

error_trigger_unregister:
 FUNC_13(VAR_18->trig);
error_free_irq:
 FUNC_8(VAR_16->irq, VAR_19);
error_uninit_buffer:
 FUNC_14(VAR_19);
error_regulator_disable:
 FUNC_20(VAR_18->vled_reg);

 return VAR_21;
}
