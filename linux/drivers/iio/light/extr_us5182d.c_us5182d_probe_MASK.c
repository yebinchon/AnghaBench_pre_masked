
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct us5182d_data {scalar_t__ default_continuous; struct i2c_client* client; int lock; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {scalar_t__ irq; int dev; } ;


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
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,scalar_t__,int *,int ,int,char*,struct iio_dev*) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct iio_dev*) ;
 struct us5182d_data* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int ) ;
 int FUNC_13 (int *) ;
 int VAR_10 ;
 int FUNC_14 (struct iio_dev*) ;
 int FUNC_15 (struct iio_dev*) ;
 int VAR_11 ;
 int FUNC_16 (struct iio_dev*) ;
 int VAR_12 ;
 int FUNC_17 (struct us5182d_data*,int ) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_13,
    const struct i2c_device_id *VAR_14)
{
 struct us5182d_data *VAR_15;
 struct iio_dev *VAR_16;
 int VAR_17;

 VAR_16 = FUNC_3(&VAR_13->dev, sizeof(*VAR_15));
 if (!VAR_16)
  return -VAR_1;

 VAR_15 = FUNC_8(VAR_16);
 FUNC_5(VAR_13, VAR_16);
 VAR_15->client = VAR_13;

 FUNC_9(&VAR_15->lock);

 VAR_16->dev.parent = &VAR_13->dev;
 VAR_16->info = &VAR_11;
 VAR_16->name = VAR_7;
 VAR_16->channels = VAR_10;
 VAR_16->num_channels = FUNC_0(VAR_10);
 VAR_16->modes = VAR_2;

 VAR_17 = FUNC_6(VAR_15->client, VAR_8);
 if (VAR_17 != VAR_6) {
  FUNC_1(&VAR_15->client->dev,
   "Failed to detect US5182 light chip\n");
  return (VAR_17 < 0) ? VAR_17 : -VAR_0;
 }

 if (VAR_13->irq > 0) {
  VAR_17 = FUNC_4(&VAR_13->dev, VAR_13->irq, ((void*)0),
      VAR_12,
      VAR_4 | VAR_3,
      "us5182d-irq", VAR_16);
  if (VAR_17 < 0)
   return VAR_17;
 } else
  FUNC_2(&VAR_13->dev, "no valid irq found\n");

 FUNC_15(VAR_16);
 VAR_17 = FUNC_16(VAR_16);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_14(VAR_16);
 if (VAR_17 < 0)
  goto out_err;

 if (VAR_15->default_continuous) {
  VAR_17 = FUNC_11(&VAR_13->dev);
  if (VAR_17 < 0)
   goto out_err;
 }

 FUNC_10(&VAR_13->dev);
 FUNC_12(&VAR_13->dev,
      VAR_9);
 FUNC_13(&VAR_13->dev);

 VAR_17 = FUNC_7(VAR_16);
 if (VAR_17 < 0)
  goto out_err;

 return 0;

out_err:
 FUNC_17(VAR_15, VAR_5);
 return VAR_17;

}
