
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct elan_tp_data {int min_baseline; int sysfs_mutex; int baseline_ready; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 struct elan_tp_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int ,char*,int) ;
 struct i2c_client* FUNC_4 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_5(struct device *VAR_2,
   struct device_attribute *VAR_3, char *VAR_4)
{
 struct i2c_client *VAR_5 = FUNC_4(VAR_2);
 struct elan_tp_data *VAR_6 = FUNC_0(VAR_5);
 int VAR_7;

 VAR_7 = FUNC_1(&VAR_6->sysfs_mutex);
 if (VAR_7)
  return VAR_7;

 if (!VAR_6->baseline_ready) {
  VAR_7 = -VAR_0;
  goto out;
 }

 VAR_7 = FUNC_3(VAR_4, VAR_1, "%d", VAR_6->min_baseline);

out:
 FUNC_2(&VAR_6->sysfs_mutex);
 return VAR_7;
}
