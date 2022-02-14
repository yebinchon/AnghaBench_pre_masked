
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tc654_data {int config; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; int adapter; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 int VAR_4 ;
 struct device* FUNC_1 (struct device*,int ,struct tc654_data*,int ) ;
 struct tc654_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 int FUNC_5 (int *) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_6,
         const struct i2c_device_id *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct tc654_data *VAR_9;
 struct device *VAR_10;
 int VAR_11;

 if (!FUNC_3(VAR_6->adapter, VAR_3))
  return -VAR_0;

 VAR_9 = FUNC_2(VAR_8, sizeof(struct tc654_data), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 VAR_9->client = VAR_6;
 FUNC_5(&VAR_9->update_lock);

 VAR_11 = FUNC_4(VAR_6, VAR_4);
 if (VAR_11 < 0)
  return VAR_11;

 VAR_9->config = VAR_11;

 VAR_10 =
     FUNC_1(VAR_8, VAR_6->name, VAR_9,
         VAR_5);
 return FUNC_0(VAR_10);
}
