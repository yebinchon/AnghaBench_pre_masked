
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef TYPE_1__* kfs_file_handle_t ;
typedef int index_header ;
struct TYPE_7__ {int log_split_min; int log_split_max; int log_split_mod; int magic; int created_at; scalar_t__ log_pos1_crc32; scalar_t__ log_pos0_crc32; scalar_t__ log_timestamp; scalar_t__ log_pos1; scalar_t__ log_pos0; } ;
struct TYPE_6__ {int fd; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int* VAR_2 ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (TYPE_2__*) ;
 TYPE_2__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (int,int,int ) ;
 int FUNC_5 (int,TYPE_2__*,int) ;
 int VAR_8 ;
 int FUNC_6 (int *) ;
 int VAR_9 ;

int FUNC_7 (kfs_file_handle_t VAR_10) {
  if (VAR_10 == ((void*)0)) {
    VAR_2[0] = -1;

    VAR_3.log_pos0 = 0;
    VAR_3.log_pos1 = 0;
    VAR_3.log_timestamp = 0;
    VAR_3.log_split_min = 0;
    VAR_3.log_split_max = 1;
    VAR_3.log_split_mod = 1;
    VAR_3.log_pos0_crc32 = 0;
    VAR_3.log_pos1_crc32 = 0;

    VAR_3.created_at = FUNC_6 (((void*)0));
    VAR_4 = sizeof (index_header);

    return 0;
  }

  FUNC_1 ("load_header\n");

  VAR_2[0] = VAR_10->fd;
  int VAR_11 = VAR_10->offset;


  FUNC_0 (FUNC_4 (VAR_2[0], VAR_11, VAR_0) == VAR_11);

  int VAR_12 = sizeof (index_header);
  int VAR_13 = FUNC_5 (VAR_2[0], &VAR_3, VAR_12);
  if (VAR_13 != VAR_12) {
    FUNC_2 (VAR_8, "error reading header from index file: read %d bytes instead of %d at position %d: %m\n", VAR_13, VAR_12, VAR_11);
    FUNC_0 (VAR_13 == VAR_12);
  }

  if (VAR_3.magic != VAR_1) {
    FUNC_2 (VAR_8, "bad support index file header\n");
    FUNC_2 (VAR_8, "magic = 0x%08x // offset = %d\n", VAR_3.magic, VAR_11);
    FUNC_0 (0);
  }

  FUNC_0 (VAR_3.log_split_max);
  VAR_6 = VAR_3.log_split_min;
  VAR_5 = VAR_3.log_split_max;
  VAR_7 = VAR_3.log_split_mod;

  VAR_4 = FUNC_3 (&VAR_3);

  if (VAR_9 > 1) {
    FUNC_2 (VAR_8, "header loaded %d %d %d %d\n", VAR_2[0], VAR_6, VAR_5, VAR_7);
    FUNC_2 (VAR_8, "ok\n");
  }

  return 1;
}
