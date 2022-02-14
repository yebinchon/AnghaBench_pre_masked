
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max1668_data {scalar_t__ type; int ** groups; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,int ,struct max1668_data*,int **) ;
 struct max1668_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct i2c_adapter*,int ) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct i2c_adapter *VAR_10 = VAR_8->adapter;
 struct device *VAR_11 = &VAR_8->dev;
 struct device *VAR_12;
 struct max1668_data *VAR_13;

 if (!FUNC_3(VAR_10, VAR_3))
  return -VAR_0;

 VAR_13 = FUNC_2(VAR_11, sizeof(struct max1668_data), VAR_2);
 if (!VAR_13)
  return -VAR_1;

 VAR_13->client = VAR_8;
 VAR_13->type = VAR_9->driver_data;
 FUNC_4(&VAR_13->update_lock);


 VAR_13->groups[0] = &VAR_5;
 if (VAR_13->type == VAR_4 || VAR_13->type == VAR_7)
  VAR_13->groups[1] = &VAR_6;

 VAR_12 = FUNC_1(VAR_11, VAR_8->name,
          VAR_13, VAR_13->groups);
 return FUNC_0(VAR_12);
}
