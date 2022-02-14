
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_sensor_settings {int dummy; } ;
struct st_sensor_data {struct st_sensor_settings* sensor_settings; } ;
struct iio_dev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 struct iio_dev* FUNC_1 (int *,int) ;
 struct st_sensor_data* FUNC_2 (struct iio_dev*) ;
 int FUNC_3 (struct iio_dev*) ;
 struct st_sensor_settings* FUNC_4 (int ) ;
 int VAR_2 ;
 int FUNC_5 (struct iio_dev*,struct i2c_client*) ;
 int FUNC_6 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_3,
        const struct i2c_device_id *VAR_4)
{
 const struct st_sensor_settings *VAR_5;
 struct st_sensor_data *VAR_6;
 struct iio_dev *VAR_7;
 int VAR_8;

 FUNC_6(&VAR_3->dev, VAR_2,
     VAR_3->name, sizeof(VAR_3->name));

 VAR_5 = FUNC_4(VAR_3->name);
 if (!VAR_5) {
  FUNC_0(&VAR_3->dev, "device name %s not recognized.\n",
   VAR_3->name);
  return -VAR_0;
 }

 VAR_7 = FUNC_1(&VAR_3->dev, sizeof(*VAR_6));
 if (!VAR_7)
  return -VAR_1;

 VAR_6 = FUNC_2(VAR_7);
 VAR_6->sensor_settings = (struct st_sensor_settings *)VAR_5;

 VAR_8 = FUNC_5(VAR_7, VAR_3);
 if (VAR_8 < 0)
  return VAR_8;

 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8 < 0)
  return VAR_8;

 return 0;
}
