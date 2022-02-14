
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ina209_data {int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int name; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*) ;
 struct device* FUNC_2 (int *,int ,struct ina209_data*,int ) ;
 struct ina209_data* FUNC_3 (int *,int,int ) ;
 int FUNC_4 (struct i2c_adapter*,int ) ;
 int FUNC_5 (struct i2c_client*,struct ina209_data*) ;
 int VAR_4 ;
 int FUNC_6 (struct i2c_client*,struct ina209_data*) ;
 int FUNC_7 (struct i2c_client*,struct ina209_data*) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static int FUNC_9(struct i2c_client *VAR_5,
   const struct i2c_device_id *VAR_6)
{
 struct i2c_adapter *VAR_7 = VAR_5->adapter;
 struct ina209_data *VAR_8;
 struct device *VAR_9;
 int VAR_10;

 if (!FUNC_4(VAR_7, VAR_3))
  return -VAR_0;

 VAR_8 = FUNC_3(&VAR_5->dev, sizeof(*VAR_8), VAR_2);
 if (!VAR_8)
  return -VAR_1;

 FUNC_5(VAR_5, VAR_8);
 VAR_8->client = VAR_5;
 FUNC_8(&VAR_8->update_lock);

 VAR_10 = FUNC_6(VAR_5, VAR_8);
 if (VAR_10)
  return VAR_10;

 VAR_9 = FUNC_2(&VAR_5->dev,
          VAR_5->name,
          VAR_8, VAR_4);
 if (FUNC_0(VAR_9)) {
  VAR_10 = FUNC_1(VAR_9);
  goto out_restore_conf;
 }

 return 0;

out_restore_conf:
 FUNC_7(VAR_5, VAR_8);
 return VAR_10;
}
