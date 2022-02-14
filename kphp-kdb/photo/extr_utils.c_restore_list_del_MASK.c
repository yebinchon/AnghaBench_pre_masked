
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int val; struct TYPE_11__* next; struct TYPE_11__* prev; } ;
typedef TYPE_1__ restore_list ;


 int FUNC_0 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;

int FUNC_3 (restore_list *VAR_0, int VAR_1, restore_list **VAR_2, restore_list **VAR_3, int *VAR_4) {


  restore_list *VAR_5 = VAR_0->next;

  while (VAR_5 != VAR_0) {
    if (VAR_5->val == VAR_1) {
      *VAR_4 = VAR_0->val;

      if (VAR_5->next != VAR_0) {
        *VAR_3 = FUNC_1 (VAR_0->prev, VAR_5->next, VAR_1);
      } else {
        *VAR_3 = ((void*)0);
      }
      FUNC_0 (VAR_5->prev, VAR_0);
      *VAR_2 = VAR_0;

      FUNC_0 (VAR_5, VAR_5);

      FUNC_2 (VAR_5);

      return 1;
    }
    VAR_5 = VAR_5->next;
  }
  return 0;
}
