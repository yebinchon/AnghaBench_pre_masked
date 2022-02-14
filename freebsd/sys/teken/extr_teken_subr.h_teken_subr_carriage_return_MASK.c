
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ tp_col; } ;
struct TYPE_6__ {int t_stateflags; TYPE_1__ t_cursor; } ;
typedef TYPE_2__ teken_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;

__attribute__((used)) static void
FUNC_1(teken_t *VAR_1)
{

 VAR_1->t_cursor.tp_col = 0;
 VAR_1->t_stateflags &= ~VAR_0;
 FUNC_0(VAR_1);
}
