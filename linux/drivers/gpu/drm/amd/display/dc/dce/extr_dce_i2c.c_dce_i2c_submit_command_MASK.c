
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource_pool {int dummy; } ;
struct i2c_command {int dummy; } ;
struct ddc {int dummy; } ;
struct dce_i2c_sw {int dummy; } ;
struct dce_i2c_hw {int dummy; } ;


 int FUNC_0 () ;
 struct dce_i2c_hw* FUNC_1 (struct resource_pool*,struct ddc*) ;
 struct dce_i2c_sw* FUNC_2 (struct resource_pool*,struct ddc*) ;
 int FUNC_3 (struct resource_pool*,struct ddc*,struct i2c_command*,struct dce_i2c_hw*) ;
 int FUNC_4 (struct resource_pool*,struct ddc*,struct i2c_command*,struct dce_i2c_sw*) ;

bool FUNC_5(
 struct resource_pool *VAR_0,
 struct ddc *VAR_1,
 struct i2c_command *VAR_2)
{
 struct dce_i2c_hw *VAR_3;
 struct dce_i2c_sw *VAR_4;

 if (!VAR_1) {
  FUNC_0();
  return 0;
 }

 if (!VAR_2) {
  FUNC_0();
  return 0;
 }


 VAR_4 = FUNC_2(VAR_0, VAR_1);

 if (!VAR_4) {
  VAR_3 = FUNC_1(VAR_0, VAR_1);

  if (!VAR_3)
   return 0;

  return FUNC_3(VAR_0, VAR_1, VAR_2, VAR_3);
 }

 return FUNC_4(VAR_0, VAR_1, VAR_2, VAR_4);

}
