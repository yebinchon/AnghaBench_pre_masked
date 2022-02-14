
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {char* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct dmard10_data {struct i2c_client* client; } ;


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
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct iio_dev*) ;
 struct dmard10_data* FUNC_8 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_9,
   const struct i2c_device_id *VAR_10)
{
 int VAR_11;
 struct iio_dev *VAR_12;
 struct dmard10_data *VAR_13;


 VAR_11 = FUNC_6(VAR_9, VAR_0);
 if (VAR_11 != VAR_2)
  return (VAR_11 < 0) ? VAR_11 : -VAR_4;

 VAR_11 = FUNC_6(VAR_9, VAR_1);
 if (VAR_11 != VAR_3)
  return (VAR_11 < 0) ? VAR_11 : -VAR_4;

 VAR_12 = FUNC_2(&VAR_9->dev, sizeof(*VAR_13));
 if (!VAR_12) {
  FUNC_1(&VAR_9->dev, "iio allocation failed!\n");
  return -VAR_5;
 }

 VAR_13 = FUNC_8(VAR_12);
 VAR_13->client = VAR_9;
 FUNC_5(VAR_9, VAR_12);

 VAR_12->dev.parent = &VAR_9->dev;
 VAR_12->info = &VAR_8;
 VAR_12->name = "dmard10";
 VAR_12->modes = VAR_6;
 VAR_12->channels = VAR_7;
 VAR_12->num_channels = FUNC_0(VAR_7);

 VAR_11 = FUNC_3(VAR_9);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_11 = FUNC_7(VAR_12);
 if (VAR_11 < 0) {
  FUNC_1(&VAR_9->dev, "device_register failed\n");
  FUNC_4(VAR_9);
 }

 return VAR_11;
}
