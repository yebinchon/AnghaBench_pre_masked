
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * parent; } ;
struct iio_dev {char* name; int num_channels; int channels; int modes; int * info; TYPE_1__ dev; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;
struct da311_data {struct i2c_client* client; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct i2c_client*,int) ;
 int VAR_6 ;
 int FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int *,char*) ;
 struct iio_dev* FUNC_4 (int *,int) ;
 int FUNC_5 (struct i2c_client*,struct iio_dev*) ;
 int FUNC_6 (struct i2c_client*,int ) ;
 int FUNC_7 (struct iio_dev*) ;
 struct da311_data* FUNC_8 (struct iio_dev*) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 int VAR_9;
 struct iio_dev *VAR_10;
 struct da311_data *VAR_11;

 VAR_9 = FUNC_6(VAR_7, VAR_1);
 if (VAR_9 != VAR_0)
  return (VAR_9 < 0) ? VAR_9 : -VAR_2;

 VAR_10 = FUNC_4(&VAR_7->dev, sizeof(*VAR_11));
 if (!VAR_10)
  return -VAR_3;

 VAR_11 = FUNC_8(VAR_10);
 VAR_11->client = VAR_7;
 FUNC_5(VAR_7, VAR_10);

 VAR_10->dev.parent = &VAR_7->dev;
 VAR_10->info = &VAR_6;
 VAR_10->name = "da311";
 VAR_10->modes = VAR_4;
 VAR_10->channels = VAR_5;
 VAR_10->num_channels = FUNC_0(VAR_5);

 VAR_9 = FUNC_2(VAR_7);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_1(VAR_7, 1);
 if (VAR_9 < 0)
  return VAR_9;

 VAR_9 = FUNC_7(VAR_10);
 if (VAR_9 < 0) {
  FUNC_3(&VAR_7->dev, "device_register failed\n");
  FUNC_1(VAR_7, 0);
 }

 return VAR_9;
}
