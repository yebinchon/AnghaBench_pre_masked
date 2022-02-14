
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm80_data {int** fan; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct device*) ;
 struct device* FUNC_2 (struct device*,int ,struct lm80_data*,int ) ;
 struct lm80_data* FUNC_3 (struct device*,int,int ) ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct i2c_client*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_4,
        const struct i2c_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct device *VAR_7;
 struct lm80_data *VAR_8;
 int VAR_9;

 VAR_8 = FUNC_3(VAR_6, sizeof(struct lm80_data), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->client = VAR_4;
 FUNC_6(&VAR_8->update_lock);


 FUNC_4(VAR_4);


 VAR_9 = FUNC_5(VAR_4, FUNC_0(1));
 if (VAR_9 < 0)
  return VAR_9;
 VAR_8->fan[VAR_2][0] = VAR_9;
 VAR_9 = FUNC_5(VAR_4, FUNC_0(2));
 if (VAR_9 < 0)
  return VAR_9;
 VAR_8->fan[VAR_2][1] = VAR_9;

 VAR_7 = FUNC_2(VAR_6, VAR_4->name,
          VAR_8, VAR_3);

 return FUNC_1(VAR_7);
}
