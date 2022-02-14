
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (struct i2c_client*,int) ;
 int FUNC_1 (struct i2c_client*,int) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0, u8 VAR_1)
{
 if ((VAR_1 >= 0x07) && (VAR_1 <= 0x0c))
  return FUNC_1(VAR_0, VAR_1);
 else
  return FUNC_0(VAR_0, VAR_1);
}
