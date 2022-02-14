
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm95234_data {int ** groups; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,int ,struct lm95234_data*,int **) ;
 struct lm95234_data* FUNC_2 (struct device*,int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct lm95234_data *VAR_8;
 struct device *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_2(VAR_7, sizeof(struct lm95234_data), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->client = VAR_5;
 FUNC_4(&VAR_8->update_lock);


 VAR_10 = FUNC_3(VAR_5);
 if (VAR_10 < 0)
  return VAR_10;

 VAR_8->groups[0] = &VAR_3;
 if (VAR_6->driver_data == VAR_2)
  VAR_8->groups[1] = &VAR_4;

 VAR_9 = FUNC_1(VAR_7, VAR_5->name,
          VAR_8, VAR_8->groups);
 return FUNC_0(VAR_9);
}
