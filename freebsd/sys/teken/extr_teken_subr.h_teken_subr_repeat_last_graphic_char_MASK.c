
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned int tp_row; unsigned int tp_col; } ;
struct TYPE_6__ {scalar_t__ t_last; TYPE_1__ t_winsize; } ;
typedef TYPE_2__ teken_t ;


 int FUNC_0 (TYPE_2__*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(teken_t *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2;

 VAR_2 = VAR_0->t_winsize.tp_row * VAR_0->t_winsize.tp_col;
 if (VAR_1 > VAR_2)
  VAR_1 = VAR_2;
 for (; VAR_0->t_last != 0 && VAR_1 > 0; VAR_1--)
  FUNC_0(VAR_0, VAR_0->t_last);
}
