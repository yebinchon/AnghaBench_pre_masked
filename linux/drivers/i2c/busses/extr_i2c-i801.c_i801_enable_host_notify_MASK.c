
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i801_priv {int features; int original_slvcmd; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i801_priv*) ;
 int VAR_1 ;
 int FUNC_1 (struct i801_priv*) ;
 int VAR_2 ;
 struct i801_priv* FUNC_2 (struct i2c_adapter*) ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static void FUNC_4(struct i2c_adapter *VAR_3)
{
 struct i801_priv *VAR_4 = FUNC_2(VAR_3);

 if (!(VAR_4->features & VAR_0))
  return;

 if (!(VAR_1 & VAR_4->original_slvcmd))
  FUNC_3(VAR_1 | VAR_4->original_slvcmd,
         FUNC_0(VAR_4));


 FUNC_3(VAR_2, FUNC_1(VAR_4));
}
