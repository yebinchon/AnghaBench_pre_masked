
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct lmp91000_data {TYPE_3__* trig; int cb_buffer; int adc_chan; int completion; struct device* dev; int regmap; } ;
struct TYPE_7__ {struct device* parent; } ;
struct iio_dev {int id; int name; int modes; TYPE_1__ dev; int num_channels; int channels; int * info; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_8__ {struct device* parent; } ;
struct TYPE_9__ {TYPE_2__ dev; int * ops; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct device*,char*) ;
 struct iio_dev* FUNC_4 (struct device*,int) ;
 TYPE_3__* FUNC_5 (struct device*,char*,int ,int ) ;
 int FUNC_6 (struct i2c_client*,int *) ;
 int FUNC_7 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct device*,int *,struct iio_dev*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (struct iio_dev*) ;
 struct lmp91000_data* FUNC_13 (struct iio_dev*) ;
 int FUNC_14 (TYPE_3__*) ;
 int FUNC_15 (int ,TYPE_3__*) ;
 int FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (struct iio_dev*) ;
 int FUNC_18 (struct iio_dev*,int *,int *,int *) ;
 int FUNC_19 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_20 (struct lmp91000_data*) ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_21(struct i2c_client *VAR_12,
     const struct i2c_device_id *VAR_13)
{
 struct device *VAR_14 = &VAR_12->dev;
 struct lmp91000_data *VAR_15;
 struct iio_dev *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_4(VAR_14, sizeof(*VAR_15));
 if (!VAR_16)
  return -VAR_1;

 VAR_16->info = &VAR_9;
 VAR_16->channels = VAR_8;
 VAR_16->num_channels = FUNC_0(VAR_8);
 VAR_16->name = VAR_4;
 VAR_16->dev.parent = &VAR_12->dev;
 VAR_16->modes = VAR_3;
 FUNC_7(VAR_12, VAR_16);

 VAR_15 = FUNC_13(VAR_16);
 VAR_15->dev = VAR_14;
 VAR_15->regmap = FUNC_6(VAR_12, &VAR_10);
 if (FUNC_1(VAR_15->regmap)) {
  FUNC_3(VAR_14, "regmap initialization failed.\n");
  return FUNC_2(VAR_15->regmap);
 }

 VAR_15->trig = FUNC_5(VAR_15->dev, "%s-mux%d",
         VAR_16->name, VAR_16->id);
 if (!VAR_15->trig) {
  FUNC_3(VAR_14, "cannot allocate iio trigger.\n");
  return -VAR_1;
 }

 VAR_15->trig->ops = &VAR_11;
 VAR_15->trig->dev.parent = VAR_14;
 FUNC_19(&VAR_15->completion);

 VAR_17 = FUNC_20(VAR_15);
 if (VAR_17)
  return VAR_17;

 VAR_17 = FUNC_15(FUNC_9(VAR_15->cb_buffer),
     VAR_15->trig);
 if (VAR_17) {
  FUNC_3(VAR_14, "cannot set immutable trigger.\n");
  return VAR_17;
 }

 VAR_17 = FUNC_14(VAR_15->trig);
 if (VAR_17) {
  FUNC_3(VAR_14, "cannot register iio trigger.\n");
  return VAR_17;
 }

 VAR_17 = FUNC_18(VAR_16, ((void*)0),
      &VAR_6,
      &VAR_7);
 if (VAR_17)
  goto error_unreg_trigger;

 VAR_15->cb_buffer = FUNC_10(VAR_14, &VAR_5,
       VAR_16);

 if (FUNC_1(VAR_15->cb_buffer)) {
  if (FUNC_2(VAR_15->cb_buffer) == -VAR_0)
   VAR_17 = -VAR_2;
  else
   VAR_17 = FUNC_2(VAR_15->cb_buffer);

  goto error_unreg_buffer;
 }

 VAR_15->adc_chan = FUNC_8(VAR_15->cb_buffer);

 VAR_17 = FUNC_12(VAR_16);
 if (VAR_17)
  goto error_unreg_cb_buffer;

 return 0;

error_unreg_cb_buffer:
 FUNC_11(VAR_15->cb_buffer);

error_unreg_buffer:
 FUNC_17(VAR_16);

error_unreg_trigger:
 FUNC_16(VAR_15->trig);

 return VAR_17;
}
