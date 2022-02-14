
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct w83l785ts_data {int hwmon_dev; int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {struct device dev; } ;
struct TYPE_4__ {int dev_attr; } ;
struct TYPE_3__ {int dev_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,int *) ;
 int FUNC_3 (struct device*,int *) ;
 struct w83l785ts_data* FUNC_4 (struct device*,int,int ) ;
 int FUNC_5 (struct device*) ;
 int FUNC_6 (struct i2c_client*,struct w83l785ts_data*) ;
 int FUNC_7 (int *) ;
 TYPE_2__ VAR_2 ;
 TYPE_1__ VAR_3 ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_4,
      const struct i2c_device_id *VAR_5)
{
 struct w83l785ts_data *VAR_6;
 struct device *VAR_7 = &VAR_4->dev;
 int VAR_8;

 VAR_6 = FUNC_4(VAR_7, sizeof(struct w83l785ts_data), VAR_1);
 if (!VAR_6)
  return -VAR_0;

 FUNC_6(VAR_4, VAR_6);
 FUNC_7(&VAR_6->update_lock);






 VAR_8 = FUNC_2(VAR_7, &VAR_2.dev_attr);
 if (VAR_8)
  return VAR_8;

 VAR_8 = FUNC_2(VAR_7, &VAR_3.dev_attr);
 if (VAR_8)
  goto exit_remove;


 VAR_6->hwmon_dev = FUNC_5(VAR_7);
 if (FUNC_0(VAR_6->hwmon_dev)) {
  VAR_8 = FUNC_1(VAR_6->hwmon_dev);
  goto exit_remove;
 }

 return 0;

exit_remove:
 FUNC_3(VAR_7, &VAR_2.dev_attr);
 FUNC_3(VAR_7, &VAR_3.dev_attr);
 return VAR_8;
}
