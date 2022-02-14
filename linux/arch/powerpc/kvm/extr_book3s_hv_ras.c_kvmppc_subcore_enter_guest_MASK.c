
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* sibling_subcore_state; int paca_index; } ;
struct TYPE_3__ {int* in_guest; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 TYPE_2__* VAR_0 ;

void FUNC_2(void)
{
 int VAR_1, VAR_2;

 VAR_1 = FUNC_0(VAR_0->paca_index);
 VAR_2 = VAR_1 / FUNC_1();

 VAR_0->sibling_subcore_state->in_guest[VAR_2] = 1;
}
