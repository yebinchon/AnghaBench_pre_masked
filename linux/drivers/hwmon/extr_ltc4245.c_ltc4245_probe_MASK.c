
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc4245_data {int use_extra_gpios; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int name; int dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (int *,int ,struct ltc4245_data*,int *,int *) ;
 struct ltc4245_data* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (struct i2c_adapter*,int ) ;
 int FUNC_4 (struct i2c_client*,int ,int) ;
 int VAR_6 ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_7->adapter;
 struct ltc4245_data *VAR_10;
 struct device *VAR_11;

 if (!FUNC_3(VAR_9, VAR_3))
  return -VAR_0;

 VAR_10 = FUNC_2(&VAR_7->dev, sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->client = VAR_7;
 FUNC_6(&VAR_10->update_lock);
 VAR_10->use_extra_gpios = FUNC_5(VAR_7);


 FUNC_4(VAR_7, VAR_4, 0x00);
 FUNC_4(VAR_7, VAR_5, 0x00);

 VAR_11 = FUNC_1(&VAR_7->dev,
        VAR_7->name, VAR_10,
        &VAR_6,
        ((void*)0));
 return FUNC_0(VAR_11);
}
