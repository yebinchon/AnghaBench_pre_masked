
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_generic {int type; } ;
struct lev_copyexec_aux_transaction_cmd_wait {int transaction_id; } ;
struct lev_copyexec_aux_transaction_cmd_result {int result; } ;
struct lev_copyexec_aux_transaction_cmd_kill {int transaction_id; int signal; } ;
struct lev_copyexec_aux_transaction_cmd_file {int filename_size; int compressed_size; } ;
struct lev_copyexec_aux_transaction_cmd_exec {int command_size; } ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct lev_copyexec_aux_transaction_cmd_exec*,int,int) ;
 int FUNC_2 (struct lev_copyexec_aux_transaction_cmd_file*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int,char*,int,int) ;

int FUNC_7 (struct lev_generic *VAR_0, int VAR_1) {
  int VAR_2;
  FUNC_6 (3, "transaction_replay_logevent (E->type = 0x%x, size = %d)\n", VAR_0->type, VAR_1);

  switch (VAR_0->type) {
    case 131:
      VAR_2 = sizeof (struct lev_copyexec_aux_transaction_cmd_file);
      if (VAR_1 < VAR_2) {
        return -2;
      }
      VAR_2 += ((struct lev_copyexec_aux_transaction_cmd_file *) VAR_0)->filename_size + ((struct lev_copyexec_aux_transaction_cmd_file *) VAR_0)->compressed_size;
      if (VAR_1 < VAR_2) {
        return -2;
      }
      if (FUNC_2 ((struct lev_copyexec_aux_transaction_cmd_file *) VAR_0) < 0) {
        return -4;
      }
      return VAR_2;
    case 134:
      VAR_2 = sizeof (struct lev_copyexec_aux_transaction_cmd_exec);
      if (VAR_1 < VAR_2) {
        return -2;
      }
      VAR_2 += ((struct lev_copyexec_aux_transaction_cmd_exec *) VAR_0)->command_size;
      if (VAR_1 < VAR_2) {
        return -2;
      }
      if (FUNC_1 (((struct lev_copyexec_aux_transaction_cmd_exec *) VAR_0), 0, 0) < 0) {
        return -5;
      }
      return VAR_2;
    case 133:
      VAR_2 = sizeof (struct lev_copyexec_aux_transaction_cmd_exec);
      if (VAR_1 < VAR_2) {
        return -2;
      }
      VAR_2 += ((struct lev_copyexec_aux_transaction_cmd_exec *) VAR_0)->command_size;
      if (VAR_1 < VAR_2) {
        return -2;
      }
      if (FUNC_1 (((struct lev_copyexec_aux_transaction_cmd_exec *) VAR_0), 1, 0) < 0) {
        return -6;
      }
      return VAR_2;
    case 132:
      VAR_2 = sizeof (struct lev_copyexec_aux_transaction_cmd_exec);
      if (VAR_1 < VAR_2) {
        return -2;
      }
      VAR_2 += ((struct lev_copyexec_aux_transaction_cmd_exec *) VAR_0)->command_size;
      if (VAR_1 < VAR_2) {
        return -2;
      }
      if (FUNC_1 (((struct lev_copyexec_aux_transaction_cmd_exec *) VAR_0), 0, 1) < 0) {
        return -7;
      }
      return VAR_2;
    case 128:
      VAR_2 = sizeof (struct lev_copyexec_aux_transaction_cmd_wait);
      if (VAR_1 < VAR_2) {
        return -2;
      }
      FUNC_5 (((struct lev_copyexec_aux_transaction_cmd_wait *) VAR_0)->transaction_id);
      return VAR_2;
    case 135:
      VAR_2 = sizeof (struct lev_copyexec_aux_transaction_cmd_wait);
      if (VAR_1 < VAR_2) {
        return -2;
      }
      FUNC_0 (((struct lev_copyexec_aux_transaction_cmd_wait *) VAR_0)->transaction_id);
      return VAR_2;
    case 130:
      VAR_2 = sizeof (struct lev_copyexec_aux_transaction_cmd_kill);
      if (VAR_1 < VAR_2) {
        return -2;
      }
      FUNC_3 (((struct lev_copyexec_aux_transaction_cmd_kill *) VAR_0)->signal, ((struct lev_copyexec_aux_transaction_cmd_kill *) VAR_0)->transaction_id);
      return VAR_2;
    case 129:
      VAR_2 = sizeof (struct lev_copyexec_aux_transaction_cmd_result);
      if (VAR_1 < VAR_2) {
        return -2;
      }
      FUNC_4 (((struct lev_copyexec_aux_transaction_cmd_result *) VAR_0)->result);
      return VAR_2;
  }
  return -3;
}
