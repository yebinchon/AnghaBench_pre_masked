
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct adm9240_data {int update_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int VAR_2 ;
 int FUNC_1 (struct i2c_client*) ;
 struct device* FUNC_2 (struct device*,int ,struct adm9240_data*,int ) ;
 struct adm9240_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct i2c_client*,struct adm9240_data*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_3,
    const struct i2c_device_id *VAR_4)
{
 struct device *VAR_5 = &VAR_3->dev;
 struct device *VAR_6;
 struct adm9240_data *VAR_7;

 VAR_7 = FUNC_3(VAR_5, sizeof(*VAR_7), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 FUNC_4(VAR_3, VAR_7);
 VAR_7->client = VAR_3;
 FUNC_5(&VAR_7->update_lock);

 FUNC_1(VAR_3);

 VAR_6 = FUNC_2(VAR_5,
          VAR_3->name,
          VAR_7,
          VAR_2);
 return FUNC_0(VAR_6);
}
