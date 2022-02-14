
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct device {int dummy; } ;
struct i2c_client {int name; struct device dev; } ;
struct adm1029_data {int update_lock; struct i2c_client* client; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct device*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct i2c_client*) ;
 struct device* FUNC_2 (struct device*,int ,struct adm1029_data*,int ) ;
 struct adm1029_data* FUNC_3 (struct device*,int,int ) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_4,
    const struct i2c_device_id *VAR_5)
{
 struct device *VAR_6 = &VAR_4->dev;
 struct adm1029_data *VAR_7;
 struct device *VAR_8;

 VAR_7 = FUNC_3(VAR_6, sizeof(struct adm1029_data), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->client = VAR_4;
 FUNC_4(&VAR_7->update_lock);





 if (FUNC_1(VAR_4) == 0)
  return -VAR_0;

 VAR_8 = FUNC_2(VAR_6, VAR_4->name,
          VAR_7,
          VAR_3);
 return FUNC_0(VAR_8);
}
