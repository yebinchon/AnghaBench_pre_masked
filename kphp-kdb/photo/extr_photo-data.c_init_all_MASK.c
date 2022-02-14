
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int user ;
typedef int kfs_file_handle_t ;
struct TYPE_7__ {int user_cnt; int total_photos; int log_pos1_crc32; int log_pos1; int log_timestamp; } ;
struct TYPE_6__ {struct TYPE_6__* prev_used; struct TYPE_6__* next_used; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int ,char*) ;
 int VAR_1 ;
 TYPE_3__ VAR_2 ;
 int VAR_3 ;
 int FUNC_3 () ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ) ;
 int VAR_7 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_7 () ;
 int VAR_10 ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;

int FUNC_9 (kfs_file_handle_t VAR_14) {
  int VAR_15;

  if (VAR_12 > 1) {
    FUNC_2 (VAR_8, "Init_all started\n");
  }

  VAR_7 = 1;

  FUNC_5 (&VAR_13);
  FUNC_6 (&VAR_1);
  FUNC_3();

  int VAR_16 = FUNC_4 (VAR_14);

  VAR_6 = VAR_2.log_timestamp;
  VAR_5 = VAR_2.log_pos1;
  VAR_4 = VAR_2.log_pos1_crc32;

  VAR_10 = VAR_3 = VAR_2.user_cnt;
  VAR_9 = VAR_2.total_photos;

  if (VAR_10 < 200000) {
    VAR_10 = 200000;
  }

  FUNC_0 (VAR_10 >= 200000);
  VAR_10 *= 1.1;



  while (VAR_10 % 2 == 0 || VAR_10 % 5 == 0) {
    VAR_10++;
  }

  VAR_11 = FUNC_1 (sizeof (user) * VAR_10);

  for (VAR_15 = 0; VAR_15 < VAR_10; VAR_15++) {
    FUNC_8 (&VAR_11[VAR_15]);
  }

  VAR_0 = VAR_11;
  VAR_0->next_used = VAR_0->prev_used = VAR_0;

  if (VAR_16) {
    FUNC_7();
  }

  if (VAR_12 > 1) {
    FUNC_2 (VAR_8, "Init_all finished\n");
  }

  return VAR_16;
}
