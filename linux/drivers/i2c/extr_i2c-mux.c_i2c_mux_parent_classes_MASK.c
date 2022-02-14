
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_adapter {unsigned int class; } ;


 struct i2c_adapter* FUNC_0 (struct i2c_adapter*) ;

__attribute__((used)) static unsigned int FUNC_1(struct i2c_adapter *VAR_0)
{
 unsigned int VAR_1 = 0;

 do {
  VAR_1 |= VAR_0->class;
  VAR_0 = FUNC_0(VAR_0);
 } while (VAR_0);

 return VAR_1;
}
