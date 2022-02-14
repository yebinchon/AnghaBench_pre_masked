
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next_used; struct TYPE_4__* prev_used; } ;
typedef TYPE_1__ user ;


 TYPE_1__* VAR_0 ;

void FUNC_0 (user *VAR_1) {
  user *VAR_2 = VAR_0->prev_used;

  VAR_1->next_used = VAR_0;
  VAR_0->prev_used = VAR_1;

  VAR_1->prev_used = VAR_2;
  VAR_2->next_used = VAR_1;
}
