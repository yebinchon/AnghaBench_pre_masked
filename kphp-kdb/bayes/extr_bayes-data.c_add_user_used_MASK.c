
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next_used; struct TYPE_5__* prev_used; } ;
typedef TYPE_1__ user ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2 (user *VAR_1) {
  FUNC_0 (VAR_1 != ((void*)0));
  FUNC_0 (FUNC_1 (VAR_1));

  FUNC_0 (VAR_1->prev_used == ((void*)0));
  FUNC_0 (VAR_1->next_used == ((void*)0));

  user *VAR_2 = VAR_0->prev_used;

  VAR_1->next_used = VAR_0;
  VAR_0->prev_used = VAR_1;

  VAR_1->prev_used = VAR_2;
  VAR_2->next_used = VAR_1;
}
