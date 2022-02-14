
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int pid; int transaction_id; } ;
typedef TYPE_1__ transaction_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int,char*,int ) ;

__attribute__((used)) static int FUNC_3 (transaction_t *VAR_1) {
  if (!FUNC_0 (VAR_1)) {
    FUNC_2 (3, "transaction_cancel: tr%d has terminated.\n", VAR_1->transaction_id);
    return 0;
  }
  int VAR_2 = FUNC_1 (VAR_1->pid, VAR_0);
  if (VAR_2 < 0) {
    FUNC_2 (2, "transaction_cancel: kill (%d) failed. %m\n", VAR_1->pid);
  }
  return VAR_2;
}
