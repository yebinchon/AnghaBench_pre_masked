
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* prev; struct TYPE_4__* next; } ;
typedef TYPE_1__ restore_list ;



inline void FUNC_0 (restore_list *VAR_0, restore_list *VAR_1) {
  VAR_0->next = VAR_1;
  VAR_1->prev = VAR_0;
}
