
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_device_id {int dummy; } ;
struct i2c_client {int adapter; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct i2c_client*,int ) ;
 int VAR_5 ;
 int FUNC_2 (struct i2c_client*,struct i2c_device_id const*,int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_6,
    const struct i2c_device_id *VAR_7)
{
 int VAR_8;

 if (!FUNC_0(VAR_6->adapter,
         VAR_1))
  return -VAR_0;

 VAR_8 = FUNC_1(VAR_6, VAR_4);
 if (VAR_8 < 0)
  return VAR_8;
 if ((VAR_8 & VAR_3) != VAR_2)
  return -VAR_0;

 return FUNC_2(VAR_6, VAR_7, &VAR_5);
}
