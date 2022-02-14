
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm92_data {int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int name; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (int *,int ,struct lm92_data*,int ) ;
 struct lm92_data* FUNC_2 (int *,int,int ) ;
 int VAR_2 ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_3,
        const struct i2c_device_id *VAR_4)
{
 struct device *VAR_5;
 struct lm92_data *VAR_6;

 VAR_6 = FUNC_2(&VAR_3->dev, sizeof(struct lm92_data),
       VAR_1);
 if (!VAR_6)
  return -VAR_0;

 VAR_6->client = VAR_3;
 FUNC_4(&VAR_6->update_lock);


 FUNC_3(VAR_3);

 VAR_5 = FUNC_1(&VAR_3->dev,
          VAR_3->name,
          VAR_6, VAR_2);
 return FUNC_0(VAR_5);
}
