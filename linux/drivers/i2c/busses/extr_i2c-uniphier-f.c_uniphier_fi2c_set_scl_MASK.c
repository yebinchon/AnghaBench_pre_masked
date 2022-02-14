
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_fi2c_priv {scalar_t__ membase; } ;
struct i2c_adapter {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 struct uniphier_fi2c_priv* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct i2c_adapter *VAR_2, int VAR_3)
{
 struct uniphier_fi2c_priv *VAR_4 = FUNC_0(VAR_2);

 FUNC_1(VAR_3 ? VAR_1 : 0,
        VAR_4->membase + VAR_0);
}
