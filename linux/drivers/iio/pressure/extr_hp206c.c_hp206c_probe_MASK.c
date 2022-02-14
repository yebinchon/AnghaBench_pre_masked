
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int num_channels; int channels; int modes; TYPE_1__ dev; int name; int * info; } ;
struct i2c_device_id {int name; } ;
struct i2c_client {int dev; int adapter; } ;
struct hp206c_data {int mutex; struct i2c_client* client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,char*,...) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct iio_dev*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct iio_dev*) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct i2c_client*,struct iio_dev*) ;
 struct hp206c_data* FUNC_7 (struct iio_dev*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 struct iio_dev *VAR_10;
 struct hp206c_data *VAR_11;
 int VAR_12;

 if (!FUNC_5(VAR_8->adapter,
         VAR_2 |
         VAR_3 |
         VAR_4)) {
  FUNC_1(&VAR_8->dev, "Adapter does not support "
    "all required i2c functionality\n");
  return -VAR_0;
 }

 VAR_10 = FUNC_2(&VAR_8->dev, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_7(VAR_10);
 VAR_11->client = VAR_8;
 FUNC_8(&VAR_11->mutex);

 VAR_10->info = &VAR_7;
 VAR_10->name = VAR_9->name;
 VAR_10->dev.parent = &VAR_8->dev;
 VAR_10->modes = VAR_5;
 VAR_10->channels = VAR_6;
 VAR_10->num_channels = FUNC_0(VAR_6);

 FUNC_6(VAR_8, VAR_10);


 VAR_12 = FUNC_4(VAR_10);
 if (VAR_12) {
  FUNC_1(&VAR_8->dev, "Failed to reset on startup: %d\n", VAR_12);
  return -VAR_0;
 }

 return FUNC_3(&VAR_8->dev, VAR_10);
}
