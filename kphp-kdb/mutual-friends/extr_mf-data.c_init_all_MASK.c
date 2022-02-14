
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int user ;
struct TYPE_7__ {int user_cnt; int log_pos1_crc32; int log_pos1; int log_timestamp; } ;
struct TYPE_6__ {struct TYPE_6__* prev_used; struct TYPE_6__* next_used; } ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_4__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (char*) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 () ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;

void FUNC_7 (char *VAR_9) {
  int VAR_10;

  VAR_6 = 1;

  FUNC_2 (&VAR_7);

  int VAR_11 = FUNC_1 (VAR_9);

  VAR_5 = VAR_1.log_timestamp;
  VAR_4 = VAR_1.log_pos1;
  VAR_3 = VAR_1.log_pos1_crc32;

  int VAR_12 = VAR_2 = VAR_1.user_cnt;

  if (VAR_12 < 2400000) {
    VAR_12 = 2400000;
  }

  FUNC_0 (VAR_12 >= 2400000);

  VAR_12 *= 1.1;

  while (VAR_12 % 2 == 0 || VAR_12 % 5 == 0) {
    VAR_12++;
  }

  FUNC_3 (&VAR_7, VAR_12);

  VAR_8 = FUNC_4 (sizeof (user) * VAR_12);

  for (VAR_10 = 0; VAR_10 < VAR_12; VAR_10++) {
    FUNC_6 (&VAR_8[VAR_10]);
  }

  VAR_0 = VAR_8;
  VAR_0->next_used = VAR_0->prev_used = VAR_0;

  if (VAR_11) {
    FUNC_5();
  }
}
