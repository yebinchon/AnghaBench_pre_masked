
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
struct TYPE_10__ {int t_softc; TYPE_2__* t_funcs; TYPE_1__ t_winsize; } ;
typedef TYPE_3__ teken_t ;
struct TYPE_11__ {scalar_t__ tp_row; scalar_t__ tp_col; } ;
typedef TYPE_4__ teken_pos_t ;
typedef int teken_char_t ;
typedef int teken_attr_t ;
struct TYPE_9__ {int (* tf_putchar ) (int ,TYPE_4__ const*,int ,int const*) ;} ;


 int FUNC_0 (int ,TYPE_4__ const*,int ,int const*) ;
 int FUNC_1 (int) ;

__attribute__((used)) static inline void
FUNC_2(const teken_t *VAR_0, const teken_pos_t *VAR_1, teken_char_t VAR_2,
    const teken_attr_t *VAR_3)
{

 FUNC_1(VAR_1->tp_row < VAR_0->t_winsize.tp_row);
 FUNC_1(VAR_1->tp_col < VAR_0->t_winsize.tp_col);

 FUNC_1(VAR_0->t_funcs->tf_putchar != ((void*)0));
 VAR_0->t_funcs->tf_putchar(VAR_0->t_softc, VAR_1, VAR_2, VAR_3);
}
