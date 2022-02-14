
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6697_data {int type; int update_lock; struct i2c_client* client; int * chip; } ;
struct i2c_device_id {int driver_data; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {int name; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
typedef enum chips { ____Placeholder_chips } chips ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,int ,struct max6697_data*,int ) ;
 struct max6697_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct i2c_adapter*,int ) ;
 int * VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct max6697_data*,struct i2c_client*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct device*) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 struct device *VAR_9 = &VAR_6->dev;
 struct max6697_data *VAR_10;
 struct device *VAR_11;
 int VAR_12;

 if (!FUNC_3(VAR_8, VAR_3))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_9, sizeof(struct max6697_data), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 if (VAR_6->dev.of_node)
  VAR_10->type = (enum chips)FUNC_6(&VAR_6->dev);
 else
  VAR_10->type = VAR_7->driver_data;
 VAR_10->chip = &VAR_4[VAR_10->type];
 VAR_10->client = VAR_6;
 FUNC_5(&VAR_10->update_lock);

 VAR_12 = FUNC_4(VAR_10, VAR_6);
 if (VAR_12)
  return VAR_12;

 VAR_11 = FUNC_1(VAR_9, VAR_6->name,
          VAR_10,
          VAR_5);
 return FUNC_0(VAR_11);
}
