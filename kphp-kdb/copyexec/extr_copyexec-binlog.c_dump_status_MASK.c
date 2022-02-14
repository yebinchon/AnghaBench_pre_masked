
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lev_copyexec_main_transaction_status {int type; int transaction_id; int st_ino; int st_dev; int result; int creation_time; int pid; int mask; int binlog_pos; } ;


 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,char*,int,int ,...) ;
 int VAR_0 ;

void FUNC_4 (struct lev_copyexec_main_transaction_status *VAR_1) {
  int VAR_2 = VAR_1->type & 255;
  if (FUNC_0 ("LEV_COPYEXEC_MAIN_TRANSACTION_STATUS")) {
    return;
  }
  FUNC_2 (VAR_1->type);
  FUNC_3 (VAR_0, "\t%d\t%d\t0x%x\t%d\t%d\t", VAR_1->transaction_id, VAR_1->binlog_pos, VAR_1->mask, VAR_1->pid, VAR_1->creation_time);
  FUNC_1 (VAR_2, VAR_1->result);
  FUNC_3 (VAR_0, "\t%d\t%d\n", VAR_1->st_dev, VAR_1->st_ino);
}
