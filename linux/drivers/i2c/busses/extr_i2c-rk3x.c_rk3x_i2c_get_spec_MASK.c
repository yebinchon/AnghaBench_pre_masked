
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_spec_values {int dummy; } ;


 struct i2c_spec_values const VAR_0 ;
 struct i2c_spec_values const VAR_1 ;
 struct i2c_spec_values const VAR_2 ;

__attribute__((used)) static const struct i2c_spec_values *FUNC_0(unsigned int VAR_3)
{
 if (VAR_3 <= 100000)
  return &VAR_2;
 else if (VAR_3 <= 400000)
  return &VAR_1;
 else
  return &VAR_0;
}
