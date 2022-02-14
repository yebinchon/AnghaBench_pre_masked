
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tsl4531_data {struct i2c_client* client; int lock; } ;
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
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *,char*) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_4 (struct i2c_client*,int ,int ) ;
 int FUNC_5 (struct iio_dev*) ;
 struct tsl4531_data* FUNC_6 (struct iio_dev*) ;
 int FUNC_7 (int *) ;
 int VAR_7 ;
 int FUNC_8 (struct i2c_client*) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_9,
     const struct i2c_device_id *VAR_10)
{
 struct tsl4531_data *VAR_11;
 struct iio_dev *VAR_12;
 int VAR_13;

 VAR_12 = FUNC_2(&VAR_9->dev, sizeof(*VAR_11));
 if (!VAR_12)
  return -VAR_0;

 VAR_11 = FUNC_6(VAR_12);
 FUNC_3(VAR_9, VAR_12);
 VAR_11->client = VAR_9;
 FUNC_7(&VAR_11->lock);

 VAR_13 = FUNC_8(VAR_9);
 if (VAR_13) {
  FUNC_1(&VAR_9->dev, "no TSL4531 sensor\n");
  return VAR_13;
 }

 VAR_13 = FUNC_4(VAR_11->client, VAR_3,
  VAR_5);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_4(VAR_11->client, VAR_2,
  VAR_6);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_12->dev.parent = &VAR_9->dev;
 VAR_12->info = &VAR_8;
 VAR_12->channels = VAR_7;
 VAR_12->num_channels = FUNC_0(VAR_7);
 VAR_12->name = VAR_4;
 VAR_12->modes = VAR_1;

 return FUNC_5(VAR_12);
}
