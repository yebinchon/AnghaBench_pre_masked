
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* next; } ;
typedef TYPE_1__ restore_list ;


 int FUNC_0 (TYPE_1__*,int) ;

void FUNC_1 (restore_list *VAR_0) {

  restore_list *VAR_1 = VAR_0;
  do {
    restore_list *VAR_2 = VAR_0->next;
    FUNC_0 (VAR_0, sizeof (*VAR_0));
    VAR_0 = VAR_2;
  } while (VAR_0 != VAR_1);
}
