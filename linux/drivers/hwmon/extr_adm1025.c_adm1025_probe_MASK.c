
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct adm1025_data {int ** groups; int update_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct i2c_client*) ;
 struct device* FUNC_2 (struct device*,int ,struct adm1025_data*,int **) ;
 struct adm1025_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct i2c_client*,struct adm1025_data*) ;
 int FUNC_5 (struct i2c_client*,int ) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_5,
    const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct device *VAR_8;
 struct adm1025_data *VAR_9;
 u8 VAR_10;

 VAR_9 = FUNC_3(VAR_7, sizeof(struct adm1025_data), VAR_2);
 if (!VAR_9)
  return -VAR_1;

 FUNC_4(VAR_5, VAR_9);
 VAR_9->client = VAR_5;
 FUNC_6(&VAR_9->update_lock);


 FUNC_1(VAR_5);


 VAR_9->groups[0] = &VAR_3;

 VAR_10 = FUNC_5(VAR_5, VAR_0);
 if (!(VAR_10 & 0x20))
  VAR_9->groups[1] = &VAR_4;

 VAR_8 = FUNC_2(VAR_7, VAR_5->name,
          VAR_9, VAR_9->groups);
 return FUNC_0(VAR_8);
}
