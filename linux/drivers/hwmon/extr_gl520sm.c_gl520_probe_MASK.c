
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct gl520_data {int ** groups; scalar_t__ two_temps; struct i2c_client* client; int update_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,int ,struct gl520_data*,int **) ;
 struct gl520_data* FUNC_2 (struct device*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,struct gl520_data*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_5,
         const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct device *VAR_8;
 struct gl520_data *VAR_9;

 VAR_9 = FUNC_2(VAR_7, sizeof(struct gl520_data), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 FUNC_4(VAR_5, VAR_9);
 FUNC_5(&VAR_9->update_lock);
 VAR_9->client = VAR_5;


 FUNC_3(VAR_5);


 VAR_9->groups[0] = &VAR_2;

 if (VAR_9->two_temps)
  VAR_9->groups[1] = &VAR_4;
 else
  VAR_9->groups[1] = &VAR_3;

 VAR_8 = FUNC_1(VAR_7, VAR_5->name,
          VAR_9, VAR_9->groups);
 return FUNC_0(VAR_8);
}
