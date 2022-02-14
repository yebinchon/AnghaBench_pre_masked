
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {scalar_t__ driver_data; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct adm1031_data {scalar_t__ chip_type; int ** groups; int * chan_select_table; int update_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct i2c_client*) ;
 int VAR_6 ;
 int VAR_7 ;
 struct device* FUNC_2 (struct device*,int ,struct adm1031_data*,int **) ;
 struct adm1031_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct i2c_client*,struct adm1031_data*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_8,
    const struct i2c_device_id *VAR_9)
{
 struct device *VAR_10 = &VAR_8->dev;
 struct device *VAR_11;
 struct adm1031_data *VAR_12;

 VAR_12 = FUNC_3(VAR_10, sizeof(struct adm1031_data), VAR_1);
 if (!VAR_12)
  return -VAR_0;

 FUNC_4(VAR_8, VAR_12);
 VAR_12->client = VAR_8;
 VAR_12->chip_type = VAR_9->driver_data;
 FUNC_5(&VAR_12->update_lock);

 if (VAR_12->chip_type == VAR_2)
  VAR_12->chan_select_table = &VAR_6;
 else
  VAR_12->chan_select_table = &VAR_7;


 FUNC_1(VAR_8);


 VAR_12->groups[0] = &VAR_4;
 if (VAR_12->chip_type == VAR_3)
  VAR_12->groups[1] = &VAR_5;

 VAR_11 = FUNC_2(VAR_10, VAR_8->name,
          VAR_12, VAR_12->groups);
 return FUNC_0(VAR_11);
}
