
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_client*,int ,size_t,int *) ;
 struct i2c_client* FUNC_1 (struct device*) ;

__attribute__((used)) static int FUNC_2(void *VAR_1, const void *VAR_2,
          size_t VAR_3)
{
 struct device *VAR_4 = VAR_1;
 struct i2c_client *VAR_5 = FUNC_1(VAR_4);

 if (VAR_3 < 1)
  return -VAR_0;

 --VAR_3;
 return FUNC_0(VAR_5, ((u8 *)VAR_2)[0], VAR_3,
           ((u8 *)VAR_2 + 1));
}
