
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct lev_copyexec_result_data {scalar_t__ random_tag; scalar_t__ binlog_pos; int result; int transaction_id; } ;
struct TYPE_5__ {scalar_t__ random_tag; scalar_t__ binlog_pos; void* last_action_time; void* last_data_time; void* first_data_time; } ;
typedef TYPE_1__ host_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_1__* FUNC_2 (scalar_t__,int ) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,...) ;
 int FUNC_4 () ;
 void* VAR_0 ;
 int FUNC_5 (TYPE_1__*,int ,int ) ;

__attribute__((used)) static int FUNC_6 (host_t *VAR_1, struct lev_copyexec_result_data *VAR_2) {
  if (VAR_1 == ((void*)0)) {
    VAR_1 = FUNC_2 (VAR_2->random_tag, 0);
    if (VAR_1 == ((void*)0)) {
      FUNC_3 ("set_result: get_host_by_random_tag (0x%llx) returns NULL. (log_cur_pos: %lld)\n", VAR_2->random_tag, FUNC_4 ());
      FUNC_1 (1);
    }
  }
  FUNC_0 (VAR_1->random_tag == VAR_2->random_tag);
  if (VAR_1->binlog_pos >= VAR_2->binlog_pos) {
    FUNC_3 ("set_result: H->binlog_pos >= E->binlog_pos, H->binlog_pos = 0x%llx, E->binlog_pos = 0x%llx. (log_cur_pos: %lld)\n", VAR_1->binlog_pos, VAR_2->binlog_pos, FUNC_4 ());
    FUNC_1 (1);
    return -1;
  }
  VAR_1->binlog_pos = VAR_2->binlog_pos;
  if (!VAR_1->first_data_time) {
    VAR_1->first_data_time = VAR_0;
  }
  VAR_1->last_data_time = VAR_1->last_action_time = VAR_0;
  return FUNC_5 (VAR_1, VAR_2->transaction_id, VAR_2->result);
}
