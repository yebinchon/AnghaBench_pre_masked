
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ tp_row; int tp_col; } ;
struct TYPE_16__ {scalar_t__ ts_end; scalar_t__ ts_begin; } ;
struct TYPE_15__ {scalar_t__ tp_row; } ;
struct TYPE_20__ {int t_curattr; TYPE_5__ t_winsize; TYPE_2__ t_scrollreg; TYPE_1__ t_cursor; } ;
typedef TYPE_6__ teken_t ;
struct TYPE_18__ {scalar_t__ tp_row; int tp_col; } ;
struct TYPE_17__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_21__ {TYPE_4__ tr_end; TYPE_3__ tr_begin; } ;
typedef TYPE_7__ teken_rect_t ;
struct TYPE_22__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
typedef TYPE_8__ teken_pos_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__ const*,TYPE_7__*,TYPE_8__*) ;
 int FUNC_2 (TYPE_6__ const*,TYPE_7__*,int ,int *) ;

__attribute__((used)) static void
FUNC_3(const teken_t *VAR_1, int VAR_2)
{
 teken_rect_t VAR_3;
 teken_pos_t VAR_4;

 FUNC_0(VAR_1->t_cursor.tp_row <= VAR_1->t_winsize.tp_row);
 FUNC_0(VAR_1->t_scrollreg.ts_end <= VAR_1->t_winsize.tp_row);
 FUNC_0(VAR_2 != 0);


 if (VAR_2 > 0) {



  if (VAR_1->t_scrollreg.ts_begin + VAR_2 < VAR_1->t_scrollreg.ts_end) {
   VAR_3.tr_begin.tp_row = VAR_1->t_scrollreg.ts_begin + VAR_2;
   VAR_3.tr_begin.tp_col = 0;
   VAR_3.tr_end.tp_row = VAR_1->t_scrollreg.ts_end;
   VAR_3.tr_end.tp_col = VAR_1->t_winsize.tp_col;
   VAR_4.tp_row = VAR_1->t_scrollreg.ts_begin;
   VAR_4.tp_col = 0;
   FUNC_1(VAR_1, &VAR_3, &VAR_4);

   VAR_3.tr_begin.tp_row = VAR_1->t_scrollreg.ts_end - VAR_2;
  } else {
   VAR_3.tr_begin.tp_row = VAR_1->t_scrollreg.ts_begin;
  }


  VAR_3.tr_begin.tp_col = 0;
  VAR_3.tr_end.tp_row = VAR_1->t_scrollreg.ts_end;
  VAR_3.tr_end.tp_col = VAR_1->t_winsize.tp_col;
  FUNC_2(VAR_1, &VAR_3, VAR_0, &VAR_1->t_curattr);
 } else {

  VAR_2 = -VAR_2;


  if (VAR_1->t_scrollreg.ts_begin + VAR_2 < VAR_1->t_scrollreg.ts_end) {
   VAR_3.tr_begin.tp_row = VAR_1->t_scrollreg.ts_begin;
   VAR_3.tr_begin.tp_col = 0;
   VAR_3.tr_end.tp_row = VAR_1->t_scrollreg.ts_end - VAR_2;
   VAR_3.tr_end.tp_col = VAR_1->t_winsize.tp_col;
   VAR_4.tp_row = VAR_1->t_scrollreg.ts_begin + VAR_2;
   VAR_4.tp_col = 0;
   FUNC_1(VAR_1, &VAR_3, &VAR_4);

   VAR_3.tr_end.tp_row = VAR_1->t_scrollreg.ts_begin + VAR_2;
  } else {
   VAR_3.tr_end.tp_row = VAR_1->t_scrollreg.ts_end;
  }


  VAR_3.tr_begin.tp_row = VAR_1->t_scrollreg.ts_begin;
  VAR_3.tr_begin.tp_col = 0;
  VAR_3.tr_end.tp_col = VAR_1->t_winsize.tp_col;
  FUNC_2(VAR_1, &VAR_3, VAR_0, &VAR_1->t_curattr);
 }
}
