
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int user ;
typedef int kfs_file_handle_t ;
typedef int entry_t ;
typedef int black_list ;
struct TYPE_6__ {int user_cnt; int log_pos1_crc32; int log_pos1; int log_timestamp; } ;
struct TYPE_5__ {struct TYPE_5__* prev_used; struct TYPE_5__* next_used; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 void* VAR_1 ;
 int FUNC_1 (void*) ;
 void* VAR_2 ;
 TYPE_3__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ) ;
 int VAR_9 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;
 int VAR_10 ;
 void* VAR_11 ;
 void* FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_12 ;
 TYPE_1__* VAR_13 ;

int FUNC_8 (kfs_file_handle_t VAR_14) {
  int VAR_15;

  VAR_9 = 1;

  FUNC_3 (&VAR_12);

  VAR_1 = FUNC_5 (sizeof (black_list));
  FUNC_1 (VAR_1);

  int VAR_16 = FUNC_2 (VAR_14);

  VAR_8 = VAR_3.log_timestamp;
  VAR_7 = VAR_3.log_pos1;
  VAR_6 = VAR_3.log_pos1_crc32;

  int VAR_17 = VAR_5 = VAR_3.user_cnt;

  if (VAR_17 < 1000000) {
    VAR_17 = 1000000;
  }

  FUNC_0 (VAR_17 >= 1000000);
  VAR_17 *= 1.1;

  while (VAR_17 % 2 == 0 || VAR_17 % 5 == 0) {
    VAR_17++;
  }

  FUNC_4 (&VAR_12, VAR_17);
  VAR_13 = FUNC_5 (sizeof (user) * VAR_17);

  for (VAR_15 = 0; VAR_15 < VAR_17; VAR_15++) {
    FUNC_7 (&VAR_13[VAR_15]);
  }

  VAR_0 = VAR_13;
  VAR_0->next_used = VAR_0->prev_used = VAR_0;

  if (VAR_16) {
    FUNC_6();
  }

  if (VAR_4) {
    VAR_2 = FUNC_5 (VAR_10 * sizeof (entry_t));
    VAR_11 = FUNC_5 (4000000 * sizeof (entry_t));
  }

  return VAR_16;
}
