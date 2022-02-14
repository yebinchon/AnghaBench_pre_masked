
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mma9551_data {int mutex; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {char const* name; int * info; int modes; int num_channels; int channels; TYPE_1__ dev; } ;
struct i2c_device_id {char* name; } ;
struct i2c_client {int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int *,char*) ;
 struct iio_dev* FUNC_3 (int *,int) ;
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct mma9551_data* FUNC_6 (struct iio_dev*) ;
 int VAR_3 ;
 int FUNC_7 (struct iio_dev*) ;
 int VAR_4 ;
 int FUNC_8 (struct mma9551_data*) ;
 char* FUNC_9 (int *) ;
 int FUNC_10 (struct i2c_client*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *,int ) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int FUNC_16(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct mma9551_data *VAR_7;
 struct iio_dev *VAR_8;
 const char *VAR_9 = ((void*)0);
 int VAR_10;

 VAR_8 = FUNC_3(&VAR_5->dev, sizeof(*VAR_7));
 if (!VAR_8)
  return -VAR_0;

 VAR_7 = FUNC_6(VAR_8);
 FUNC_4(VAR_5, VAR_8);
 VAR_7->client = VAR_5;

 if (VAR_6)
  VAR_9 = VAR_6->name;
 else if (FUNC_0(&VAR_5->dev))
  VAR_9 = FUNC_9(&VAR_5->dev);

 VAR_10 = FUNC_8(VAR_7);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_11(&VAR_7->mutex);

 VAR_8->dev.parent = &VAR_5->dev;
 VAR_8->channels = VAR_3;
 VAR_8->num_channels = FUNC_1(VAR_3);
 VAR_8->name = VAR_9;
 VAR_8->modes = VAR_1;
 VAR_8->info = &VAR_4;

 VAR_10 = FUNC_7(VAR_8);
 if (VAR_10 < 0)
  goto out_poweroff;

 VAR_10 = FUNC_13(&VAR_5->dev);
 if (VAR_10 < 0)
  goto out_poweroff;

 FUNC_12(&VAR_5->dev);
 FUNC_14(&VAR_5->dev,
      VAR_2);
 FUNC_15(&VAR_5->dev);

 VAR_10 = FUNC_5(VAR_8);
 if (VAR_10 < 0) {
  FUNC_2(&VAR_5->dev, "unable to register iio device\n");
  goto out_poweroff;
 }

 return 0;

out_poweroff:
 FUNC_10(VAR_5, 0);

 return VAR_10;
}
