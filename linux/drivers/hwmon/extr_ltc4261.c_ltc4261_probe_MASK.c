
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ltc4261_data {int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; struct i2c_adapter* adapter; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*) ;
 int FUNC_1 (struct device*,char*) ;
 struct device* FUNC_2 (struct device*,int ,struct ltc4261_data*,int ) ;
 struct ltc4261_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct i2c_adapter*,int ) ;
 scalar_t__ FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (struct i2c_client*,int ,int) ;
 int VAR_6 ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct i2c_client *VAR_7,
    const struct i2c_device_id *VAR_8)
{
 struct i2c_adapter *VAR_9 = VAR_7->adapter;
 struct device *VAR_10 = &VAR_7->dev;
 struct ltc4261_data *VAR_11;
 struct device *VAR_12;

 if (!FUNC_4(VAR_9, VAR_3))
  return -VAR_0;

 if (FUNC_5(VAR_7, VAR_5) < 0) {
  FUNC_1(VAR_10, "Failed to read status register\n");
  return -VAR_0;
 }

 VAR_11 = FUNC_3(VAR_10, sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->client = VAR_7;
 FUNC_7(&VAR_11->update_lock);


 FUNC_6(VAR_7, VAR_4, 0x00);

 VAR_12 = FUNC_2(VAR_10, VAR_7->name,
          VAR_11,
          VAR_6);
 return FUNC_0(VAR_12);
}
