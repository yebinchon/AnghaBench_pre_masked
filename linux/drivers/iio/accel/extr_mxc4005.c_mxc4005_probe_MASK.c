
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct regmap {int dummy; } ;
struct mxc4005_data {TYPE_3__* dready_trig; int mutex; struct regmap* regmap; int * dev; } ;
struct TYPE_8__ {int * parent; } ;
struct iio_dev {TYPE_3__* trig; int id; int name; int * info; int modes; int available_scan_masks; int num_channels; int channels; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;
struct TYPE_9__ {int * parent; } ;
struct TYPE_10__ {int * ops; TYPE_2__ dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct regmap*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct regmap*) ;
 int FUNC_3 (int *,char*) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,struct iio_dev*) ;
 TYPE_3__* FUNC_6 (int *,char*,int ,int ) ;
 int FUNC_7 (int *,TYPE_3__*) ;
 int FUNC_8 (int *,struct iio_dev*,int ,int ,int *) ;
 struct regmap* FUNC_9 (struct i2c_client*,int *) ;
 int FUNC_10 (int *,scalar_t__,int ,int *,int,int ,TYPE_3__*) ;
 int FUNC_11 (struct i2c_client*,struct iio_dev*) ;
 int VAR_6 ;
 struct mxc4005_data* FUNC_12 (struct iio_dev*) ;
 int VAR_7 ;
 int FUNC_13 (TYPE_3__*) ;
 int FUNC_14 (TYPE_3__*,struct iio_dev*) ;
 int FUNC_15 (int *) ;
 int VAR_8 ;
 int FUNC_16 (struct mxc4005_data*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_17(struct i2c_client *VAR_14,
    const struct i2c_device_id *VAR_15)
{
 struct mxc4005_data *VAR_16;
 struct iio_dev *VAR_17;
 struct regmap *VAR_18;
 int VAR_19;

 VAR_17 = FUNC_4(&VAR_14->dev, sizeof(*VAR_16));
 if (!VAR_17)
  return -VAR_0;

 VAR_18 = FUNC_9(VAR_14, &VAR_10);
 if (FUNC_1(VAR_18)) {
  FUNC_3(&VAR_14->dev, "failed to initialize regmap\n");
  return FUNC_2(VAR_18);
 }

 VAR_16 = FUNC_12(VAR_17);
 FUNC_11(VAR_14, VAR_17);
 VAR_16->dev = &VAR_14->dev;
 VAR_16->regmap = VAR_18;

 VAR_19 = FUNC_16(VAR_16);
 if (VAR_19 < 0) {
  FUNC_3(&VAR_14->dev, "failed to initialize chip\n");
  return VAR_19;
 }

 FUNC_15(&VAR_16->mutex);

 VAR_17->dev.parent = &VAR_14->dev;
 VAR_17->channels = VAR_8;
 VAR_17->num_channels = FUNC_0(VAR_8);
 VAR_17->available_scan_masks = VAR_11;
 VAR_17->name = VAR_4;
 VAR_17->modes = VAR_1;
 VAR_17->info = &VAR_9;

 VAR_19 = FUNC_8(&VAR_14->dev, VAR_17,
      VAR_6,
      VAR_12,
      ((void*)0));
 if (VAR_19 < 0) {
  FUNC_3(&VAR_14->dev,
   "failed to setup iio triggered buffer\n");
  return VAR_19;
 }

 if (VAR_14->irq > 0) {
  VAR_16->dready_trig = FUNC_6(&VAR_14->dev,
          "%s-dev%d",
          VAR_17->name,
          VAR_17->id);
  if (!VAR_16->dready_trig)
   return -VAR_0;

  VAR_19 = FUNC_10(&VAR_14->dev, VAR_14->irq,
      VAR_7,
      ((void*)0),
      VAR_3 |
      VAR_2,
      VAR_5,
      VAR_16->dready_trig);
  if (VAR_19) {
   FUNC_3(&VAR_14->dev,
    "failed to init threaded irq\n");
   return VAR_19;
  }

  VAR_16->dready_trig->dev.parent = &VAR_14->dev;
  VAR_16->dready_trig->ops = &VAR_13;
  FUNC_14(VAR_16->dready_trig, VAR_17);
  VAR_17->trig = VAR_16->dready_trig;
  FUNC_13(VAR_17->trig);
  VAR_19 = FUNC_7(&VAR_14->dev,
      VAR_16->dready_trig);
  if (VAR_19) {
   FUNC_3(&VAR_14->dev,
    "failed to register trigger\n");
   return VAR_19;
  }
 }

 return FUNC_5(&VAR_14->dev, VAR_17);
}
