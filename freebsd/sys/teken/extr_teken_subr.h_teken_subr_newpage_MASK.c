
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ tp_col; int tp_row; } ;
struct TYPE_16__ {int ts_begin; int ts_end; } ;
struct TYPE_15__ {int tp_col; } ;
struct TYPE_18__ {int t_stateflags; TYPE_5__ t_cursor; TYPE_4__ t_originreg; int t_curattr; TYPE_3__ t_winsize; } ;
typedef TYPE_6__ teken_t ;
struct TYPE_14__ {int tp_col; int tp_row; } ;
struct TYPE_13__ {scalar_t__ tp_col; int tp_row; } ;
struct TYPE_19__ {TYPE_2__ tr_end; TYPE_1__ tr_begin; } ;
typedef TYPE_7__ teken_rect_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*,TYPE_7__*,int ,int *) ;
 int FUNC_2 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_3(teken_t *VAR_3)
{

 if (VAR_3->t_stateflags & VAR_1) {
  teken_rect_t VAR_4;


  VAR_4.tr_begin.tp_row = VAR_3->t_originreg.ts_begin;
  VAR_4.tr_begin.tp_col = 0;
  VAR_4.tr_end.tp_row = VAR_3->t_originreg.ts_end;
  VAR_4.tr_end.tp_col = VAR_3->t_winsize.tp_col;
  FUNC_1(VAR_3, &VAR_4, VAR_0, &VAR_3->t_curattr);


  VAR_3->t_cursor.tp_row = VAR_3->t_originreg.ts_begin;
  VAR_3->t_cursor.tp_col = 0;
  VAR_3->t_stateflags &= ~VAR_2;
  FUNC_0(VAR_3);
 } else {
  FUNC_2(VAR_3);
 }
}
