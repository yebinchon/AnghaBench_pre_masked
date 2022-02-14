
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int user ;
typedef int kfs_file_handle_t ;
struct TYPE_7__ {int user_cnt; int log_pos1_crc32; int log_pos1; int log_timestamp; } ;
struct TYPE_6__ {struct TYPE_6__* prev_used; struct TYPE_6__* next_used; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 () ;
 int VAR_9 ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_1__* VAR_10 ;
 int VAR_11 ;

int FUNC_7 (kfs_file_handle_t VAR_12) {
  int VAR_13;

  if (VAR_11 > 1) {
    FUNC_2 (VAR_8, "Init_all started\n");
  }

  VAR_7 = 1;

  FUNC_3 (&VAR_1);

  int VAR_14 = FUNC_4 (VAR_12);

  VAR_6 = VAR_2.log_timestamp;
  VAR_5 = VAR_2.log_pos1;
  VAR_4 = VAR_2.log_pos1_crc32;

  VAR_9 = VAR_3 = VAR_2.user_cnt;

  if (VAR_9 < 10000000) {
    VAR_9 = 10000000;
  }

  FUNC_0 (VAR_9 >= 10000000);
  VAR_9 = (int)(VAR_9 * 1.1);

  while (VAR_9 % 2 == 0 || VAR_9 % 5 == 0) {
    VAR_9++;
  }

  VAR_10 = FUNC_1 (sizeof (user) * VAR_9);

  for (VAR_13 = 0; VAR_13 < VAR_9; VAR_13++) {
    FUNC_6 (&VAR_10[VAR_13]);
  }

  VAR_0 = VAR_10;
  VAR_0->next_used = VAR_0->prev_used = VAR_0;

  if (VAR_14) {
    FUNC_5();
  }

  if (VAR_11 > 1) {
    FUNC_2 (VAR_8, "Init_all finished\n");
  }

  return VAR_14;
}
