
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct thmc50_data {int ** groups; scalar_t__ has_temp3; int update_lock; int type; struct i2c_client* client; } ;
struct i2c_device_id {int driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,int ,struct thmc50_data*,int **) ;
 struct thmc50_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct thmc50_data*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_4,
   const struct i2c_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct thmc50_data *VAR_7;
 struct device *VAR_8;
 int VAR_9 = 0;

 VAR_7 = FUNC_2(VAR_6, sizeof(struct thmc50_data), VAR_1);
 if (!VAR_7)
  return -VAR_0;

 VAR_7->client = VAR_4;
 VAR_7->type = VAR_5->driver_data;
 FUNC_3(&VAR_7->update_lock);

 FUNC_4(VAR_7);


 VAR_7->groups[VAR_9++] = &VAR_3;


 if (VAR_7->has_temp3)
  VAR_7->groups[VAR_9++] = &VAR_2;

 VAR_8 = FUNC_1(VAR_6, VAR_4->name,
          VAR_7, VAR_7->groups);
 return FUNC_0(VAR_8);
}
