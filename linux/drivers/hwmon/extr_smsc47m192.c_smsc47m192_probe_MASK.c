
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smsc47m192_data {int ** groups; int update_lock; int vrm; struct i2c_client* client; } ;
struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int VAR_2 ;
 struct device* FUNC_1 (struct device*,int ,struct smsc47m192_data*,int **) ;
 struct smsc47m192_data* FUNC_2 (struct device*,int,int ) ;
 int FUNC_3 (struct i2c_client*,int ) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct i2c_client*) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_5,
       const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct device *VAR_8;
 struct smsc47m192_data *VAR_9;
 int VAR_10;

 VAR_9 = FUNC_2(VAR_7, sizeof(struct smsc47m192_data), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->client = VAR_5;
 VAR_9->vrm = FUNC_6();
 FUNC_4(&VAR_9->update_lock);


 FUNC_5(VAR_5);


 VAR_9->groups[0] = &VAR_3;

 VAR_10 = FUNC_3(VAR_5, VAR_2);
 if (!(VAR_10 & 0x20))
  VAR_9->groups[1] = &VAR_4;

 VAR_8 = FUNC_1(VAR_7, VAR_5->name,
          VAR_9, VAR_9->groups);
 return FUNC_0(VAR_8);
}
