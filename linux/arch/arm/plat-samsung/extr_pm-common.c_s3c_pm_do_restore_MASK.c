
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sleep_save {int reg; int val; } ;


 int FUNC_0 (char*,int ,int ,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(const struct sleep_save *VAR_0, int VAR_1)
{
 for (; VAR_1 > 0; VAR_1--, VAR_0++) {
  FUNC_0("restore %p (restore %08lx, was %08x)\n",
    VAR_0->reg, VAR_0->val, FUNC_1(VAR_0->reg));

  FUNC_2(VAR_0->val, VAR_0->reg);
 }
}
