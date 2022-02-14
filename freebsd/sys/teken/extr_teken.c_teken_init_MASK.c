
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ta_bgcolor; int ta_fgcolor; scalar_t__ ta_format; } ;
struct TYPE_9__ {TYPE_1__ t_defattr; scalar_t__ t_utf8_left; scalar_t__ t_stateflags; int t_nextstate; void* t_softc; int const* t_funcs; } ;
typedef TYPE_2__ teken_t ;
struct TYPE_10__ {int tp_row; int tp_col; } ;
typedef TYPE_3__ teken_pos_t ;
typedef int teken_funcs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*) ;

void
FUNC_2(teken_t *VAR_3, const teken_funcs_t *VAR_4, void *VAR_5)
{
 teken_pos_t VAR_6 = { .tp_row = 24, .tp_col = 80 };

 VAR_3->t_funcs = VAR_4;
 VAR_3->t_softc = VAR_5;

 VAR_3->t_nextstate = VAR_2;
 VAR_3->t_stateflags = 0;
 VAR_3->t_utf8_left = 0;

 VAR_3->t_defattr.ta_format = 0;
 VAR_3->t_defattr.ta_fgcolor = VAR_1;
 VAR_3->t_defattr.ta_bgcolor = VAR_0;
 FUNC_1(VAR_3);

 FUNC_0(VAR_3, &VAR_6);
}
