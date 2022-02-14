
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct octeon_i2c {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 struct octeon_i2c* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct octeon_i2c*,int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_adapter *VAR_1, int VAR_2)
{
 struct octeon_i2c *VAR_3 = FUNC_0(VAR_1);

 FUNC_1(VAR_3, VAR_2 ? 0 : VAR_0);
}
