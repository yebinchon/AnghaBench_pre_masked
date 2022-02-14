
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_msg {int dummy; } ;
struct i2c_adapter {struct dc_i2c* algo_data; } ;
struct dc_i2c {int dummy; } ;


 int FUNC_0 (struct dc_i2c*,struct i2c_msg*,int,int) ;

__attribute__((used)) static int FUNC_1(struct i2c_adapter *VAR_0, struct i2c_msg *VAR_1, int VAR_2)
{
 struct dc_i2c *VAR_3 = VAR_0->algo_data;
 int VAR_4, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_5 = FUNC_0(VAR_3, &VAR_1[VAR_4], VAR_4 == 0, VAR_4 == VAR_2 - 1);
  if (VAR_5)
   return VAR_5;
 }

 return VAR_2;
}
