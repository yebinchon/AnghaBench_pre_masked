
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mma9553_data {int mutex; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {char const* name; TYPE_1__ dev; int * info; int modes; int num_channels; int channels; } ;
struct i2c_device_id {char* name; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (TYPE_1__*,char*,char const*) ;
 int FUNC_3 (int *,char*,...) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (int *,scalar_t__,int ,int ,int ,int ,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 struct mma9553_data* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct i2c_client*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_10 (struct mma9553_data*) ;
 int FUNC_11 (struct mma9553_data*) ;
 int VAR_9 ;
 char* FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int ) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_10,
    const struct i2c_device_id *VAR_11)
{
 struct mma9553_data *VAR_12;
 struct iio_dev *VAR_13;
 const char *VAR_14 = ((void*)0);
 int VAR_15;

 VAR_13 = FUNC_4(&VAR_10->dev, sizeof(*VAR_12));
 if (!VAR_13)
  return -VAR_0;

 VAR_12 = FUNC_8(VAR_13);
 FUNC_6(VAR_10, VAR_13);
 VAR_12->client = VAR_10;

 if (VAR_11)
  VAR_14 = VAR_11->name;
 else if (FUNC_0(&VAR_10->dev))
  VAR_14 = FUNC_12(&VAR_10->dev);
 else
  return -VAR_1;

 FUNC_13(&VAR_12->mutex);
 FUNC_11(VAR_12);

 VAR_15 = FUNC_10(VAR_12);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_13->dev.parent = &VAR_10->dev;
 VAR_13->channels = VAR_6;
 VAR_13->num_channels = FUNC_1(VAR_6);
 VAR_13->name = VAR_14;
 VAR_13->modes = VAR_2;
 VAR_13->info = &VAR_8;

 if (VAR_10->irq > 0) {
  VAR_15 = FUNC_5(&VAR_10->dev, VAR_10->irq,
      VAR_9,
      VAR_7,
      VAR_3,
      VAR_5, VAR_13);
  if (VAR_15 < 0) {
   FUNC_3(&VAR_10->dev, "request irq %d failed\n",
    VAR_10->irq);
   goto out_poweroff;
  }
 }

 VAR_15 = FUNC_15(&VAR_10->dev);
 if (VAR_15 < 0)
  goto out_poweroff;

 FUNC_14(&VAR_10->dev);
 FUNC_16(&VAR_10->dev,
      VAR_4);
 FUNC_17(&VAR_10->dev);

 VAR_15 = FUNC_7(VAR_13);
 if (VAR_15 < 0) {
  FUNC_3(&VAR_10->dev, "unable to register iio device\n");
  goto out_poweroff;
 }

 FUNC_2(&VAR_13->dev, "Registered device %s\n", VAR_14);
 return 0;

out_poweroff:
 FUNC_9(VAR_10, 0);
 return VAR_15;
}
