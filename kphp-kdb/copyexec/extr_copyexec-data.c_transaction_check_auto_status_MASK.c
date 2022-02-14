
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__* next; } ;
typedef TYPE_1__ transaction_t ;


 TYPE_1__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int,char*,...) ;

int FUNC_3 (void) {
  int VAR_1 = 0;
  transaction_t *VAR_2, *VAR_3;

  for (VAR_2 = VAR_0.next; VAR_2 != &VAR_0; VAR_2 = VAR_3) {
    VAR_3 = VAR_2->next;
    if (!FUNC_0 (VAR_2)) {
      FUNC_2 (4, "transaction_check_auto_status: call transaction_finish_execution\n");
      FUNC_1 (VAR_2, 1);
    }
  }
  if (VAR_1 > 0) {
    FUNC_2 (3, "transaction_check_auto_status: %d transaction(s) finished.\n", VAR_1);
  }
  return VAR_1;
}
