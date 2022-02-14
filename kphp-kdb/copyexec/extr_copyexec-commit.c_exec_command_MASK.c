
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_copyexec_aux_transaction_cmd_exec {scalar_t__ command_size; int data; } ;
typedef scalar_t__ lev_type_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,scalar_t__) ;
 scalar_t__ FUNC_2 (char const*) ;
 struct lev_copyexec_aux_transaction_cmd_exec* FUNC_3 (int *,scalar_t__,scalar_t__) ;
 int FUNC_4 (int,char*,char*,char const*) ;

__attribute__((used)) static int FUNC_5 (const char *VAR_3, lev_type_t VAR_4) {
  char *VAR_5 = "";
  if (VAR_4 == VAR_0) {
    VAR_5 = "_check";
  } else if (VAR_4 == VAR_1) {
    VAR_5 = "_result";
  }
  FUNC_4 (2, "exec%s %s\n", VAR_5, VAR_3);
  if (!(*VAR_3)) {
    FUNC_0 ("exec_command: empty filename\n");
    return -1;
  }
  struct lev_copyexec_aux_transaction_cmd_exec *VAR_6 = FUNC_3 (&VAR_2, VAR_4, sizeof (struct lev_copyexec_aux_transaction_cmd_exec) + FUNC_2 (VAR_3));
  VAR_6->command_size = FUNC_2 (VAR_3);
  FUNC_1 (VAR_6->data, VAR_3, VAR_6->command_size);
  return 0;
}
