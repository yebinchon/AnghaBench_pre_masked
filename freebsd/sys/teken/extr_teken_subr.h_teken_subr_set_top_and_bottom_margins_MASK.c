
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {unsigned int tp_row; scalar_t__ tp_col; } ;
struct TYPE_8__ {unsigned int ts_begin; unsigned int ts_end; } ;
struct TYPE_7__ {unsigned int tp_row; } ;
struct TYPE_10__ {int t_stateflags; TYPE_3__ t_cursor; TYPE_2__ t_originreg; TYPE_2__ t_scrollreg; TYPE_1__ t_winsize; } ;
typedef TYPE_4__ teken_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_1(teken_t *VAR_2, unsigned int VAR_3,
    unsigned int VAR_4)
{


 if (VAR_3 > 0)
  VAR_3--;

 if (VAR_4 == 0 || VAR_4 > VAR_2->t_winsize.tp_row)
  VAR_4 = VAR_2->t_winsize.tp_row;


 if (VAR_3 >= VAR_4 - 1) {
  VAR_3 = 0;
  VAR_4 = VAR_2->t_winsize.tp_row;
 }


 VAR_2->t_scrollreg.ts_begin = VAR_3;
 VAR_2->t_scrollreg.ts_end = VAR_4;
 if (VAR_2->t_stateflags & VAR_0)
  VAR_2->t_originreg = VAR_2->t_scrollreg;


 VAR_2->t_cursor.tp_row = VAR_2->t_originreg.ts_begin;
 VAR_2->t_cursor.tp_col = 0;
 VAR_2->t_stateflags &= ~VAR_1;
 FUNC_0(VAR_2);
}
