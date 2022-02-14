
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int persistent_ts; TYPE_1__* persistent_history; } ;
typedef TYPE_2__ user_t ;
struct file_user_list_entry_search_history {int user_history_max_ts; } ;
struct TYPE_4__ {int cur_events; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int) ;
 int VAR_0 ;

int FUNC_3 (int VAR_1) {
  if (!VAR_0 || FUNC_0 (VAR_1) < 0) {
    return -1;
  }

  user_t *VAR_2 = FUNC_1 (VAR_1);

  if (!VAR_2) {
    struct file_user_list_entry_search_history *VAR_3 = (struct file_user_list_entry_search_history *) FUNC_2 (VAR_1);
    return VAR_3 ? VAR_3->user_history_max_ts + 1 : 1;
  }
  return VAR_2->persistent_ts + 1 + (VAR_2->persistent_history ? VAR_2->persistent_history->cur_events : 0);
}
