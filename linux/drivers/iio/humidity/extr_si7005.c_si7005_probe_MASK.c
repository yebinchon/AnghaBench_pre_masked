
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct si7005_data {int config; int lock; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int * info; int modes; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;


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
 int FUNC_1 (int *) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct iio_dev*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 struct si7005_data* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_11,
    const struct i2c_device_id *VAR_12)
{
 struct iio_dev *VAR_13;
 struct si7005_data *VAR_14;
 int VAR_15;

 if (!FUNC_4(VAR_11->adapter, VAR_3))
  return -VAR_2;

 VAR_13 = FUNC_2(&VAR_11->dev, sizeof(*VAR_14));
 if (!VAR_13)
  return -VAR_1;

 VAR_14 = FUNC_7(VAR_13);
 FUNC_5(VAR_11, VAR_13);
 VAR_14->client = VAR_11;
 FUNC_8(&VAR_14->lock);

 VAR_13->dev.parent = &VAR_11->dev;
 VAR_13->name = FUNC_1(&VAR_11->dev);
 VAR_13->modes = VAR_4;
 VAR_13->info = &VAR_10;

 VAR_13->channels = VAR_9;
 VAR_13->num_channels = FUNC_0(VAR_9);

 VAR_15 = FUNC_6(VAR_11, VAR_6);
 if (VAR_15 < 0)
  return VAR_15;
 if (VAR_15 != VAR_7 && VAR_15 != VAR_8)
  return -VAR_0;

 VAR_15 = FUNC_6(VAR_11, VAR_5);
 if (VAR_15 < 0)
  return VAR_15;
 VAR_14->config = VAR_15;

 return FUNC_3(&VAR_11->dev, VAR_13);
}
