
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int tp_col; int tp_row; } ;
struct TYPE_14__ {int tp_col; int tp_row; } ;
struct TYPE_11__ {int ts_end; } ;
struct TYPE_13__ {int t_stateflags; TYPE_2__ t_winsize; TYPE_4__ t_cursor; TYPE_1__ t_scrollreg; } ;
typedef TYPE_3__ teken_t ;
typedef TYPE_4__ teken_pos_t ;
typedef int teken_char_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int) ;
 int FUNC_2 (TYPE_3__*,TYPE_4__*,int,int) ;
 int FUNC_3 (TYPE_3__*,int) ;
 int FUNC_4 (int) ;

__attribute__((used)) static void
FUNC_5(teken_t *VAR_4, teken_char_t VAR_5)
{
 int VAR_6;

 if (VAR_4->t_stateflags & VAR_0) {
  if (!(VAR_4->t_stateflags & VAR_2) && (VAR_5 <= 0x1b || VAR_5 == 0x7f))
   return;
  VAR_5 = FUNC_1(VAR_4, VAR_5);
  VAR_6 = 1;
 } else {
  VAR_5 = FUNC_1(VAR_4, VAR_5);
  VAR_6 = FUNC_4(VAR_5);

  if (VAR_6 <= 0)
   return;
 }

 if (VAR_4->t_stateflags & VAR_2) {
  FUNC_2(VAR_4, &VAR_4->t_cursor, VAR_5, VAR_6);
  VAR_4->t_cursor.tp_col += VAR_6;

  if (VAR_4->t_cursor.tp_col >= VAR_4->t_winsize.tp_col) {
   if (VAR_4->t_cursor.tp_row == VAR_4->t_scrollreg.ts_end - 1) {

    FUNC_3(VAR_4, 1);
   } else {

    if (VAR_4->t_cursor.tp_row <
        VAR_4->t_winsize.tp_row - 1)
     VAR_4->t_cursor.tp_row++;
   }
   VAR_4->t_cursor.tp_col = 0;
  }
 } else if (VAR_4->t_stateflags & VAR_1 &&
     ((VAR_4->t_stateflags & VAR_3 &&
     VAR_4->t_cursor.tp_col + 1 == VAR_4->t_winsize.tp_col) ||
     VAR_4->t_cursor.tp_col + VAR_6 > VAR_4->t_winsize.tp_col)) {
  teken_pos_t VAR_7;







  if (VAR_4->t_cursor.tp_row == VAR_4->t_scrollreg.ts_end - 1) {

   FUNC_3(VAR_4, 1);
   VAR_7.tp_row = VAR_4->t_scrollreg.ts_end - 1;
  } else {

   VAR_7.tp_row = VAR_4->t_cursor.tp_row + 1;
   if (VAR_7.tp_row == VAR_4->t_winsize.tp_row) {





    FUNC_2(VAR_4, &VAR_4->t_cursor,
        VAR_5, VAR_6);
    return;
   }
  }

  VAR_7.tp_col = 0;
  FUNC_2(VAR_4, &VAR_7, VAR_5, VAR_6);

  VAR_4->t_cursor.tp_row = VAR_7.tp_row;
  VAR_4->t_cursor.tp_col = VAR_6;
  VAR_4->t_stateflags &= ~VAR_3;
 } else {

  FUNC_2(VAR_4, &VAR_4->t_cursor, VAR_5, VAR_6);
  VAR_4->t_cursor.tp_col += VAR_6;

  if (VAR_4->t_cursor.tp_col >= VAR_4->t_winsize.tp_col) {
   VAR_4->t_stateflags |= VAR_3;
   VAR_4->t_cursor.tp_col = VAR_4->t_winsize.tp_col - 1;
  } else {
   VAR_4->t_stateflags &= ~VAR_3;
  }
 }

 FUNC_0(VAR_4);
}
