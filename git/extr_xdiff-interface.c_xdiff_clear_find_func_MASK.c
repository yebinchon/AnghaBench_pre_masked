
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct ff_regs* find_func_priv; int * find_func; } ;
typedef TYPE_1__ xdemitconf_t ;
struct ff_regs {int nr; struct ff_regs* array; int re; } ;


 int FUNC_0 (struct ff_regs*) ;
 int FUNC_1 (int *) ;

void FUNC_2(xdemitconf_t *VAR_0)
{
 if (VAR_0->find_func) {
  int VAR_1;
  struct ff_regs *VAR_2 = VAR_0->find_func_priv;

  for (VAR_1 = 0; VAR_1 < VAR_2->nr; VAR_1++)
   FUNC_1(&VAR_2->array[VAR_1].re);
  FUNC_0(VAR_2->array);
  FUNC_0(VAR_2);
  VAR_0->find_func = ((void*)0);
  VAR_0->find_func_priv = ((void*)0);
 }
}
