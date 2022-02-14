
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int idx; int bg; int fg; int item; struct TYPE_6__* pair; } ;
typedef TYPE_1__ GColors ;
typedef TYPE_1__ GColorPair ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int,int ,int) ;
 void* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 () ;
 TYPE_1__* FUNC_3 () ;
 void* VAR_3 ;

void
FUNC_4 (void)
{
  GColorPair *VAR_4 = FUNC_2 ();
  GColors *VAR_5 = FUNC_3 ();

  VAR_4->idx = 1;
  VAR_4->fg = VAR_1;
  VAR_4->bg = -1;

  VAR_5->pair = VAR_4;
  VAR_5->item = VAR_0;

  VAR_3 = FUNC_1 (VAR_4);
  VAR_2 = FUNC_1 (VAR_5);

  FUNC_0 (VAR_4->idx, VAR_4->fg, VAR_4->bg);
}
