
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si1133_data {int mutex; struct i2c_client* client; int regmap; int completion; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int * info; int num_channels; int channels; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int dev; int irq; int name; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,char*,...) ;
 int FUNC_4 (int *,char*,int ,int) ;
 struct iio_dev* FUNC_5 (int *,int) ;
 int FUNC_6 (int *,struct iio_dev*) ;
 int FUNC_7 (struct i2c_client*,int *) ;
 int FUNC_8 (int *,int ,int *,int ,int,int ,struct iio_dev*) ;
 int FUNC_9 (struct i2c_client*,struct iio_dev*) ;
 struct si1133_data* FUNC_10 (struct iio_dev*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_13 (struct si1133_data*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_14 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_9,
   const struct i2c_device_id *VAR_10)
{
 struct si1133_data *VAR_11;
 struct iio_dev *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_5(&VAR_9->dev, sizeof(*VAR_11));
 if (!VAR_12)
  return -VAR_1;

 VAR_11 = FUNC_10(VAR_12);

 FUNC_11(&VAR_11->completion);

 VAR_11->regmap = FUNC_7(VAR_9, &VAR_7);
 if (FUNC_1(VAR_11->regmap)) {
  VAR_13 = FUNC_2(VAR_11->regmap);
  FUNC_3(&VAR_9->dev, "Failed to initialise regmap: %d\n", VAR_13);
  return VAR_13;
 }

 FUNC_9(VAR_9, VAR_12);
 VAR_11->client = VAR_9;

 VAR_12->dev.parent = &VAR_9->dev;
 VAR_12->name = VAR_10->name;
 VAR_12->channels = VAR_5;
 VAR_12->num_channels = FUNC_0(VAR_5);
 VAR_12->info = &VAR_6;
 VAR_12->modes = VAR_2;

 FUNC_12(&VAR_11->mutex);

 VAR_13 = FUNC_14(VAR_12);
 if (VAR_13)
  return VAR_13;

 VAR_13 = FUNC_13(VAR_11);
 if (VAR_13) {
  FUNC_3(&VAR_9->dev,
   "Error when initializing chip: %d\n", VAR_13);
  return VAR_13;
 }

 if (!VAR_9->irq) {
  FUNC_3(&VAR_9->dev,
   "Required interrupt not provided, cannot proceed\n");
  return -VAR_0;
 }

 VAR_13 = FUNC_8(&VAR_9->dev, VAR_9->irq,
     ((void*)0),
     VAR_8,
     VAR_3 | VAR_4,
     VAR_9->name, VAR_12);
 if (VAR_13) {
  FUNC_4(&VAR_9->dev, "Request irq %d failed: %i\n",
    VAR_9->irq, VAR_13);
  return VAR_13;
 }

 return FUNC_6(&VAR_9->dev, VAR_12);
}
