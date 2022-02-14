
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct i2c_client*,int ,size_t,void*) ;
 struct i2c_client* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_2, const void *VAR_3,
         size_t VAR_4, void *VAR_5,
         size_t VAR_6)
{
 struct device *VAR_7 = VAR_2;
 struct i2c_client *VAR_8 = FUNC_1(VAR_7);
 int VAR_9;

 if (VAR_4 != 1 || VAR_6 < 1)
  return -VAR_0;

 VAR_9 = FUNC_0(VAR_8, ((u8 *)VAR_3)[0], VAR_6, VAR_5);
 if (VAR_9 == VAR_6)
  return 0;
 else if (VAR_9 < 0)
  return VAR_9;
 else
  return -VAR_1;
}
