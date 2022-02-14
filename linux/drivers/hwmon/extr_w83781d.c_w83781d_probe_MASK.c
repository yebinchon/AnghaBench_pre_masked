
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct w83781d_data {int * lm75; int hwmon_dev; int type; struct i2c_client* client; int update_lock; int lock; } ;
struct i2c_device_id {int driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct w83781d_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct i2c_client*,struct w83781d_data*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*,int ,int ) ;
 int FUNC_8 (struct i2c_client*) ;
 int FUNC_9 (struct device*) ;
 int FUNC_10 (struct device*) ;

__attribute__((used)) static int
FUNC_11(struct i2c_client *VAR_2, const struct i2c_device_id *VAR_3)
{
 struct device *VAR_4 = &VAR_2->dev;
 struct w83781d_data *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_2(VAR_4, sizeof(struct w83781d_data), VAR_1);
 if (!VAR_5)
  return -VAR_0;

 FUNC_4(VAR_2, VAR_5);
 FUNC_6(&VAR_5->lock);
 FUNC_6(&VAR_5->update_lock);

 VAR_5->type = VAR_3->driver_data;
 VAR_5->client = VAR_2;


 VAR_6 = FUNC_8(VAR_2);
 if (VAR_6)
  return VAR_6;


 FUNC_9(VAR_4);


 VAR_6 = FUNC_7(VAR_4, VAR_5->type, 0);
 if (VAR_6)
  goto exit_remove_files;

 VAR_5->hwmon_dev = FUNC_3(VAR_4);
 if (FUNC_0(VAR_5->hwmon_dev)) {
  VAR_6 = FUNC_1(VAR_5->hwmon_dev);
  goto exit_remove_files;
 }

 return 0;

 exit_remove_files:
 FUNC_10(VAR_4);
 FUNC_5(VAR_5->lm75[0]);
 FUNC_5(VAR_5->lm75[1]);
 return VAR_6;
}
