
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct of_device_id {int dummy; } ;
struct i2c_client {int dev; } ;


 struct of_device_id const* FUNC_0 (struct of_device_id const*,struct i2c_client*) ;
 struct of_device_id* FUNC_1 (struct of_device_id const*,int *) ;

const struct of_device_id
*FUNC_2(const struct of_device_id *VAR_0,
       struct i2c_client *VAR_1)
{
 const struct of_device_id *VAR_2;

 if (!(VAR_1 && VAR_0))
  return ((void*)0);

 VAR_2 = FUNC_1(VAR_0, &VAR_1->dev);
 if (VAR_2)
  return VAR_2;

 return FUNC_0(VAR_0, VAR_1);
}
