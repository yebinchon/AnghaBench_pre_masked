
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int adapter; struct device dev; } ;
struct g760a_data {int clk; int fan_div; int update_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,int ,struct g760a_data*,int ) ;
 struct g760a_data* FUNC_2 (struct device*,int,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_7,
   const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;
 struct g760a_data *VAR_10;
 struct device *VAR_11;

 if (!FUNC_3(VAR_7->adapter, VAR_5))
  return -VAR_0;

 VAR_10 = FUNC_2(VAR_9, sizeof(struct g760a_data), VAR_4);
 if (!VAR_10)
  return -VAR_1;

 VAR_10->client = VAR_7;
 FUNC_4(&VAR_10->update_lock);


 VAR_10->fan_div = VAR_3;
 VAR_10->clk = VAR_2;

 VAR_11 = FUNC_1(VAR_9, VAR_7->name,
          VAR_10,
          VAR_6);
 return FUNC_0(VAR_11);
}
