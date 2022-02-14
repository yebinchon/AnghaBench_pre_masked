
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_6__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_7__ {TYPE_3__ t_cursor; TYPE_1__ t_winsize; } ;
typedef TYPE_2__ teken_t ;
typedef TYPE_3__ teken_pos_t ;


 int FUNC_0 (int) ;

void
FUNC_1(teken_t *VAR_0, const teken_pos_t *VAR_1)
{


 FUNC_0(VAR_1->tp_row < VAR_0->t_winsize.tp_row);
 FUNC_0(VAR_1->tp_col < VAR_0->t_winsize.tp_col);

 VAR_0->t_cursor = *VAR_1;
}
