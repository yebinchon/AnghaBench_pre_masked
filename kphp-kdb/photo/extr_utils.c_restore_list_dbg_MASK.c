
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* next; int val; } ;
typedef TYPE_1__ restore_list ;


 int FUNC_0 (char*,...) ;

void FUNC_1 (restore_list *VAR_0) {
  restore_list *VAR_1 = VAR_0;
  FUNC_0 ("-------\n");
  do {
    FUNC_0 ("(%p;%d)\n", VAR_0, VAR_0->val);
    VAR_0 = VAR_0->next;
  } while (VAR_0 != VAR_1);
}
