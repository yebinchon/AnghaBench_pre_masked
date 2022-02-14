
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_21__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_20__ {scalar_t__ ts_begin; scalar_t__ ts_end; } ;
struct TYPE_19__ {scalar_t__ ts_end; scalar_t__ ts_begin; } ;
struct TYPE_18__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_17__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_22__ {int t_stateflags; int t_curscs; TYPE_5__ t_winsize; TYPE_4__ t_originreg; TYPE_3__ t_scrollreg; TYPE_2__ t_saved_cursor; TYPE_1__ t_cursor; int (* t_nextstate ) (TYPE_6__*,int) ;} ;
typedef TYPE_6__ teken_t ;
typedef int teken_char_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (TYPE_6__*,int) ;
 int FUNC_2 (TYPE_6__*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;

__attribute__((used)) static void
FUNC_10(teken_t *VAR_2, teken_char_t VAR_3)
{






 if (VAR_2->t_stateflags & VAR_1) {
  switch (VAR_3) {
  case '\x1B':
   VAR_2->t_stateflags &= ~VAR_1;
   break;
  case '\a':
   VAR_2->t_stateflags &= ~VAR_1;
   return;
  default:
   return;
  }
 }

 switch (VAR_3) {
 case '\0':
  break;
 case '\a':
  FUNC_5(VAR_2);
  break;
 case '\b':
  FUNC_4(VAR_2);
  break;
 case '\n':
 case '\x0B':
  FUNC_8(VAR_2);
  break;
 case '\x0C':
  FUNC_9(VAR_2);
  break;
 case '\x0E':
  if (VAR_2->t_stateflags & VAR_0)
   VAR_2->t_nextstate(VAR_2, VAR_3);
  else
   VAR_2->t_curscs = 1;
  break;
 case '\x0F':
  if (VAR_2->t_stateflags & VAR_0)
   VAR_2->t_nextstate(VAR_2, VAR_3);
  else
   VAR_2->t_curscs = 0;
  break;
 case '\r':
  FUNC_6(VAR_2);
  break;
 case '\t':
  FUNC_7(VAR_2);
  break;
 default:
  VAR_2->t_nextstate(VAR_2, VAR_3);
  break;
 }


 FUNC_3(VAR_2->t_cursor.tp_row >= VAR_2->t_originreg.ts_begin);
 FUNC_3(VAR_2->t_cursor.tp_row < VAR_2->t_originreg.ts_end);
 FUNC_3(VAR_2->t_cursor.tp_row < VAR_2->t_winsize.tp_row);
 FUNC_3(VAR_2->t_cursor.tp_col < VAR_2->t_winsize.tp_col);
 FUNC_3(VAR_2->t_saved_cursor.tp_row < VAR_2->t_winsize.tp_row);
 FUNC_3(VAR_2->t_saved_cursor.tp_col < VAR_2->t_winsize.tp_col);
 FUNC_3(VAR_2->t_scrollreg.ts_end <= VAR_2->t_winsize.tp_row);
 FUNC_3(VAR_2->t_scrollreg.ts_begin < VAR_2->t_scrollreg.ts_end);

 FUNC_3((VAR_2->t_originreg.ts_begin == VAR_2->t_scrollreg.ts_begin &&
     VAR_2->t_originreg.ts_end == VAR_2->t_scrollreg.ts_end) ||
     (VAR_2->t_originreg.ts_begin == 0 &&
     VAR_2->t_originreg.ts_end == VAR_2->t_winsize.tp_row));
}
