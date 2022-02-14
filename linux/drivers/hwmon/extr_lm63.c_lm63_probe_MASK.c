
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm63_data {int kind; int temp2_offset; int config; int ** groups; int update_lock; struct i2c_client* client; } ;
struct i2c_device_id {int driver_data; } ;
struct device {scalar_t__ of_node; } ;
struct i2c_client {int name; struct device dev; } ;
typedef enum chips { ____Placeholder_chips } chips ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 struct device* FUNC_1 (struct device*,int ,struct lm63_data*,int **) ;
 struct lm63_data* FUNC_2 (struct device*,int,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct lm63_data*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (struct device*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_8,
        const struct i2c_device_id *VAR_9)
{
 struct device *VAR_10 = &VAR_8->dev;
 struct device *VAR_11;
 struct lm63_data *VAR_12;
 int VAR_13 = 0;

 VAR_12 = FUNC_2(VAR_10, sizeof(struct lm63_data), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 VAR_12->client = VAR_8;
 FUNC_4(&VAR_12->update_lock);


 if (VAR_8->dev.of_node)
  VAR_12->kind = (enum chips)FUNC_5(&VAR_8->dev);
 else
  VAR_12->kind = VAR_9->driver_data;
 if (VAR_12->kind == VAR_6)
  VAR_12->temp2_offset = 16000;


 FUNC_3(VAR_12);


 VAR_12->groups[VAR_13++] = &VAR_2;
 if (VAR_12->config & 0x04)
  VAR_12->groups[VAR_13++] = &VAR_4;

 if (VAR_12->kind == VAR_7) {
  VAR_12->groups[VAR_13++] = &VAR_5;
  VAR_12->groups[VAR_13++] = &VAR_3;
 }

 VAR_11 = FUNC_1(VAR_10, VAR_8->name,
          VAR_12, VAR_12->groups);
 return FUNC_0(VAR_11);
}
