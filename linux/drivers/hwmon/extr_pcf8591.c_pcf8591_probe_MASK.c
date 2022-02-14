
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pcf8591_data {int hwmon_dev; int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct TYPE_4__ {int kobj; } ;
struct i2c_client {TYPE_1__ dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_1__*,int *) ;
 struct pcf8591_data* FUNC_3 (TYPE_1__*,int,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (struct i2c_client*,struct pcf8591_data*) ;
 int VAR_4 ;
 int FUNC_6 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct i2c_client*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,int *) ;

__attribute__((used)) static int FUNC_10(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct pcf8591_data *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_3(&VAR_7->dev, sizeof(struct pcf8591_data),
       VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_5(VAR_7, VAR_9);
 FUNC_6(&VAR_9->update_lock);


 FUNC_7(VAR_7);


 VAR_10 = FUNC_8(&VAR_7->dev.kobj, &VAR_5);
 if (VAR_10)
  return VAR_10;


 if (VAR_4 != 3) {
  VAR_10 = FUNC_2(&VAR_7->dev, &VAR_2);
  if (VAR_10)
   goto exit_sysfs_remove;
 }


 if (VAR_4 == 0) {
  VAR_10 = FUNC_2(&VAR_7->dev, &VAR_3);
  if (VAR_10)
   goto exit_sysfs_remove;
 }

 VAR_9->hwmon_dev = FUNC_4(&VAR_7->dev);
 if (FUNC_0(VAR_9->hwmon_dev)) {
  VAR_10 = FUNC_1(VAR_9->hwmon_dev);
  goto exit_sysfs_remove;
 }

 return 0;

exit_sysfs_remove:
 FUNC_9(&VAR_7->dev.kobj, &VAR_6);
 FUNC_9(&VAR_7->dev.kobj, &VAR_5);
 return VAR_10;
}
