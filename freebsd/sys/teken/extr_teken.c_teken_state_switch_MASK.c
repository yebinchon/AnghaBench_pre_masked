
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int t_stateflags; scalar_t__ t_curnum; int * t_nextstate; } ;
typedef TYPE_1__ teken_t ;
typedef int teken_state_t ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(teken_t *VAR_1, teken_state_t *VAR_2)
{

 VAR_1->t_nextstate = VAR_2;
 VAR_1->t_curnum = 0;
 VAR_1->t_stateflags |= VAR_0;
}
