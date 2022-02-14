
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_user_list_entry {long long user_id; } ;
struct TYPE_2__ {int tot_users; } ;


 struct file_user_list_entry** VAR_0 ;
 TYPE_1__ VAR_1 ;

struct file_user_list_entry *FUNC_0 (long long VAR_2) {
  int VAR_3 = -1, VAR_4 = VAR_1.tot_users, VAR_5;
  if (VAR_4 <= 0) {
    return 0;
  }
  while (VAR_4 - VAR_3 > 1) {
    VAR_5 = ((VAR_3 + VAR_4) >> 1);
    if (VAR_2 < VAR_0[VAR_5]->user_id) { VAR_4 = VAR_5; } else { VAR_3 = VAR_5; }
  }
  if (VAR_3 >= 0 && VAR_0[VAR_3]->user_id == VAR_2) {
    return VAR_0[VAR_3];
  }
  return 0;
}
