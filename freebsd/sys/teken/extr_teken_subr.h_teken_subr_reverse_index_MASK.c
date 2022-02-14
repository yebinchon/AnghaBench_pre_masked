
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ tp_row; } ;
struct TYPE_7__ {scalar_t__ ts_begin; } ;
struct TYPE_9__ {int t_stateflags; TYPE_2__ t_cursor; TYPE_1__ t_scrollreg; } ;
typedef TYPE_3__ teken_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_2(teken_t *VAR_1)
{

 if (VAR_1->t_cursor.tp_row > VAR_1->t_scrollreg.ts_begin) {
  VAR_1->t_cursor.tp_row--;
  VAR_1->t_stateflags &= ~VAR_0;
  FUNC_0(VAR_1);
 } else {
  FUNC_1(VAR_1, -1);
 }
}
