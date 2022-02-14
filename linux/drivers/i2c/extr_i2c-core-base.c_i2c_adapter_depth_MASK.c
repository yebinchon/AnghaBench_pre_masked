
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {int dummy; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct i2c_adapter* FUNC_1 (struct i2c_adapter*) ;

unsigned int FUNC_2(struct i2c_adapter *VAR_1)
{
 unsigned int VAR_2 = 0;

 while ((VAR_1 = FUNC_1(VAR_1)))
  VAR_2++;

 FUNC_0(VAR_2 >= VAR_0,
    "adapter depth exceeds lockdep subclass limit\n");

 return VAR_2;
}
