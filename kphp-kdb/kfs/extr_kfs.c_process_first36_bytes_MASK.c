
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct lev_start {int type; } ;
struct lev_rotate_from {int crc32; int timestamp; int prev_log_hash; int cur_log_hash; int cur_log_pos; } ;
struct kfs_file_info {char* filename; TYPE_1__* khdr; int log_pos; } ;
struct TYPE_2__ {int log_pos_crc32; int prev_log_time; int prev_log_hash; int file_id_hash; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char*,int,...) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_3 (struct kfs_file_info *VAR_1, int VAR_2, int VAR_3, struct lev_start *VAR_4) {
  switch (VAR_4->type) {
    case 128:
      FUNC_0 (VAR_3 >= sizeof (struct lev_start) - 4);
      VAR_1->log_pos = 0;
      break;
    case 129:
      FUNC_0 (VAR_3 >= sizeof (struct lev_rotate_from));
      VAR_1->log_pos = ((struct lev_rotate_from *)VAR_4)->cur_log_pos;
      if (VAR_1->khdr && VAR_1->khdr->file_id_hash != ((struct lev_rotate_from *)VAR_4)->cur_log_hash) {
        FUNC_2 (VAR_0, "warning: binlog file %s has different hash in header (%016X) and continue record (%016X)\n", VAR_1->filename, VAR_1->khdr->file_id_hash, ((struct lev_rotate_from *)VAR_4)->cur_log_hash);
        FUNC_0 (FUNC_1 (VAR_2) >= 0);
        return -2;
      }
      if (VAR_1->khdr && VAR_1->khdr->prev_log_hash != ((struct lev_rotate_from *)VAR_4)->prev_log_hash) {
        FUNC_2 (VAR_0, "warning: binlog file %s has different hash of previous binlog in header (%016X) and continue record (%016X)\n", VAR_1->filename, VAR_1->khdr->prev_log_hash, ((struct lev_rotate_from *)VAR_4)->prev_log_hash);
        FUNC_0 (FUNC_1 (VAR_2) >= 0);
        return -2;
      }
      if (VAR_1->khdr && VAR_1->khdr->log_pos_crc32 != ((struct lev_rotate_from *)VAR_4)->crc32) {
        FUNC_2 (VAR_0, "warning: binlog file %s has different crc32 in header (%08X) and continue record (%08X)\n", VAR_1->filename, VAR_1->khdr->log_pos_crc32, ((struct lev_rotate_from *)VAR_4)->crc32);
        FUNC_0 (FUNC_1 (VAR_2) >= 0);
        return -2;
      }
      if (VAR_1->khdr && VAR_1->khdr->prev_log_time != ((struct lev_rotate_from *)VAR_4)->timestamp) {
        FUNC_2 (VAR_0, "warning: binlog file %s has different timestamp in header (%d) and continue record (%d)\n", VAR_1->filename, VAR_1->khdr->prev_log_time, ((struct lev_rotate_from *)VAR_4)->timestamp);
        FUNC_0 (FUNC_1 (VAR_2) >= 0);
        return -2;
      }
      break;
    default:
      FUNC_2 (VAR_0, "warning: binlog file %s begins with wrong entry type %08x\n", VAR_1->filename, VAR_4->type);
      FUNC_0 (FUNC_1 (VAR_2) >= 0);
      return -2;
  }
  return 0;
}
