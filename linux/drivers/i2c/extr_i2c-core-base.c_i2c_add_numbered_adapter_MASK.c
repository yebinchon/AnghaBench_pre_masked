
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int nr; } ;


 int FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct i2c_adapter*) ;

int FUNC_2(struct i2c_adapter *VAR_0)
{
 if (VAR_0->nr == -1)
  return FUNC_1(VAR_0);

 return FUNC_0(VAR_0);
}
