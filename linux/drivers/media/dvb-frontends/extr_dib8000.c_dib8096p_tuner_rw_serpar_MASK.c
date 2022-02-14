
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int FUNC_0 (struct i2c_adapter*,struct i2c_msg*,int) ;
 int FUNC_1 (struct i2c_adapter*,struct i2c_msg*,int) ;
 scalar_t__ FUNC_2 (struct i2c_msg*) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_0,
  struct i2c_msg VAR_1[], int VAR_2)
{
 if (FUNC_2(&VAR_1[0]) == 0) {
  if (VAR_2 == 1)
   return FUNC_1(VAR_0, VAR_1, 1);
  else
   return FUNC_0(VAR_0, VAR_1, 2);
 }
 return VAR_2;
}
