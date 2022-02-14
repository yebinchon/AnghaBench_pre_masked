
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pmbus_driver_info {int dummy; } ;
struct i2c_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct pmbus_driver_info* FUNC_0 (int *,int *,int,int ) ;
 int FUNC_1 (struct i2c_client*,struct i2c_device_id const*,struct pmbus_driver_info*) ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_3,
     const struct i2c_device_id *VAR_4)
{
 struct pmbus_driver_info *VAR_5;

 VAR_5 = FUNC_0(&VAR_3->dev, &VAR_2, sizeof(*VAR_5),
       VAR_1);
 if (!VAR_5)
  return -VAR_0;

 return FUNC_1(VAR_3, VAR_4, VAR_5);
}
