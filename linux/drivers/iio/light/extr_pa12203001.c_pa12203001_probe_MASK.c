
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pa12203001_data {int lock; int map; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (struct i2c_client*,int *) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct iio_dev*) ;
 struct pa12203001_data* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (struct iio_dev*) ;
 int FUNC_10 (struct iio_dev*,int ) ;
 int VAR_8 ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ) ;
 int FUNC_14 (int *) ;

__attribute__((used)) static int FUNC_15(struct i2c_client *VAR_9,
       const struct i2c_device_id *VAR_10)
{
 struct pa12203001_data *VAR_11;
 struct iio_dev *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_3(&VAR_9->dev,
       sizeof(struct pa12203001_data));
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_7(VAR_12);
 FUNC_5(VAR_9, VAR_12);
 VAR_11->client = VAR_9;

 VAR_11->map = FUNC_4(VAR_9, &VAR_8);
 if (FUNC_1(VAR_11->map))
  return FUNC_2(VAR_11->map);

 FUNC_8(&VAR_11->lock);

 VAR_12->dev.parent = &VAR_9->dev;
 VAR_12->info = &VAR_7;
 VAR_12->name = VAR_4;
 VAR_12->channels = VAR_6;
 VAR_12->num_channels = FUNC_0(VAR_6);
 VAR_12->modes = VAR_1;

 VAR_13 = FUNC_9(VAR_12);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_10(VAR_12, VAR_3);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_12(&VAR_9->dev);
 if (VAR_13 < 0)
  goto out_err;

 FUNC_11(&VAR_9->dev);
 FUNC_13(&VAR_9->dev,
      VAR_5);
 FUNC_14(&VAR_9->dev);

 VAR_13 = FUNC_6(VAR_12);
 if (VAR_13 < 0)
  goto out_err;

 return 0;

out_err:
 FUNC_10(VAR_12, VAR_2);
 return VAR_13;
}
