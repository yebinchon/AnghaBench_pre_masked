
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int ts_end; scalar_t__ ts_begin; } ;
struct TYPE_9__ {int tp_row; } ;
struct TYPE_8__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct TYPE_11__ {int t_stateflags; scalar_t__ t_curscs; void** t_scs; TYPE_3__ t_scrollreg; TYPE_3__ t_originreg; TYPE_2__ t_winsize; TYPE_1__ t_cursor; int t_defattr; int t_curattr; } ;
typedef TYPE_4__ teken_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int FUNC_0 (TYPE_4__*) ;
 int FUNC_1 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_2(teken_t *VAR_5)
{

 VAR_5->t_curattr = VAR_5->t_defattr;
 VAR_5->t_cursor.tp_row = VAR_5->t_cursor.tp_col = 0;
 VAR_5->t_scrollreg.ts_begin = 0;
 VAR_5->t_scrollreg.ts_end = VAR_5->t_winsize.tp_row;
 VAR_5->t_originreg = VAR_5->t_scrollreg;
 VAR_5->t_stateflags &= VAR_0 | VAR_2 | VAR_3;
 VAR_5->t_stateflags |= VAR_1;

 VAR_5->t_scs[0] = VAR_4;
 VAR_5->t_scs[1] = VAR_4;
 VAR_5->t_curscs = 0;

 FUNC_0(VAR_5);
 FUNC_1(VAR_5);
}
