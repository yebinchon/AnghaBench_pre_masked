
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uniphier_fi2c_priv {scalar_t__ busy_cnt; scalar_t__ membase; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct uniphier_fi2c_priv* FUNC_0 (struct i2c_adapter*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (struct uniphier_fi2c_priv*) ;

__attribute__((used)) static int FUNC_3(struct i2c_adapter *VAR_3)
{
 struct uniphier_fi2c_priv *VAR_4 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_4->membase + VAR_1) & VAR_2) {
  if (VAR_4->busy_cnt++ > 3) {




   FUNC_2(VAR_4);
   VAR_4->busy_cnt = 0;
  }

  return -VAR_0;
 }

 VAR_4->busy_cnt = 0;
 return 0;
}
