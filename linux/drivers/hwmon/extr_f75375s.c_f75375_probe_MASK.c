
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct i2c_device_id {scalar_t__ driver_data; } ;
struct TYPE_12__ {int kobj; } ;
struct i2c_client {TYPE_5__ dev; int adapter; } ;
struct f75375s_platform_data {int dummy; } ;
struct f75375_data {scalar_t__ kind; int hwmon_dev; int update_lock; } ;
struct TYPE_8__ {int attr; } ;
struct TYPE_11__ {TYPE_1__ dev_attr; } ;
struct TYPE_9__ {int attr; } ;
struct TYPE_10__ {TYPE_2__ dev_attr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 struct f75375s_platform_data* FUNC_2 (TYPE_5__*) ;
 struct f75375_data* FUNC_3 (TYPE_5__*,int,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (struct i2c_client*,struct f75375_data*,struct f75375s_platform_data*) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct i2c_client*,struct f75375_data*) ;
 int FUNC_8 (int *) ;
 TYPE_4__ VAR_8 ;
 TYPE_3__ VAR_9 ;
 int FUNC_9 (int *,int *,int) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int *) ;

__attribute__((used)) static int FUNC_12(struct i2c_client *VAR_10,
  const struct i2c_device_id *VAR_11)
{
 struct f75375_data *VAR_12;
 struct f75375s_platform_data *VAR_13 =
   FUNC_2(&VAR_10->dev);
 int VAR_14;

 if (!FUNC_6(VAR_10->adapter,
    VAR_3))
  return -VAR_0;
 VAR_12 = FUNC_3(&VAR_10->dev, sizeof(struct f75375_data),
       VAR_2);
 if (!VAR_12)
  return -VAR_1;

 FUNC_7(VAR_10, VAR_12);
 FUNC_8(&VAR_12->update_lock);
 VAR_12->kind = VAR_11->driver_data;

 VAR_14 = FUNC_10(&VAR_10->dev.kobj, &VAR_7);
 if (VAR_14)
  return VAR_14;

 if (VAR_12->kind != VAR_6) {
  VAR_14 = FUNC_9(&VAR_10->dev.kobj,
   &VAR_8.dev_attr.attr,
   VAR_4 | VAR_5);
  if (VAR_14)
   goto exit_remove;
  VAR_14 = FUNC_9(&VAR_10->dev.kobj,
   &VAR_9.dev_attr.attr,
   VAR_4 | VAR_5);
  if (VAR_14)
   goto exit_remove;
 }

 VAR_12->hwmon_dev = FUNC_5(&VAR_10->dev);
 if (FUNC_0(VAR_12->hwmon_dev)) {
  VAR_14 = FUNC_1(VAR_12->hwmon_dev);
  goto exit_remove;
 }

 FUNC_4(VAR_10, VAR_12, VAR_13);

 return 0;

exit_remove:
 FUNC_11(&VAR_10->dev.kobj, &VAR_7);
 return VAR_14;
}
