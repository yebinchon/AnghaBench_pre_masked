
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct octeon_i2c {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 struct octeon_i2c* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct octeon_i2c*) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_1)
{
 struct octeon_i2c *VAR_2 = FUNC_0(VAR_1);
 u64 VAR_3;

 VAR_3 = FUNC_1(VAR_2);
 return VAR_3 & VAR_0;
}
