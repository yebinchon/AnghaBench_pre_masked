
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {char* name; int modes; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct bh1780_data {struct i2c_client* client; } ;


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
 int VAR_10 ;
 int FUNC_1 (struct bh1780_data*,int ) ;
 int FUNC_2 (struct bh1780_data*,int ,int ) ;
 int FUNC_3 (int *,char*,int) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (struct i2c_adapter*,int ) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 struct bh1780_data* FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *) ;

__attribute__((used)) static int FUNC_18(struct i2c_client *VAR_11,
   const struct i2c_device_id *VAR_12)
{
 int VAR_13;
 struct bh1780_data *VAR_14;
 struct i2c_adapter *VAR_15 = VAR_11->adapter;
 struct iio_dev *VAR_16;

 if (!FUNC_5(VAR_15, VAR_7))
  return -VAR_5;

 VAR_16 = FUNC_4(&VAR_11->dev, sizeof(*VAR_14));
 if (!VAR_16)
  return -VAR_6;

 VAR_14 = FUNC_8(VAR_16);
 VAR_14->client = VAR_11;
 FUNC_6(VAR_11, VAR_16);


 VAR_13 = FUNC_2(VAR_14, VAR_2, VAR_0);
 if (VAR_13 < 0)
  return VAR_13;
 FUNC_9(VAR_1);
 FUNC_12(&VAR_11->dev);
 FUNC_15(&VAR_11->dev);
 FUNC_11(&VAR_11->dev);

 VAR_13 = FUNC_1(VAR_14, VAR_3);
 if (VAR_13 < 0)
  goto out_disable_pm;
 FUNC_3(&VAR_11->dev,
   "Ambient Light Sensor, Rev : %lu\n",
   (VAR_13 & VAR_4));






 FUNC_16(&VAR_11->dev, 5000);
 FUNC_17(&VAR_11->dev);
 FUNC_13(&VAR_11->dev);

 VAR_16->dev.parent = &VAR_11->dev;
 VAR_16->info = &VAR_10;
 VAR_16->name = "bh1780";
 VAR_16->channels = VAR_9;
 VAR_16->num_channels = FUNC_0(VAR_9);
 VAR_16->modes = VAR_8;

 VAR_13 = FUNC_7(VAR_16);
 if (VAR_13)
  goto out_disable_pm;
 return 0;

out_disable_pm:
 FUNC_14(&VAR_11->dev);
 FUNC_10(&VAR_11->dev);
 return VAR_13;
}
