
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int user_index_data ;
typedef TYPE_1__* kfs_file_handle_t ;
typedef int index_header ;
struct TYPE_8__ {int user_cnt; int log_split_min; int log_split_max; int log_split_mod; struct TYPE_8__* user_index; scalar_t__ multiple_types; int created_at; scalar_t__ log_pos1_crc32; scalar_t__ log_pos0_crc32; scalar_t__ log_timestamp; scalar_t__ log_pos1; scalar_t__ log_pos0; } ;
struct TYPE_7__ {int fd; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 TYPE_2__* FUNC_1 (int) ;
 int* VAR_1 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long long FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,TYPE_2__*,int) ;
 int VAR_7 ;
 int FUNC_6 (int *) ;
 int VAR_8 ;

int FUNC_7 (kfs_file_handle_t VAR_9) {
  if (VAR_9 == ((void*)0)) {
    VAR_1[0] = -1;

    VAR_2.user_cnt = 0;
    VAR_2.user_index = ((void*)0);

    VAR_2.log_pos0 = 0;
    VAR_2.log_pos1 = 0;
    VAR_2.log_timestamp = 0;
    VAR_2.log_split_min = 0;
    VAR_2.log_split_max = 1;
    VAR_2.log_split_mod = 1;
    VAR_2.log_pos0_crc32 = 0;
    VAR_2.log_pos1_crc32 = 0;

    VAR_2.multiple_types = 0;

    VAR_2.created_at = FUNC_6 (((void*)0));
    VAR_3 = sizeof (index_header);

    return 0;
  }

  VAR_1[0] = VAR_9->fd;
  int VAR_10 = VAR_9->offset;


  long long VAR_11 = FUNC_4 (VAR_1[0], VAR_10, VAR_0);
  FUNC_0 (VAR_11 == VAR_10);

  int VAR_12 = sizeof (index_header) - sizeof (long);
  int VAR_13 = FUNC_5 (VAR_1[0], &VAR_2, VAR_12);
  if (VAR_13 != VAR_12) {
    FUNC_2 (VAR_7, "error reading header from index file: read %d bytes instead of %d at position %d: %m\n", VAR_13, VAR_12, VAR_10);
    FUNC_0 (VAR_13 == VAR_12);
  }
  VAR_2.multiple_types += 41;

  VAR_12 = sizeof (user_index_data) * (VAR_2.user_cnt + 1);
  VAR_2.user_index = FUNC_1 (VAR_12);

  VAR_13 = FUNC_5 (VAR_1[0], VAR_2.user_index, VAR_12);
  if (VAR_13 != VAR_12) {
    FUNC_2 (VAR_7, "error reading header from index file: read %d bytes instead of %d: %m\n", VAR_13, VAR_12);
    FUNC_0 (VAR_13 == VAR_12);
  }

  FUNC_0 (VAR_2.log_split_max);
  VAR_5 = VAR_2.log_split_min;
  VAR_4 = VAR_2.log_split_max;
  VAR_6 = VAR_2.log_split_mod;

  VAR_3 = FUNC_3 (&VAR_2) - sizeof (long);

  if (VAR_8 > 1) {
    FUNC_2 (VAR_7, "header loaded %d %d %d %d\n", VAR_1[0], VAR_5, VAR_4, VAR_6);
    FUNC_2 (VAR_7, "ok\n");
  }
  return 1;
}
