
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct adm1026_data {int config1; int ** groups; int vrm; int update_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct i2c_client*) ;
 struct device* FUNC_2 (struct device*,int ,struct adm1026_data*,int **) ;
 struct adm1026_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct i2c_client*,struct adm1026_data*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 struct device *VAR_8 = &VAR_6->dev;
 struct device *VAR_9;
 struct adm1026_data *VAR_10;

 VAR_10 = FUNC_3(VAR_8, sizeof(struct adm1026_data), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 FUNC_4(VAR_6, VAR_10);
 VAR_10->client = VAR_6;
 FUNC_5(&VAR_10->update_lock);


 VAR_10->vrm = FUNC_6();


 FUNC_1(VAR_6);


 VAR_10->groups[0] = &VAR_3;
 if (VAR_10->config1 & VAR_0)
  VAR_10->groups[1] = &VAR_4;
 else
  VAR_10->groups[1] = &VAR_5;

 VAR_9 = FUNC_2(VAR_8, VAR_6->name,
          VAR_10, VAR_10->groups);
 return FUNC_0(VAR_9);
}
