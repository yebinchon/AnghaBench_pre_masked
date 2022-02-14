
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct st_sensor_settings {int dummy; } ;
struct st_sensor_data {struct st_sensor_settings* sensor_settings; } ;
struct iio_dev {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_7__ {scalar_t__ of_node; } ;
struct i2c_client {TYPE_1__ dev; int name; } ;
struct TYPE_8__ {int name; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*,char*,int ) ;
 struct iio_dev* FUNC_2 (TYPE_1__*,int) ;
 struct st_sensor_data* FUNC_3 (struct iio_dev*) ;
 int FUNC_4 (struct iio_dev*) ;
 struct st_sensor_settings* FUNC_5 (int ) ;
 TYPE_3__* VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct iio_dev*,struct i2c_client*) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int ,int ,int) ;
 int FUNC_9 (int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_5,
         const struct i2c_device_id *VAR_6)
{
 const struct st_sensor_settings *VAR_7;
 struct st_sensor_data *VAR_8;
 struct iio_dev *VAR_9;
 int VAR_10;

 if (VAR_5->dev.of_node) {
  FUNC_8(&VAR_5->dev, VAR_4,
      VAR_5->name, sizeof(VAR_5->name));
 } else if (FUNC_0(&VAR_5->dev)) {
  VAR_10 = FUNC_7(&VAR_5->dev);
  if ((VAR_10 < 0) || (VAR_10 >= VAR_2))
   return -VAR_0;

  FUNC_9(VAR_5->name, VAR_3[VAR_10].name,
   sizeof(VAR_5->name));
 } else if (!VAR_6)
  return -VAR_0;

 VAR_7 = FUNC_5(VAR_5->name);
 if (!VAR_7) {
  FUNC_1(&VAR_5->dev, "device name %s not recognized.\n",
   VAR_5->name);
  return -VAR_0;
 }

 VAR_9 = FUNC_2(&VAR_5->dev, sizeof(*VAR_8));
 if (!VAR_9)
  return -VAR_1;

 VAR_8 = FUNC_3(VAR_9);
 VAR_8->sensor_settings = (struct st_sensor_settings *)VAR_7;

 VAR_10 = FUNC_6(VAR_9, VAR_5);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_10 = FUNC_4(VAR_9);
 if (VAR_10 < 0)
  return VAR_10;

 return 0;
}
