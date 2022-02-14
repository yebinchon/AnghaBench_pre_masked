
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int * info; int num_channels; int channels; int modes; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct dmard09_data {struct i2c_client* client; } ;


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
 int FUNC_4 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 struct dmard09_data* FUNC_6 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_8,
   const struct i2c_device_id *VAR_9)
{
 int VAR_10;
 struct iio_dev *VAR_11;
 struct dmard09_data *VAR_12;

 VAR_11 = FUNC_2(&VAR_8->dev, sizeof(*VAR_12));
 if (!VAR_11) {
  FUNC_1(&VAR_8->dev, "iio allocation failed\n");
  return -VAR_4;
 }

 VAR_12 = FUNC_6(VAR_11);
 VAR_12->client = VAR_8;

 VAR_10 = FUNC_5(VAR_12->client, VAR_2);
 if (VAR_10 < 0) {
  FUNC_1(&VAR_8->dev, "Error reading chip id %d\n", VAR_10);
  return VAR_10;
 }

 if (VAR_10 != VAR_0) {
  FUNC_1(&VAR_8->dev, "Invalid chip id %d\n", VAR_10);
  return -VAR_3;
 }

 FUNC_4(VAR_8, VAR_11);
 VAR_11->dev.parent = &VAR_8->dev;
 VAR_11->name = VAR_1;
 VAR_11->modes = VAR_5;
 VAR_11->channels = VAR_6;
 VAR_11->num_channels = FUNC_0(VAR_6);
 VAR_11->info = &VAR_7;

 return FUNC_3(&VAR_8->dev, VAR_11);
}
