
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct adc128_data {scalar_t__ regulator; } ;


 struct adc128_data* FUNC_0 (struct i2c_client*) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct i2c_client *VAR_0)
{
 struct adc128_data *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->regulator)
  FUNC_1(VAR_1->regulator);

 return 0;
}
