
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pid; struct TYPE_4__* next; } ;
typedef TYPE_1__ transaction_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 TYPE_1__ VAR_0 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int,char*,int,int) ;

int FUNC_3 (int VAR_1) {
  int VAR_2 = 0;
  transaction_t *VAR_3;
  for (VAR_3 = VAR_0.next; VAR_3 != &VAR_0; VAR_3 = VAR_3->next) {
    if (FUNC_0 (VAR_3)) {
      if (!FUNC_1 (VAR_3->pid, VAR_1)) {
        VAR_2++;
      }
    }
  }
  if (VAR_2 > 0) {
    FUNC_2 (3, "transaction_child_kill: send signal %d to %d transaction(s).\n", VAR_1, VAR_2);
  }
  return VAR_2;
}
