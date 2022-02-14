
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {unsigned int tp_col; } ;
struct TYPE_8__ {unsigned int tp_row; unsigned int tp_col; } ;
struct TYPE_9__ {unsigned int ts_begin; unsigned int ts_end; } ;
struct TYPE_10__ {int t_stateflags; TYPE_1__ t_winsize; TYPE_2__ t_cursor; TYPE_3__ t_originreg; } ;
typedef TYPE_4__ teken_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;

__attribute__((used)) static void
FUNC_1(teken_t *VAR_1, unsigned int VAR_2, unsigned int VAR_3)
{

 VAR_2 = (VAR_2 - 1) + VAR_1->t_originreg.ts_begin;
 VAR_1->t_cursor.tp_row = VAR_2 < VAR_1->t_originreg.ts_end ?
     VAR_2 : VAR_1->t_originreg.ts_end - 1;

 VAR_3--;
 VAR_1->t_cursor.tp_col = VAR_3 < VAR_1->t_winsize.tp_col ?
     VAR_3 : VAR_1->t_winsize.tp_col - 1;

 VAR_1->t_stateflags &= ~VAR_0;
 FUNC_0(VAR_1);
}
