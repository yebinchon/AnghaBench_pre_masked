
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__* next_used; struct TYPE_6__* prev_used; } ;
typedef TYPE_1__ user ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;

void FUNC_5 (user *VAR_4) {
  if (VAR_3 > 3) {
    char VAR_5[100];
    FUNC_3 (VAR_5, "?(+%d)", FUNC_2 (&VAR_1, (int)(VAR_4 - VAR_2)));
    FUNC_1 (VAR_5, FUNC_2 (&VAR_1, (int)(VAR_4 - VAR_2)));
  }

  FUNC_0 (VAR_4 != ((void*)0));
  FUNC_0 (FUNC_4 (VAR_4));

  FUNC_0 (VAR_4->prev_used == ((void*)0));
  FUNC_0 (VAR_4->next_used == ((void*)0));

  user *VAR_6 = VAR_0->prev_used;

  VAR_4->next_used = VAR_0;
  VAR_0->prev_used = VAR_4;

  VAR_4->prev_used = VAR_6;
  VAR_6->next_used = VAR_4;
  if (VAR_3 > 3) {
    FUNC_1 ("!", 0);
  }
}
