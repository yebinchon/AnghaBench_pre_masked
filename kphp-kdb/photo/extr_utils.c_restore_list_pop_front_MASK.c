
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {struct TYPE_7__* next; struct TYPE_7__* prev; } ;
typedef TYPE_1__ restore_list ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

restore_list *FUNC_2 (restore_list *VAR_0) {
  restore_list *VAR_1;
  if (VAR_0->next == VAR_0) {
    VAR_1 = ((void*)0);
  } else {
    FUNC_0 (VAR_0->prev, VAR_0->next);
    VAR_1 = VAR_0->next;
  }

  FUNC_0 (VAR_0, VAR_0);
  FUNC_1 (VAR_0);
  return VAR_1;
}
