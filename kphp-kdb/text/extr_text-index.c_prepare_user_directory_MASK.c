
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_user_list_entry {long long user_id; } ;
struct TYPE_2__ {int tot_users; void* user_data_offset; void* user_list_offset; } ;


 TYPE_1__ VAR_0 ;
 int VAR_1 ;
 scalar_t__* VAR_2 ;
 struct file_user_list_entry** VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_5 ;
 int FUNC_1 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 long long FUNC_2 (int) ;
 int VAR_9 ;
 void* VAR_10 ;
 int FUNC_3 () ;
 int FUNC_4 (scalar_t__,int) ;
 struct file_user_list_entry** FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;

void FUNC_7 (void) {
  int VAR_11, VAR_12;
  int VAR_13 = sizeof (struct file_user_list_entry) + 4 * (VAR_7 + (VAR_5 ? 3 : VAR_6));
  VAR_9 = VAR_8 * VAR_13 + 16;
  VAR_0.user_list_offset = VAR_10;
  VAR_0.tot_users = VAR_8;
  VAR_0.user_data_offset = VAR_10 + VAR_9 + 4;

  VAR_4 = FUNC_6 (VAR_9);
  VAR_3 = FUNC_5 ((VAR_8 + 1) * sizeof (void *));

  for (VAR_12 = 0; VAR_12 <= VAR_8; VAR_12++) {
    VAR_3[VAR_12] = (struct file_user_list_entry *) (VAR_4 + VAR_13 * VAR_12);
  }

  for (VAR_11 = VAR_12 = 0; VAR_11 < VAR_1; VAR_11++) {
    if (VAR_2[VAR_11]) {
      VAR_3[VAR_12++]->user_id = FUNC_2 (VAR_11);
    }
  }
  FUNC_0 (VAR_12 == VAR_8);
  VAR_3[VAR_12]->user_id = ~(-1LL << 63);

  FUNC_4 (VAR_4, VAR_9);
  FUNC_1 ();
  FUNC_3 ();
}
