
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_14__ {int tp_row; } ;
struct TYPE_12__ {int ts_end; scalar_t__ ts_begin; } ;
struct TYPE_11__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct TYPE_15__ {int t_stateflags; int t_defattr; TYPE_4__ t_winsize; TYPE_2__ t_scrollreg; TYPE_2__ t_originreg; TYPE_1__ t_cursor; } ;
typedef TYPE_5__ teken_t ;
struct TYPE_13__ {scalar_t__ tp_col; scalar_t__ tp_row; } ;
struct TYPE_16__ {TYPE_4__ tr_end; TYPE_3__ tr_begin; } ;
typedef TYPE_6__ teken_rect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (TYPE_5__*,TYPE_6__*,char,int *) ;

__attribute__((used)) static void
FUNC_2(teken_t *VAR_2)
{
 teken_rect_t VAR_3;

 VAR_2->t_cursor.tp_row = VAR_2->t_cursor.tp_col = 0;
 VAR_2->t_scrollreg.ts_begin = 0;
 VAR_2->t_scrollreg.ts_end = VAR_2->t_winsize.tp_row;
 VAR_2->t_originreg = VAR_2->t_scrollreg;
 VAR_2->t_stateflags &= ~(VAR_1|VAR_0);
 FUNC_0(VAR_2);

 VAR_3.tr_begin.tp_row = 0;
 VAR_3.tr_begin.tp_col = 0;
 VAR_3.tr_end = VAR_2->t_winsize;
 FUNC_1(VAR_2, &VAR_3, 'E', &VAR_2->t_defattr);
}
