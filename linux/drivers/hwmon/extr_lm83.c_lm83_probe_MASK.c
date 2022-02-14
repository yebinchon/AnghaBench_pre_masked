
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm83_data {int ** groups; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {scalar_t__ driver_data; } ;
struct i2c_client {int name; int dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (int *,int ,struct lm83_data*,int **) ;
 struct lm83_data* FUNC_2 (int *,int,int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_5,
        const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7;
 struct lm83_data *VAR_8;

 VAR_8 = FUNC_2(&VAR_5->dev, sizeof(struct lm83_data),
       VAR_1);
 if (!VAR_8)
  return -VAR_0;

 VAR_8->client = VAR_5;
 FUNC_3(&VAR_8->update_lock);







 VAR_8->groups[0] = &VAR_3;
 if (VAR_6->driver_data == VAR_2)
  VAR_8->groups[1] = &VAR_4;

 VAR_7 = FUNC_1(&VAR_5->dev,
          VAR_5->name,
          VAR_8, VAR_8->groups);
 return FUNC_0(VAR_7);
}
