
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct elants_data {int sysfs_mutex; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct elants_data*) ;
 struct elants_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_0,
          struct device_attribute *VAR_1,
         const char *VAR_2, size_t VAR_3)
{
 struct i2c_client *VAR_4 = FUNC_4(VAR_0);
 struct elants_data *VAR_5 = FUNC_1(VAR_4);
 int VAR_6;

 VAR_6 = FUNC_2(&VAR_5->sysfs_mutex);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_5);

 FUNC_3(&VAR_5->sysfs_mutex);
 return VAR_6 ?: VAR_3;
}
