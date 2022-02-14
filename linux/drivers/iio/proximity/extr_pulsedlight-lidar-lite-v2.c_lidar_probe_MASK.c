
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lidar_data {int i2c_enabled; struct iio_dev* indio_dev; struct i2c_client* client; int xfer; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; TYPE_1__ dev; int num_channels; int channels; int name; int * info; } ;
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
 struct iio_dev* FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct lidar_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*,int *,int ,int *) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *,int) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct i2c_client *VAR_12,
         const struct i2c_device_id *VAR_13)
{
 struct lidar_data *VAR_14;
 struct iio_dev *VAR_15;
 int VAR_16;

 VAR_15 = FUNC_1(&VAR_12->dev, sizeof(*VAR_14));
 if (!VAR_15)
  return -VAR_0;
 VAR_14 = FUNC_5(VAR_15);

 if (FUNC_2(VAR_12->adapter, VAR_2)) {
  VAR_14->xfer = VAR_8;
  VAR_14->i2c_enabled = 1;
 } else if (FUNC_2(VAR_12->adapter,
    VAR_4 | VAR_3))
  VAR_14->xfer = VAR_10;
 else
  return -VAR_1;

 VAR_15->info = &VAR_9;
 VAR_15->name = VAR_6;
 VAR_15->channels = VAR_7;
 VAR_15->num_channels = FUNC_0(VAR_7);
 VAR_15->dev.parent = &VAR_12->dev;
 VAR_15->modes = VAR_5;

 FUNC_3(VAR_12, VAR_15);

 VAR_14->client = VAR_12;
 VAR_14->indio_dev = VAR_15;

 VAR_16 = FUNC_7(VAR_15, ((void*)0),
      VAR_11, ((void*)0));
 if (VAR_16)
  return VAR_16;

 VAR_16 = FUNC_4(VAR_15);
 if (VAR_16)
  goto error_unreg_buffer;

 FUNC_11(&VAR_12->dev, 1000);
 FUNC_12(&VAR_12->dev);

 VAR_16 = FUNC_10(&VAR_12->dev);
 if (VAR_16)
  goto error_unreg_buffer;
 FUNC_8(&VAR_12->dev);
 FUNC_9(&VAR_12->dev);

 return 0;

error_unreg_buffer:
 FUNC_6(VAR_15);

 return VAR_16;
}
