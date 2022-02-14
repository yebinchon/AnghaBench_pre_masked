
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int st_ino; int st_dev; int result; int creation_time; int pid; int mask; int binlog_pos; } ;
typedef TYPE_1__ transaction_t ;
struct lev_copyexec_main_transaction_status {int type; int st_ino; int st_dev; int result; int creation_time; int pid; int mask; int binlog_pos; int transaction_id; } ;


 int FUNC_0 (int ) ;
 TYPE_1__* FUNC_1 (int ,int) ;
 int FUNC_2 (TYPE_1__*,int) ;
 int FUNC_3 (int,char*,int ,int) ;

void FUNC_4 (struct lev_copyexec_main_transaction_status *VAR_0) {
  int VAR_1 = VAR_0->type & 0xff;
  FUNC_3 (3, "tr%d set status %d.\n", VAR_0->transaction_id, (int) VAR_1);
  transaction_t *VAR_2 = FUNC_1 (VAR_0->transaction_id, 1);
  FUNC_0 (VAR_2 != ((void*)0));
  FUNC_2 (VAR_2, VAR_1);
  VAR_2->binlog_pos = VAR_0->binlog_pos;
  VAR_2->mask = VAR_0->mask;
  VAR_2->pid = VAR_0->pid;
  VAR_2->creation_time = VAR_0->creation_time;
  VAR_2->result = VAR_0->result;
  VAR_2->st_dev = VAR_0->st_dev;
  VAR_2->st_ino = VAR_0->st_ino;
}
