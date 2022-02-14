
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pid; struct TYPE_4__* next; } ;
typedef TYPE_1__ transaction_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int) ;
 TYPE_1__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (int,char*,...) ;
 int FUNC_6 (int,int*,int ) ;

int FUNC_7 (void) {
  int VAR_5 = 0;
  while (1) {
    int VAR_6;
    int VAR_7 = FUNC_6 (-1, &VAR_6, VAR_1);
    if (VAR_7 < 0) {
      if (VAR_3 == VAR_0) {
        continue;
      }
      FUNC_5 (4, "waitpid returns %d. %m\n", VAR_7);
      break;
    }

    if (!VAR_7) {
      FUNC_5 (4, "waitpid returns %d.\n", VAR_7);
      return VAR_5;
    }

    FUNC_5 (3, "waitpid returns %d.\n", VAR_7);

    if (VAR_7 == VAR_4) {
      if (FUNC_1(VAR_6)) {
        FUNC_5 (1, "copyexec-client terminated with exit code %d.\n", FUNC_0(VAR_6));
      } else if (FUNC_2(VAR_6)) {
        FUNC_5 (1, "copyexec-client was killed by signal %d.\n", FUNC_3(VAR_6));
      } else {
        FUNC_5 (1, "copyexec-client terminated (waitpid status: 0x%x)\n", VAR_6);
      }
      continue;
    }

    transaction_t *VAR_8;
    for (VAR_8 = VAR_2.next; VAR_8 != &VAR_2; VAR_8 = VAR_8->next) {
      if (VAR_8->pid == VAR_7) {
        FUNC_5 (4, "transaction_check_child_status: call transaction_finish_execution\n");
        FUNC_4 (VAR_8, 1);
        VAR_5++;
        break;
      }
    }
  }

  if (VAR_5 > 0) {
    FUNC_5 (3, "transaction_check_child_status: %d transaction(s) finished.\n", VAR_5);
  }
  return VAR_5;
}
