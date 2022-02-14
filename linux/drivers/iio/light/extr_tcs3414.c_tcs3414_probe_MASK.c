
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcs3414_data {int gain; struct i2c_client* client; int timing; int control; } ;
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
 int FUNC_1 (int *,char*) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (struct i2c_client*,int ,int ) ;
 int FUNC_6 (struct iio_dev*) ;
 struct tcs3414_data* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (struct iio_dev*) ;
 int FUNC_9 (struct iio_dev*,int *,int ,int *) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_14,
      const struct i2c_device_id *VAR_15)
{
 struct tcs3414_data *VAR_16;
 struct iio_dev *VAR_17;
 int VAR_18;

 VAR_17 = FUNC_2(&VAR_14->dev, sizeof(*VAR_16));
 if (VAR_17 == ((void*)0))
  return -VAR_1;

 VAR_16 = FUNC_7(VAR_17);
 FUNC_3(VAR_14, VAR_17);
 VAR_16->client = VAR_14;

 VAR_17->dev.parent = &VAR_14->dev;
 VAR_17->info = &VAR_12;
 VAR_17->name = VAR_5;
 VAR_17->channels = VAR_11;
 VAR_17->num_channels = FUNC_0(VAR_11);
 VAR_17->modes = VAR_2;

 VAR_18 = FUNC_4(VAR_16->client, VAR_7);
 if (VAR_18 < 0)
  return VAR_18;

 switch (VAR_18 & 0xf0) {
 case 0x00:
  FUNC_1(&VAR_14->dev, "TCS3404 found\n");
  break;
 case 0x10:
  FUNC_1(&VAR_14->dev, "TCS3413/14/15/16 found\n");
  break;
 default:
  return -VAR_0;
 }

 VAR_16->control = VAR_4;
 VAR_18 = FUNC_5(VAR_16->client, VAR_3,
  VAR_16->control);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_16->timing = VAR_8;
 VAR_18 = FUNC_5(VAR_16->client, VAR_9,
  VAR_16->timing);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_4(VAR_16->client, VAR_6);
 if (VAR_18 < 0)
  return VAR_18;
 VAR_16->gain = VAR_18;

 VAR_18 = FUNC_9(VAR_17, ((void*)0),
  VAR_13, &VAR_10);
 if (VAR_18 < 0)
  return VAR_18;

 VAR_18 = FUNC_6(VAR_17);
 if (VAR_18 < 0)
  goto buffer_cleanup;

 return 0;

buffer_cleanup:
 FUNC_8(VAR_17);
 return VAR_18;
}
