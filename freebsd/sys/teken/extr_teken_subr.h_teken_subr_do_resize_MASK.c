
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int ts_end; scalar_t__ ts_begin; } ;
struct TYPE_5__ {int tp_row; } ;
struct TYPE_7__ {TYPE_2__ t_scrollreg; TYPE_2__ t_originreg; TYPE_1__ t_winsize; } ;
typedef TYPE_3__ teken_t ;



__attribute__((used)) static void
FUNC_0(teken_t *VAR_0)
{

 VAR_0->t_scrollreg.ts_begin = 0;
 VAR_0->t_scrollreg.ts_end = VAR_0->t_winsize.tp_row;
 VAR_0->t_originreg = VAR_0->t_scrollreg;
}
