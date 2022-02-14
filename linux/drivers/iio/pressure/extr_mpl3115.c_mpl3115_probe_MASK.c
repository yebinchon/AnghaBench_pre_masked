
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mpl3115_data {int ctrl_reg1; int lock; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; TYPE_1__ dev; int name; int * info; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int dev; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (struct iio_dev*) ;
 struct mpl3115_data* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*,int *,int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_9 (int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct i2c_client *VAR_11,
    const struct i2c_device_id *VAR_12)
{
 struct mpl3115_data *VAR_13;
 struct iio_dev *VAR_14;
 int VAR_15;

 VAR_15 = FUNC_3(VAR_11, VAR_7);
 if (VAR_15 < 0)
  return VAR_15;
 if (VAR_15 != VAR_6)
  return -VAR_0;

 VAR_14 = FUNC_1(&VAR_11->dev, sizeof(*VAR_13));
 if (!VAR_14)
  return -VAR_1;

 VAR_13 = FUNC_6(VAR_14);
 VAR_13->client = VAR_11;
 FUNC_10(&VAR_13->lock);

 FUNC_2(VAR_11, VAR_14);
 VAR_14->info = &VAR_9;
 VAR_14->name = VAR_12->name;
 VAR_14->dev.parent = &VAR_11->dev;
 VAR_14->modes = VAR_2;
 VAR_14->channels = VAR_8;
 VAR_14->num_channels = FUNC_0(VAR_8);


 FUNC_4(VAR_11, VAR_4,
  VAR_5);
 FUNC_9(50);

 VAR_13->ctrl_reg1 = VAR_3;
 VAR_15 = FUNC_4(VAR_11, VAR_4,
  VAR_13->ctrl_reg1);
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_8(VAR_14, ((void*)0),
  VAR_10, ((void*)0));
 if (VAR_15 < 0)
  return VAR_15;

 VAR_15 = FUNC_5(VAR_14);
 if (VAR_15 < 0)
  goto buffer_cleanup;
 return 0;

buffer_cleanup:
 FUNC_7(VAR_14);
 return VAR_15;
}
