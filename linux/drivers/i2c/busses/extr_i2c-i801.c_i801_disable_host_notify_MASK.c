
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i801_priv {int features; int original_slvcmd; } ;


 int VAR_0 ;
 int FUNC_0 (struct i801_priv*) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void FUNC_2(struct i801_priv *VAR_1)
{
 if (!(VAR_1->features & VAR_0))
  return;

 FUNC_1(VAR_1->original_slvcmd, FUNC_0(VAR_1));
}
