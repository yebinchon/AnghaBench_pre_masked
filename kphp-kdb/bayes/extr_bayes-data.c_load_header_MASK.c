
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int user_index_data ;
typedef TYPE_1__* kfs_file_handle_t ;
typedef int index_header ;
struct TYPE_11__ {int cnt; scalar_t__ ngood; scalar_t__ nbad; } ;
struct TYPE_10__ {int user_cnt; int log_split_min; int log_split_max; int log_split_mod; scalar_t__ teach_messages; scalar_t__ black_list_size; struct TYPE_10__* user_index; int created_at; scalar_t__ log_pos1_crc32; scalar_t__ log_pos0_crc32; scalar_t__ log_timestamp; scalar_t__ log_pos1; scalar_t__ log_pos0; } ;
struct TYPE_9__ {int fd; int offset; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (scalar_t__) ;
 int* VAR_1 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_6__ VAR_2 ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int,int,int ) ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;
 TYPE_2__* FUNC_8 (int) ;
 int FUNC_9 (int,TYPE_2__*,int) ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_10 (int *) ;
 int VAR_11 ;

int FUNC_11 (kfs_file_handle_t VAR_12) {
  if (VAR_12 == ((void*)0)) {
    VAR_1[0] = -1;

    VAR_3.user_cnt = 0;
    VAR_3.user_index = ((void*)0);

    VAR_3.log_pos0 = 0;
    VAR_3.log_pos1 = 0;
    VAR_3.log_timestamp = 0;
    VAR_3.log_split_min = 0;
    VAR_3.log_split_max = 1;
    VAR_3.log_split_mod = 1;
    VAR_3.log_pos0_crc32 = 0;
    VAR_3.log_pos1_crc32 = 0;

    VAR_3.teach_messages = 0;
    VAR_3.black_list_size = 0;

    VAR_3.created_at = FUNC_10 (((void*)0));
    VAR_4 = sizeof (index_header);

    VAR_2.nbad = VAR_2.ngood = 0;
    FUNC_6 (&VAR_2.cnt);
    FUNC_7 (&VAR_2.cnt, VAR_8);

    return 0;
  }

  VAR_1[0] = VAR_12->fd;
  int VAR_13 = VAR_12->offset;


  FUNC_0 (FUNC_5 (VAR_1[0], VAR_13, VAR_0) == VAR_13);

  int VAR_14 = sizeof (index_header) - sizeof (long);
  int VAR_15 = FUNC_9 (VAR_1[0], &VAR_3, VAR_14);
  if (VAR_15 != VAR_14) {
    FUNC_3 (VAR_9, "error reading header from index file: read %d bytes instead of %d at position %d: %m\n", VAR_15, VAR_14, VAR_13);
    FUNC_0 (VAR_15 == VAR_14);
  }

  VAR_14 = sizeof (user_index_data) * (VAR_3.user_cnt + 1);
  VAR_3.user_index = FUNC_8 (VAR_14);

  VAR_15 = FUNC_9 (VAR_1[0], VAR_3.user_index, VAR_14);
  if (VAR_15 != VAR_14) {
    FUNC_3 (VAR_9, "error reading header from index file: read %d bytes instead of %d: %m\n", VAR_15, VAR_14);
    FUNC_0 (VAR_15 == VAR_14);
  }

  FUNC_0 (VAR_3.log_split_max);
  VAR_6 = VAR_3.log_split_min;
  VAR_5 = VAR_3.log_split_max;
  VAR_7 = VAR_3.log_split_mod;

  VAR_4 = FUNC_4 (&VAR_3) - sizeof (long);

  FUNC_1 (&VAR_2);
  FUNC_2 (VAR_3.black_list_size);

  VAR_10 = VAR_3.teach_messages;

  if (VAR_11 > 1) {
    FUNC_3 (VAR_9, "header loaded %d %d %d %d\n", VAR_1[0], VAR_6, VAR_5, VAR_7);
    FUNC_3 (VAR_9, "ok\n");
  }
  return 1;
}
