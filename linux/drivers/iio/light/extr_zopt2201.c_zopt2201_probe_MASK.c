
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zopt2201_data {int rate; int lock; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int name; int num_channels; int channels; int * info; TYPE_1__ dev; } ;
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
 int VAR_9 ;
 int VAR_10 ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (int *,struct iio_dev*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 struct zopt2201_data* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (struct zopt2201_data*,int ) ;
 int FUNC_9 (struct zopt2201_data*,int ) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_13,
     const struct i2c_device_id *VAR_14)
{
 struct zopt2201_data *VAR_15;
 struct iio_dev *VAR_16;
 int VAR_17;

 if (!FUNC_3(VAR_13->adapter,
         VAR_3))
  return -VAR_2;

 VAR_17 = FUNC_5(VAR_13, VAR_9);
 if (VAR_17 < 0)
  return VAR_17;
 if (VAR_17 != VAR_10)
  return -VAR_0;

 VAR_16 = FUNC_1(&VAR_13->dev, sizeof(*VAR_15));
 if (!VAR_16)
  return -VAR_1;

 VAR_15 = FUNC_6(VAR_16);
 FUNC_4(VAR_13, VAR_16);
 VAR_15->client = VAR_13;
 FUNC_7(&VAR_15->lock);

 VAR_16->dev.parent = &VAR_13->dev;
 VAR_16->info = &VAR_12;
 VAR_16->channels = VAR_11;
 VAR_16->num_channels = FUNC_0(VAR_11);
 VAR_16->name = VAR_5;
 VAR_16->modes = VAR_4;

 VAR_15->rate = VAR_7;
 VAR_17 = FUNC_9(VAR_15, VAR_8);
 if (VAR_17 < 0)
  return VAR_17;

 VAR_17 = FUNC_8(VAR_15, VAR_6);
 if (VAR_17 < 0)
  return VAR_17;

 return FUNC_2(&VAR_13->dev, VAR_16);
}
