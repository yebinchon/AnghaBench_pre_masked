
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc4215_data {int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,int ,struct ltc4215_data*,int ) ;
 struct ltc4215_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct i2c_adapter*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int VAR_5 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 struct i2c_adapter *VAR_8 = VAR_6->adapter;
 struct device *VAR_9 = &VAR_6->dev;
 struct ltc4215_data *VAR_10;
 struct device *VAR_11;

 if (!FUNC_3(VAR_8, VAR_3))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_9, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->client = VAR_6;
 FUNC_5(&VAR_10->update_lock);


 FUNC_4(VAR_6, VAR_4, 0x00);

 VAR_11 = FUNC_1(VAR_9, VAR_6->name,
          VAR_10,
          VAR_5);
 return FUNC_0(VAR_11);
}
