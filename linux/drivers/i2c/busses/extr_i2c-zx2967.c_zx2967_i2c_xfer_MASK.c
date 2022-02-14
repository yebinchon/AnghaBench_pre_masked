
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zx2967_i2c {int dummy; } ;
struct i2c_msg {int addr; } ;
struct i2c_adapter {int dummy; } ;


 struct zx2967_i2c* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct zx2967_i2c*,struct i2c_msg*) ;
 int FUNC_2 (struct zx2967_i2c*,int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_0,
      struct i2c_msg *VAR_1, int VAR_2)
{
 struct zx2967_i2c *VAR_3 = FUNC_0(VAR_0);
 int VAR_4;
 int VAR_5;

 FUNC_2(VAR_3, VAR_1->addr);

 for (VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  VAR_4 = FUNC_1(VAR_3, &VAR_1[VAR_5]);
  if (VAR_4)
   return VAR_4;
 }

 return VAR_2;
}
