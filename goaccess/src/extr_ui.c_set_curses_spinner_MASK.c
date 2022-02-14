
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int curses; int w; int spin_x; int y; int x; int win; int color; } ;
typedef TYPE_1__ GSpinner ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int) ;
 int VAR_1 ;

void
FUNC_1 (GSpinner * VAR_2)
{
  int VAR_3, VAR_4;
  if (VAR_2 == ((void*)0))
    return;

  FUNC_0 (VAR_1, VAR_3, VAR_4);

  VAR_2->color = VAR_0;
  VAR_2->curses = 1;
  VAR_2->win = VAR_1;
  VAR_2->x = 0;
  VAR_2->w = VAR_4;
  VAR_2->spin_x = VAR_4 - 2;
  VAR_2->y = VAR_3 - 1;
}
