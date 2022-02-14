
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct results_queue_entry {unsigned int result; int transaction_id; int binlog_pos; } ;
struct lev_copyexec_main_transaction_status {int result; int transaction_id; scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 struct results_queue_entry* FUNC_1 () ;
 int FUNC_2 (int,char*) ;

int FUNC_3 (struct lev_copyexec_main_transaction_status *VAR_1) {
  struct results_queue_entry *VAR_2 = FUNC_1 ();
  if (VAR_2 == ((void*)0)) {
    FUNC_2 (3, "Results queue full. Stop binlog replaying.\n");
    return -1;
  }
  VAR_2->binlog_pos = FUNC_0 ();
  VAR_2->result = (((unsigned)(VAR_1->type - VAR_0)) << 28) | (VAR_1->result & 0x0fffffff);
  VAR_2->transaction_id = VAR_1->transaction_id;

  return 0;
}
