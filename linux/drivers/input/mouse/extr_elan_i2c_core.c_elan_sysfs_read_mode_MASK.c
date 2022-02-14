
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i2c_client {int dummy; } ;
struct elan_tp_data {int sysfs_mutex; int client; TYPE_1__* ops; } ;
struct device_attribute {int dummy; } ;
struct device {int dummy; } ;
typedef int ssize_t ;
typedef enum tp_mode { ____Placeholder_tp_mode } tp_mode ;
struct TYPE_2__ {int (* iap_get_mode ) (int ,int*) ;} ;


 struct elan_tp_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (int ,int*) ;
 struct i2c_client* FUNC_5 (struct device*) ;

__attribute__((used)) static ssize_t FUNC_6(struct device *VAR_0,
        struct device_attribute *VAR_1,
        char *VAR_2)
{
 struct i2c_client *VAR_3 = FUNC_5(VAR_0);
 struct elan_tp_data *VAR_4 = FUNC_0(VAR_3);
 int VAR_5;
 enum tp_mode VAR_6;

 VAR_5 = FUNC_1(&VAR_4->sysfs_mutex);
 if (VAR_5)
  return VAR_5;

 VAR_5 = VAR_4->ops->iap_get_mode(VAR_4->client, &VAR_6);

 FUNC_2(&VAR_4->sysfs_mutex);

 if (VAR_5)
  return VAR_5;

 return FUNC_3(VAR_2, "%d\n", (int)VAR_6);
}
