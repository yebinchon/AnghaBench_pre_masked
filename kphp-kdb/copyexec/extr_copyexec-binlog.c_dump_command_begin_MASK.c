
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_copyexec_main_command_begin {int transaction_id; int command_id; int pid; char* command_size; int data; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,int,int,int,char*,int ) ;
 int VAR_0 ;

void FUNC_2 (struct lev_copyexec_main_command_begin *VAR_1) {
  if (FUNC_0 ("LEV_COPYEXEC_MAIN_COMMAND_BEGIN")) {
    return;
  }
  FUNC_1 (VAR_0, "%d\t%d\t%d\t%.*s\n", VAR_1->transaction_id, VAR_1->command_id, VAR_1->pid, VAR_1->command_size, VAR_1->data);
}
