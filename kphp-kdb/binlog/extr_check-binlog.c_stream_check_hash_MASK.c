
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct kfs_file_info {TYPE_2__* khdr; int filename; scalar_t__ start; } ;
struct TYPE_9__ {TYPE_1__* F; int type; } ;
typedef TYPE_3__ stream_t ;
struct TYPE_10__ {long long file_hash; } ;
typedef TYPE_4__ kfs_binlog_zip_header_t ;
struct TYPE_8__ {long long file_id_hash; } ;
struct TYPE_7__ {struct kfs_file_info* info; } ;


 int FUNC_0 (char*,int ,int ,long long,long long,...) ;
 int FUNC_1 (char*,int ,int ,long long,long long) ;
 int FUNC_2 (char*,int ,int ,long long,long long) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5 (stream_t *VAR_0, long long VAR_1, long long VAR_2) {
  if (VAR_1 == VAR_2) {
    return;
  }
  if (FUNC_3 (VAR_0)) {
    kfs_binlog_zip_header_t *VAR_3 = (kfs_binlog_zip_header_t *) VAR_0->F->info->start;
    if (VAR_3->file_hash != VAR_2) {
      FUNC_1 ("in %s '%s' zipped header file_hash field (0x%016llx) isn't equal to LEV_ROTATE_TO cur_log_hash field (0x%016llx).", FUNC_4 (VAR_0->type), VAR_0->F->info->filename, VAR_3->file_hash, VAR_2);
    } else {
      FUNC_2 ("in %s '%s' computed file hash (0x%016llx) isn't equal LEV_ROTATE_TO cur_log_hash field (0x%016llx). KFS header probably was truncated during packing.", FUNC_4 (VAR_0->type), VAR_0->F->info->filename, VAR_1, VAR_2);
    }
  } else {
    struct kfs_file_info *VAR_4 = VAR_0->F->info;
    if (!VAR_4->khdr) {
      FUNC_0 ("in %s '%s' computed file hash (0x%016llx) isn't equal LEV_ROTATE_TO cur_log_hash field (0x%016llx). No KFS headers.", FUNC_4 (VAR_0->type), VAR_0->F->info->filename, VAR_1, VAR_2);
    } else if (VAR_4->khdr->file_id_hash != VAR_2) {
      FUNC_0 ("in %s '%s' computed file hash (0x%016llx) isn't equal LEV_ROTATE_TO cur_log_hash field (0x%016llx). file_id_hash in KFS headers is equal to 0x%016llx.",
      FUNC_4 (VAR_0->type), VAR_0->F->info->filename, VAR_1, VAR_2, VAR_4->khdr->file_id_hash);
    }
  }
}
