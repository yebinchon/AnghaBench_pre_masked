
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * parent; } ;
struct iio_dev {int modes; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {size_t driver_data; int name; } ;
struct i2c_client {int dev; int adapter; } ;
struct bh1750_data {int lock; TYPE_2__* chip_info; struct i2c_client* client; } ;
struct TYPE_4__ {int mtreg_to_usec; int mtreg_default; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct bh1750_data*,int) ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 int VAR_7 ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_5 (struct iio_dev*) ;
 struct bh1750_data* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 int VAR_10, VAR_11;
 struct bh1750_data *VAR_12;
 struct iio_dev *VAR_13;

 if (!FUNC_3(VAR_8->adapter, VAR_2 |
    VAR_3))
  return -VAR_1;

 VAR_13 = FUNC_2(&VAR_8->dev, sizeof(*VAR_12));
 if (!VAR_13)
  return -VAR_0;

 VAR_12 = FUNC_6(VAR_13);
 FUNC_4(VAR_8, VAR_13);
 VAR_12->client = VAR_8;
 VAR_12->chip_info = &VAR_6[VAR_9->driver_data];

 VAR_11 = VAR_12->chip_info->mtreg_to_usec * VAR_12->chip_info->mtreg_default;
 VAR_10 = FUNC_1(VAR_12, VAR_11);
 if (VAR_10 < 0)
  return VAR_10;

 FUNC_7(&VAR_12->lock);
 VAR_13->dev.parent = &VAR_8->dev;
 VAR_13->info = &VAR_7;
 VAR_13->name = VAR_9->name;
 VAR_13->channels = VAR_5;
 VAR_13->num_channels = FUNC_0(VAR_5);
 VAR_13->modes = VAR_4;

 return FUNC_5(VAR_13);
}
