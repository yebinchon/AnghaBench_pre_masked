
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int tp_col; } ;
struct TYPE_7__ {int tp_col; } ;
struct TYPE_9__ {TYPE_2__ t_cursor; TYPE_1__ t_winsize; } ;
typedef TYPE_3__ teken_t ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (TYPE_3__*,int) ;

__attribute__((used)) static void
FUNC_2(teken_t *VAR_0, unsigned int VAR_1)
{

 do {

  if (VAR_0->t_cursor.tp_col == VAR_0->t_winsize.tp_col - 1)
   break;

  VAR_0->t_cursor.tp_col++;


  if (FUNC_1(VAR_0, VAR_0->t_cursor.tp_col))
   VAR_1--;
 } while (VAR_1 > 0);

 FUNC_0(VAR_0);
}
