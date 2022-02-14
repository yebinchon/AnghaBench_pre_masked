
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {int * info; int num_channels; int channels; int modes; int name; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int adapter; } ;
struct dmard06_data {int chip_id; struct i2c_client* client; } ;


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
 int FUNC_1 (int *,char*,...) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 int FUNC_3 (int *,struct iio_dev*) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 struct dmard06_data* FUNC_7 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_12,
   const struct i2c_device_id *VAR_13)
{
 int VAR_14;
 struct iio_dev *VAR_15;
 struct dmard06_data *VAR_16;

 if (!FUNC_4(VAR_12->adapter, VAR_8)) {
  FUNC_1(&VAR_12->dev, "I2C check functionality failed\n");
  return -VAR_7;
 }

 VAR_15 = FUNC_2(&VAR_12->dev, sizeof(*VAR_16));
 if (!VAR_15) {
  FUNC_1(&VAR_12->dev, "Failed to allocate iio device\n");
  return -VAR_6;
 }

 VAR_16 = FUNC_7(VAR_15);
 VAR_16->client = VAR_12;

 VAR_14 = FUNC_6(VAR_16->client, VAR_2);
 if (VAR_14 < 0) {
  FUNC_1(&VAR_12->dev, "Error reading chip id: %d\n", VAR_14);
  return VAR_14;
 }

 if (VAR_14 != VAR_0 && VAR_14 != VAR_1 &&
     VAR_14 != VAR_4) {
  FUNC_1(&VAR_12->dev, "Invalid chip id: %02d\n", VAR_14);
  return -VAR_5;
 }

 VAR_16->chip_id = VAR_14;

 FUNC_5(VAR_12, VAR_15);
 VAR_15->dev.parent = &VAR_12->dev;
 VAR_15->name = VAR_3;
 VAR_15->modes = VAR_9;
 VAR_15->channels = VAR_10;
 VAR_15->num_channels = FUNC_0(VAR_10);
 VAR_15->info = &VAR_11;

 return FUNC_3(&VAR_12->dev, VAR_15);
}
