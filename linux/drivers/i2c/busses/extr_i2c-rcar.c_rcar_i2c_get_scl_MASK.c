
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_i2c_priv {int dummy; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rcar_i2c_priv* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct rcar_i2c_priv*,int ) ;

__attribute__((used)) static int FUNC_2(struct i2c_adapter *VAR_2)
{
 struct rcar_i2c_priv *VAR_3 = FUNC_0(VAR_2);

 return !!(FUNC_1(VAR_3, VAR_1) & VAR_0);

}
