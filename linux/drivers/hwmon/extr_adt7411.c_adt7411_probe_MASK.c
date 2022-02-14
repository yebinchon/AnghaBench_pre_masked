
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct adt7411_data {int next_update; int update_lock; int device_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct device*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct adt7411_data*) ;
 struct device* FUNC_2 (struct device*,int ,struct adt7411_data*,int *,int ) ;
 struct adt7411_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (struct i2c_client*,struct adt7411_data*) ;
 int VAR_4 ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_5,
       const struct i2c_device_id *VAR_6)
{
 struct device *VAR_7 = &VAR_5->dev;
 struct adt7411_data *VAR_8;
 struct device *VAR_9;
 int VAR_10;

 VAR_8 = FUNC_3(VAR_7, sizeof(*VAR_8), VAR_1);
 if (!VAR_8)
  return -VAR_0;

 FUNC_4(VAR_5, VAR_8);
 VAR_8->client = VAR_5;
 FUNC_5(&VAR_8->device_lock);
 FUNC_5(&VAR_8->update_lock);

 VAR_10 = FUNC_1(VAR_8);
 if (VAR_10 < 0)
  return VAR_10;


 VAR_8->next_update = VAR_4;

 VAR_9 = FUNC_2(VAR_7, VAR_5->name,
        VAR_8,
        &VAR_2,
        VAR_3);
 return FUNC_0(VAR_9);
}
