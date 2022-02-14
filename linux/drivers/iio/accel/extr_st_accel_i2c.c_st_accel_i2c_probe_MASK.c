
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct st_sensor_settings {int dummy; } ;
struct st_sensor_data {struct st_sensor_settings* sensor_settings; } ;
struct iio_dev {int dummy; } ;
struct i2c_client {int dev; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,int ) ;
 char* FUNC_1 (int *) ;
 struct iio_dev* FUNC_2 (int *,int) ;
 struct st_sensor_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct st_sensor_settings* FUNC_5 (int ) ;
 int FUNC_6 (struct iio_dev*,struct i2c_client*) ;
 int FUNC_7 (int ,char const*,int) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_2)
{
 const struct st_sensor_settings *VAR_3;
 struct st_sensor_data *VAR_4;
 struct iio_dev *VAR_5;
 const char *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_1(&VAR_2->dev);
 if (VAR_6)
  FUNC_7(VAR_2->name, VAR_6, sizeof(VAR_2->name));

 VAR_3 = FUNC_5(VAR_2->name);
 if (!VAR_3) {
  FUNC_0(&VAR_2->dev, "device name %s not recognized.\n",
   VAR_2->name);
  return -VAR_0;
 }

 VAR_5 = FUNC_2(&VAR_2->dev, sizeof(*VAR_4));
 if (!VAR_5)
  return -VAR_1;

 VAR_4 = FUNC_3(VAR_5);
 VAR_4->sensor_settings = (struct st_sensor_settings *)VAR_3;

 VAR_7 = FUNC_6(VAR_5, VAR_2);
 if (VAR_7 < 0)
  return VAR_7;

 VAR_7 = FUNC_4(VAR_5);
 if (VAR_7 < 0)
  return VAR_7;

 return 0;
}
