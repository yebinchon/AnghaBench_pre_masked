
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct pmbus_platform_data {int flags; } ;
struct pmbus_driver_info {scalar_t__* groups; } ;
struct TYPE_4__ {int attrs; } ;
struct pmbus_data {TYPE_1__ group; int hwmon_dev; TYPE_1__** groups; int num_attributes; struct pmbus_driver_info* info; int flags; struct device* dev; int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int adapter; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct device*,char*) ;
 struct pmbus_platform_data* FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*,char*) ;
 TYPE_1__** FUNC_5 (struct device*,size_t,int,int ) ;
 struct pmbus_data* FUNC_6 (struct device*,int,int ) ;
 int FUNC_7 (struct device*,int ,struct pmbus_data*,TYPE_1__**) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,int) ;
 int FUNC_10 (struct i2c_client*,struct pmbus_data*) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__**,scalar_t__*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct i2c_client*,struct pmbus_data*) ;
 int FUNC_15 (struct i2c_client*,struct pmbus_data*,struct pmbus_driver_info*) ;
 int FUNC_16 (struct i2c_client*,struct pmbus_data*) ;
 int FUNC_17 (struct pmbus_data*) ;

int FUNC_18(struct i2c_client *VAR_6, const struct i2c_device_id *VAR_7,
     struct pmbus_driver_info *VAR_8)
{
 struct device *VAR_9 = &VAR_6->dev;
 const struct pmbus_platform_data *VAR_10 = FUNC_3(VAR_9);
 struct pmbus_data *VAR_11;
 size_t VAR_12 = 0;
 int VAR_13;

 if (!VAR_8)
  return -VAR_0;

 if (!FUNC_9(VAR_6->adapter, VAR_5
         | VAR_3
         | VAR_4))
  return -VAR_0;

 VAR_11 = FUNC_6(VAR_9, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 if (VAR_8->groups)
  while (VAR_8->groups[VAR_12])
   VAR_12++;

 VAR_11->groups = FUNC_5(VAR_9, VAR_12 + 2, sizeof(void *),
        VAR_2);
 if (!VAR_11->groups)
  return -VAR_1;

 FUNC_10(VAR_6, VAR_11);
 FUNC_13(&VAR_11->update_lock);
 VAR_11->dev = VAR_9;

 if (VAR_10)
  VAR_11->flags = VAR_10->flags;
 VAR_11->info = VAR_8;

 VAR_13 = FUNC_15(VAR_6, VAR_11, VAR_8);
 if (VAR_13 < 0)
  return VAR_13;

 VAR_13 = FUNC_14(VAR_6, VAR_11);
 if (VAR_13)
  goto out_kfree;





 if (!VAR_11->num_attributes) {
  FUNC_2(VAR_9, "No attributes found\n");
  VAR_13 = -VAR_0;
  goto out_kfree;
 }

 VAR_11->groups[0] = &VAR_11->group;
 FUNC_12(VAR_11->groups + 1, VAR_8->groups, sizeof(void *) * VAR_12);
 VAR_11->hwmon_dev = FUNC_7(VAR_9, VAR_6->name,
           VAR_11, VAR_11->groups);
 if (FUNC_0(VAR_11->hwmon_dev)) {
  VAR_13 = FUNC_1(VAR_11->hwmon_dev);
  FUNC_2(VAR_9, "Failed to register hwmon device\n");
  goto out_kfree;
 }

 VAR_13 = FUNC_17(VAR_11);
 if (VAR_13)
  goto out_unregister;

 VAR_13 = FUNC_16(VAR_6, VAR_11);
 if (VAR_13)
  FUNC_4(VAR_9, "Failed to register debugfs\n");

 return 0;

out_unregister:
 FUNC_8(VAR_11->hwmon_dev);
out_kfree:
 FUNC_11(VAR_11->group.attrs);
 return VAR_13;
}
