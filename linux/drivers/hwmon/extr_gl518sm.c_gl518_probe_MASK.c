
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct gl518_data {scalar_t__ type; int alarm_mask; int ** groups; int update_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,int ,struct gl518_data*,int **) ;
 struct gl518_data* FUNC_2 (struct device*,int,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct i2c_client*) ;
 int FUNC_4 (struct i2c_client*,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_7,
         const struct i2c_device_id *VAR_8)
{
 struct device *VAR_9 = &VAR_7->dev;
 struct device *VAR_10;
 struct gl518_data *VAR_11;
 int VAR_12;

 VAR_11 = FUNC_2(VAR_9, sizeof(struct gl518_data), VAR_1);
 if (!VAR_11)
  return -VAR_0;

 VAR_11->client = VAR_7;
 VAR_12 = FUNC_4(VAR_7, VAR_2);
 VAR_11->type = VAR_12 == 0x80 ? VAR_6 : VAR_5;
 FUNC_5(&VAR_11->update_lock);


 VAR_11->alarm_mask = 0xff;
 FUNC_3(VAR_7);


 VAR_11->groups[0] = &VAR_3;
 if (VAR_11->type == VAR_6)
  VAR_11->groups[1] = &VAR_4;

 VAR_10 = FUNC_1(VAR_9, VAR_7->name,
          VAR_11, VAR_11->groups);
 return FUNC_0(VAR_10);
}
