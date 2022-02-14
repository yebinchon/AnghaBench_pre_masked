
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iadev_priv {int dummy; } ;
struct ia_reg {int val; int reg; } ;


 int FUNC_0 (struct iadev_priv*,int ,int ) ;

__attribute__((used)) static void FUNC_1(struct iadev_priv *VAR_0,
    const struct ia_reg *VAR_1, int VAR_2)
{
 while (VAR_2--) {
  FUNC_0(VAR_0, VAR_1->reg, VAR_1->val);
  VAR_1++;
 }
}
