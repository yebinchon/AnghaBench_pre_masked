
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int docs; int idx_docs; int index_size; int snapshot_size; struct storage_index_header* Idx_Pos; struct storage_index_header* Md5_Docs; struct storage_index_header* Md5_Pos; int md5_mode; int volume_id; int jump_log_crc32; int jump_log_pos; int log_split_mod; int log_split_max; int log_split_min; TYPE_3__* Snapshot; } ;
typedef TYPE_2__ volume_t ;
struct storage_index_header {scalar_t__ magic; int docs; unsigned int const crc32; int md5_mode; int volume_id; int log_pos1_crc32; int log_pos1; int log_split_mod; int log_split_max; int log_split_min; } ;
struct lev_crc32 {scalar_t__ magic; int docs; unsigned int const crc32; int md5_mode; int volume_id; int log_pos1_crc32; int log_pos1; int log_split_mod; int log_split_max; int log_split_min; } ;
typedef TYPE_3__* kfs_file_handle_t ;
struct TYPE_7__ {TYPE_1__* info; int fd; } ;
struct TYPE_5__ {int file_size; int filename; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct storage_index_header*,unsigned int const) ;
 int VAR_1 ;
 int FUNC_1 () ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char*,...) ;
 scalar_t__ FUNC_3 (struct storage_index_header*,struct storage_index_header*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 void* FUNC_4 (unsigned int const) ;

int FUNC_5 (volume_t *VAR_8) {
  int VAR_9;
  kfs_file_handle_t VAR_10 = VAR_8->Snapshot;
  if (VAR_10 == ((void*)0)) {
    VAR_8->index_size = 0;

    VAR_8->jump_log_pos = 0;
    VAR_8->jump_log_crc32 = 0;
    VAR_8->docs = VAR_8->idx_docs = 0;
    return 0;
  }
  VAR_4 = VAR_10->fd;
  struct storage_index_header VAR_11;
  FUNC_1 ();
  FUNC_0 (&VAR_11, sizeof (struct storage_index_header));
  if (VAR_11.magic != VAR_0) {
    FUNC_2 ("index file is not for storage\n");
    return -1;
  }

  VAR_8->log_split_min = VAR_11.log_split_min;
  VAR_8->log_split_max = VAR_11.log_split_max;
  VAR_8->log_split_mod = VAR_11.log_split_mod;

  VAR_8->index_size = VAR_10->info->file_size;
  VAR_8->jump_log_pos = VAR_11.log_pos1;
  VAR_8->jump_log_crc32 = VAR_11.log_pos1_crc32;

  VAR_8->docs = VAR_8->idx_docs = VAR_11.docs;
  VAR_8->volume_id = VAR_11.volume_id;
  VAR_8->md5_mode = VAR_11.md5_mode;

  if (VAR_8->md5_mode) {
    const unsigned VAR_12 = VAR_11.docs << 4;
    const unsigned VAR_13 = VAR_12 >> 1;
    VAR_8->Md5_Docs = FUNC_4 (VAR_12);
    FUNC_0 (VAR_8->Md5_Docs, VAR_12);
    VAR_8->Md5_Pos = FUNC_4 (VAR_13);
    FUNC_0 (VAR_8->Md5_Pos, VAR_13);
    for (VAR_9 = 1; VAR_9 < VAR_11.docs; VAR_9++) {
      if (FUNC_3 (&VAR_8->Md5_Docs[(VAR_9-1) << 4], &VAR_8->Md5_Docs[VAR_9 << 4], 16) >= 0) {
        FUNC_2 ("md5 table is corrupted in snapshot: %s\n", VAR_10->info->filename);
        return -1;
      }
    }
  } else {
    const unsigned VAR_14 = (VAR_11.docs + 1) << 3;
    VAR_8->Idx_Pos = FUNC_4 (VAR_14);
    FUNC_0 (VAR_8->Idx_Pos, VAR_14);
  }

  const unsigned VAR_15 = ~VAR_2;
  struct lev_crc32 VAR_16;
  FUNC_0 (&VAR_16, sizeof (struct lev_crc32));
  if (VAR_15 != VAR_16.crc32) {
    FUNC_2 ("crc32 not matched in snapshot: %s\n", VAR_10->info->filename);
    return -2;
  }

  VAR_6 += VAR_8->snapshot_size = VAR_1;
  VAR_5 += VAR_8->index_size = VAR_10->info->file_size;
  VAR_3 += VAR_8->idx_docs;
  VAR_7 += VAR_8->idx_docs;
  return 0;
}
