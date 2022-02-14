
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int user_index_data ;
typedef int index_header ;
struct TYPE_5__ {int user_cnt; int log_split_min; int log_split_max; int log_split_mod; struct TYPE_5__* user_index; int created_at; scalar_t__ log_pos1_crc32; scalar_t__ log_pos0_crc32; scalar_t__ log_timestamp; scalar_t__ log_pos1; scalar_t__ log_pos0; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int * VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,char*,int) ;
 TYPE_1__* FUNC_5 (int) ;
 int FUNC_6 (int ,TYPE_1__*,int) ;
 int VAR_7 ;
 int FUNC_7 (int *) ;
 int VAR_8 ;

int FUNC_8 (char *VAR_9) {
  if (FUNC_4 (0, VAR_9, -1) == -1) {

    VAR_2.user_cnt = 0;
    VAR_2.user_index = ((void*)0);

    VAR_2.log_pos0 = 0;
    VAR_2.log_pos1 = 0;
    VAR_2.log_timestamp = 0;
    VAR_2.log_split_min = 0;
    VAR_2.log_split_max = 1000000000;
    VAR_2.log_split_mod = 1;
    VAR_2.log_pos0_crc32 = 0;
    VAR_2.log_pos1_crc32 = 0;

    VAR_2.created_at = FUNC_7 (((void*)0));
    VAR_3 = sizeof (index_header);

    return 0;
  }


  FUNC_0 (FUNC_3 (VAR_1[0], 0, VAR_0) == 0);

  int VAR_10 = sizeof (index_header) - sizeof (long);
  int VAR_11 = FUNC_6 (VAR_1[0], &VAR_2, VAR_10);
  if (VAR_11 != VAR_10) {
    FUNC_1 (VAR_7, "error reading header from index file: read %d bytes instead of %d at position 0: %m\n", VAR_11, VAR_10);
  }
  FUNC_0 (VAR_11 == VAR_10);

  VAR_10 = sizeof (user_index_data) * (VAR_2.user_cnt + 1);
  VAR_2.user_index = FUNC_5 (VAR_10);

  VAR_11 = FUNC_6 (VAR_1[0], VAR_2.user_index, VAR_10);
  if (VAR_11 != VAR_10) {
    FUNC_1 (VAR_7, "error reading header from index file: read %d bytes instead of %d: %m\n", VAR_11, VAR_10);
  }
  FUNC_0 (VAR_11 == VAR_10);

  FUNC_0 (VAR_2.log_split_max);
  VAR_5 = VAR_2.log_split_min;
  VAR_4 = VAR_2.log_split_max;
  VAR_6 = VAR_2.log_split_mod;

  VAR_3 = FUNC_2 (&VAR_2) - sizeof (long);
  if (VAR_8 > 1) {
    FUNC_1 (VAR_7, "header loaded %d %d %d\n", VAR_5, VAR_4, VAR_6);
    FUNC_1 (VAR_7, "ok\n");
  }
  return 1;
}
