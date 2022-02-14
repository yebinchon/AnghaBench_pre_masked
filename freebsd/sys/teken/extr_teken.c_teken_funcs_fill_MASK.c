
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_14__ {int t_softc; TYPE_4__* t_funcs; TYPE_3__ t_winsize; } ;
typedef TYPE_5__ teken_t ;
struct TYPE_11__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_10__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_15__ {TYPE_2__ tr_end; TYPE_1__ tr_begin; } ;
typedef TYPE_6__ teken_rect_t ;
typedef int teken_char_t ;
typedef int teken_attr_t ;
struct TYPE_13__ {int (* tf_fill ) (int ,TYPE_6__ const*,int const,int const*) ;} ;


 int FUNC_0 (int ,TYPE_6__ const*,int const,int const*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(const teken_t *VAR_0, const teken_rect_t *VAR_1,
    const teken_char_t VAR_2, const teken_attr_t *VAR_3)
{

 FUNC_1(VAR_1->tr_end.tp_row > VAR_1->tr_begin.tp_row);
 FUNC_1(VAR_1->tr_end.tp_row <= VAR_0->t_winsize.tp_row);
 FUNC_1(VAR_1->tr_end.tp_col > VAR_1->tr_begin.tp_col);
 FUNC_1(VAR_1->tr_end.tp_col <= VAR_0->t_winsize.tp_col);

 FUNC_1(VAR_0->t_funcs->tf_fill != ((void*)0));
 VAR_0->t_funcs->tf_fill(VAR_0->t_softc, VAR_1, VAR_2, VAR_3);
}
