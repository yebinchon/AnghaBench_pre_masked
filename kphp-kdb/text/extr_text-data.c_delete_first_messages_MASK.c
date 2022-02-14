
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int last_local_id; } ;
typedef TYPE_1__ user_t ;
struct file_user_list_entry {int user_last_local_id; } ;


 scalar_t__ FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 struct file_user_list_entry* FUNC_2 (int) ;

int FUNC_3 (int VAR_0, int VAR_1) {
  if (FUNC_0 (VAR_0) < 0 || VAR_1 <= 0) {
    return -1;
  }
  user_t *VAR_2 = FUNC_1 (VAR_0);
  if (VAR_2) {
    if (VAR_1 > VAR_2->last_local_id + 1) {
      VAR_1 = VAR_2->last_local_id + 1;
    }
  } else {
    struct file_user_list_entry *VAR_3 = FUNC_2 (VAR_0);
    if (!VAR_3) {
      return -1;
    }
    if (VAR_1 > VAR_3->user_last_local_id + 1) {
      VAR_1 = VAR_3->user_last_local_id + 1;
    }
  }

  return VAR_1;
}
