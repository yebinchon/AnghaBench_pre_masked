
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct powr1220_data {struct i2c_client* client; int update_lock; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int name; int dev; int adapter; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (int *,int ,struct powr1220_data*,int ) ;
 struct powr1220_data* FUNC_2 (int *,int,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_5,
  const struct i2c_device_id *VAR_6)
{
 struct powr1220_data *VAR_7;
 struct device *VAR_8;

 if (!FUNC_3(VAR_5->adapter, VAR_3))
  return -VAR_0;

 VAR_7 = FUNC_2(&VAR_5->dev, sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 FUNC_4(&VAR_7->update_lock);
 VAR_7->client = VAR_5;

 VAR_8 = FUNC_1(&VAR_5->dev,
   VAR_5->name, VAR_7, VAR_4);

 return FUNC_0(VAR_8);
}
