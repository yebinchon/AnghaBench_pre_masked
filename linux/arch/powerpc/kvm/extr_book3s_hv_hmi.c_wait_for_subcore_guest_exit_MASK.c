
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sibling_subcore_state; } ;
struct TYPE_3__ {scalar_t__* in_guest; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_2__* VAR_1 ;

void FUNC_1(void)
{
 int VAR_2;
 if (!VAR_1->sibling_subcore_state)
  return;

 for (VAR_2 = 0; VAR_2 < VAR_0; VAR_2++)
  while (VAR_1->sibling_subcore_state->in_guest[VAR_2])
   FUNC_0();
}
