
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct TYPE_8__ {scalar_t__ tp_col; } ;
struct TYPE_7__ {scalar_t__ ts_begin; } ;
struct TYPE_10__ {int t_stateflags; TYPE_3__ t_cursor; TYPE_2__ t_winsize; TYPE_1__ t_originreg; } ;
typedef TYPE_4__ teken_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_1(teken_t *VAR_2)
{

 if (VAR_2->t_stateflags & VAR_0) {
  if (VAR_2->t_cursor.tp_col == 0) {
   if (VAR_2->t_cursor.tp_row == VAR_2->t_originreg.ts_begin)
    return;
   VAR_2->t_cursor.tp_row--;
   VAR_2->t_cursor.tp_col = VAR_2->t_winsize.tp_col - 1;
  } else {
   VAR_2->t_cursor.tp_col--;
  }
 } else {
  if (VAR_2->t_cursor.tp_col == 0)
   return;

  VAR_2->t_cursor.tp_col--;
  VAR_2->t_stateflags &= ~VAR_1;
 }

 FUNC_0(VAR_2);
}
