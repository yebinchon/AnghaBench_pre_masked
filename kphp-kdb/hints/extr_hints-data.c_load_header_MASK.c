
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int user_index_data ;
typedef TYPE_1__* kfs_file_handle_t ;
typedef int index_header ;
struct TYPE_9__ {int magic; int user_cnt; int log_split_min; int log_split_max; int log_split_mod; int perf_hash; int nohints; scalar_t__ rating_num; int fading; unsigned int user_index_crc32; unsigned int header_crc32; struct TYPE_9__* user_index; scalar_t__ has_crc32; int created_at; scalar_t__ log_pos1_crc32; scalar_t__ log_pos0_crc32; scalar_t__ log_timestamp; scalar_t__ log_pos1; scalar_t__ log_pos0; } ;
struct TYPE_8__ {int offset; int fd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,int,unsigned int*,int) ;
 TYPE_2__* FUNC_2 (int) ;
 int VAR_2 ;
 int * VAR_3 ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int ,int,int ) ;
 scalar_t__ VAR_9 ;
 int FUNC_6 (int ,TYPE_2__*,int) ;
 int VAR_10 ;
 int FUNC_7 (int *) ;
 int VAR_11 ;

int FUNC_8 (kfs_file_handle_t VAR_12) {
  if (VAR_12 == ((void*)0)) {
    VAR_4.magic = VAR_0;

    VAR_4.user_cnt = 0;
    VAR_4.user_index = ((void*)0);

    VAR_4.log_pos0 = 0;
    VAR_4.log_pos1 = 0;
    VAR_4.log_timestamp = 0;
    VAR_4.log_split_min = 0;
    VAR_4.log_split_max = 1;
    VAR_4.log_split_mod = 1;
    VAR_4.log_pos0_crc32 = 0;
    VAR_4.log_pos1_crc32 = 0;




    VAR_4.perf_hash = -1;
    VAR_4.nohints = 1;


    VAR_4.created_at = FUNC_7 (((void*)0));
    VAR_5 = sizeof (index_header);

    return 0;
  }

  VAR_3[0] = VAR_12->fd;
  int VAR_13 = VAR_12->offset;

  FUNC_0 (FUNC_5 (VAR_3[0], VAR_13, VAR_1) == VAR_13);

  int VAR_14 = sizeof (index_header) - sizeof (long);
  int VAR_15 = FUNC_6 (VAR_3[0], &VAR_4, VAR_14);
  if (VAR_15 < VAR_14) {
    FUNC_3 (VAR_10, "error reading header from index file: read %d bytes instead of %d at position 0: %m\n", VAR_15, VAR_14);
    FUNC_0 (VAR_15 == VAR_14);
    return 0;
  }

  if (VAR_4.magic != VAR_0) {
    FUNC_3 (VAR_10, "bad hints index file header\n");
    FUNC_3 (VAR_10, "magic = 0x%08x // offset = %d\n", VAR_4.magic, VAR_13);
    FUNC_0 (0);
  }




  FUNC_0 (VAR_4.nohints == 1);
  FUNC_0 (VAR_4.perf_hash == -1);


  VAR_14 = sizeof (user_index_data) * (VAR_4.user_cnt + 1);
  VAR_4.user_index = FUNC_2 (VAR_14);
  if (VAR_4.rating_num) {
    FUNC_0 (VAR_4.rating_num == VAR_9);
  }
  FUNC_0 (VAR_4.fading + VAR_2 == 1);

  VAR_15 = FUNC_6 (VAR_3[0], VAR_4.user_index, VAR_14);
  if (VAR_15 < VAR_14) {
    FUNC_3 (VAR_10, "error reading header from index file: read %d bytes instead of %d: %m\n", VAR_15, VAR_14);
    FUNC_0 (VAR_15 == VAR_14);
    return 0;
  }

  if (VAR_4.has_crc32) {
    FUNC_1 (VAR_4.user_index, VAR_14, &VAR_4.user_index_crc32, 1);
    VAR_4.user_index_crc32 = 0;
    unsigned int VAR_16 = VAR_4.header_crc32;
    VAR_4.header_crc32 = 0;
    FUNC_1 (&VAR_4, sizeof (index_header) - sizeof (long), &VAR_16, 1);
  }

  FUNC_0 (VAR_4.log_split_max);
  VAR_7 = VAR_4.log_split_min;
  VAR_6 = VAR_4.log_split_max;
  VAR_8 = VAR_4.log_split_mod;

  VAR_5 = FUNC_4 (&VAR_4) - sizeof (long);
  if (VAR_11 > 1) {
    FUNC_3 (VAR_10, "header loaded %d %d %d\n", VAR_7, VAR_6, VAR_8);
    FUNC_3 (VAR_10, "ok\n");
  }
  return 1;
}
