
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcar_i2c_priv {int recovery_icmcr; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rcar_i2c_priv* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (struct rcar_i2c_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct i2c_adapter *VAR_2, int VAR_3)
{
 struct rcar_i2c_priv *VAR_4 = FUNC_0(VAR_2);

 if (VAR_3)
  VAR_4->recovery_icmcr |= VAR_0;
 else
  VAR_4->recovery_icmcr &= ~VAR_0;

 FUNC_1(VAR_4, VAR_1, VAR_4->recovery_icmcr);
}
