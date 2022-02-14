
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct isl29125_data {int conf1; struct i2c_client* client; } ;
struct TYPE_2__ {int * parent; } ;
struct iio_dev {int modes; int num_channels; int channels; int name; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
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
 int VAR_8 ;
 int VAR_9 ;
 struct iio_dev* FUNC_1 (int *,int) ;
 int FUNC_2 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int FUNC_5 (struct iio_dev*) ;
 struct isl29125_data* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*,int *,int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_14,
      const struct i2c_device_id *VAR_15)
{
 struct isl29125_data *VAR_16;
 struct iio_dev *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_1(&VAR_14->dev, sizeof(*VAR_16));
 if (VAR_17 == ((void*)0))
  return -VAR_1;

 VAR_16 = FUNC_6(VAR_17);
 FUNC_2(VAR_14, VAR_17);
 VAR_16->client = VAR_14;

 VAR_17->dev.parent = &VAR_14->dev;
 VAR_17->info = &VAR_12;
 VAR_17->name = VAR_5;
 VAR_17->channels = VAR_11;
 VAR_17->num_channels = FUNC_0(VAR_11);
 VAR_17->modes = VAR_2;

 VAR_18 = FUNC_3(VAR_16->client, VAR_4);
 if (VAR_18 < 0)
  return VAR_18;
 if (VAR_18 != VAR_6)
  return -VAR_0;

 VAR_16->conf1 = VAR_7 | VAR_8;
 VAR_18 = FUNC_4(VAR_16->client, VAR_3,
  VAR_16->conf1);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_4(VAR_16->client, VAR_9, 0);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_8(VAR_17, ((void*)0),
  VAR_13, &VAR_10);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_5(VAR_17);
 if (VAR_18 < 0)
  goto buffer_cleanup;

 return 0;

buffer_cleanup:
 FUNC_7(VAR_17);
 return VAR_18;
}
