
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ tp_row; } ;
struct TYPE_8__ {scalar_t__ ts_begin; scalar_t__ ts_end; } ;
struct TYPE_7__ {scalar_t__ tp_row; } ;
struct TYPE_10__ {size_t t_curscs; TYPE_3__ t_winsize; TYPE_2__ t_originreg; int t_stateflags; TYPE_1__ t_cursor; int t_saved_curscs; int * t_scs; int t_saved_curattr; int t_curattr; TYPE_1__ t_saved_cursor; } ;
typedef TYPE_4__ teken_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_1(teken_t *VAR_2)
{

 VAR_2->t_cursor = VAR_2->t_saved_cursor;
 VAR_2->t_curattr = VAR_2->t_saved_curattr;
 VAR_2->t_scs[VAR_2->t_curscs] = VAR_2->t_saved_curscs;
 VAR_2->t_stateflags &= ~VAR_1;


 if (VAR_2->t_cursor.tp_row < VAR_2->t_originreg.ts_begin ||
     VAR_2->t_cursor.tp_row >= VAR_2->t_originreg.ts_end) {
  VAR_2->t_stateflags &= ~VAR_0;
  VAR_2->t_originreg.ts_begin = 0;
  VAR_2->t_originreg.ts_end = VAR_2->t_winsize.tp_row;
 }

 FUNC_0(VAR_2);
}
