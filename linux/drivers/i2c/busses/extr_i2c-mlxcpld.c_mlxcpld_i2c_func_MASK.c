
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlxcpld_i2c_priv {scalar_t__ smbus_block; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mlxcpld_i2c_priv* FUNC_0 (struct i2c_adapter*) ;

__attribute__((used)) static u32 FUNC_1(struct i2c_adapter *VAR_4)
{
 struct mlxcpld_i2c_priv *VAR_5 = FUNC_0(VAR_4);

 if (VAR_5->smbus_block)
  return VAR_0 | VAR_2 |
   VAR_3 | VAR_1;
 else
  return VAR_0 | VAR_2 |
   VAR_3;
}
