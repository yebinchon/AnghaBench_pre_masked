
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rfd77402_data {int lock; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int name; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct iio_dev*) ;
 struct rfd77402_data* FUNC_5 (struct iio_dev*) ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct rfd77402_data*) ;
 int FUNC_8 (struct rfd77402_data*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_7,
     const struct i2c_device_id *VAR_8)
{
 struct rfd77402_data *VAR_9;
 struct iio_dev *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_3(VAR_7, VAR_4);
 if (VAR_11 < 0)
  return VAR_11;
 if (VAR_11 != 0xad01 && VAR_11 != 0xad02)
  return -VAR_0;

 VAR_10 = FUNC_1(&VAR_7->dev, sizeof(*VAR_9));
 if (!VAR_10)
  return -VAR_1;

 VAR_9 = FUNC_5(VAR_10);
 FUNC_2(VAR_7, VAR_10);
 VAR_9->client = VAR_7;
 FUNC_6(&VAR_9->lock);

 VAR_10->dev.parent = &VAR_7->dev;
 VAR_10->info = &VAR_6;
 VAR_10->channels = VAR_5;
 VAR_10->num_channels = FUNC_0(VAR_5);
 VAR_10->name = VAR_3;
 VAR_10->modes = VAR_2;

 VAR_11 = FUNC_7(VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_4(VAR_10);
 if (VAR_11)
  goto err_powerdown;

 return 0;

err_powerdown:
 FUNC_8(VAR_9);
 return VAR_11;
}
