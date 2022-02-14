
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kfs_replica {int binlog_num; struct kfs_file_info** binlogs; } ;
struct kfs_file_info {scalar_t__ log_pos; scalar_t__ kfs_file_type; struct kfs_replica* replica; } ;
typedef TYPE_1__* kfs_file_handle_t ;
struct TYPE_3__ {struct kfs_file_info* info; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;

int FUNC_1 (kfs_file_handle_t VAR_1) {
  FUNC_0 (VAR_1 && VAR_1->info && VAR_1->info->log_pos >= 0 && VAR_1->info->kfs_file_type == VAR_0 && VAR_1->info->replica);

  struct kfs_file_info *VAR_2 = VAR_1->info;
  struct kfs_replica *VAR_3 = VAR_2->replica;

  if (VAR_3 && (!VAR_3->binlog_num || VAR_3->binlogs[VAR_3->binlog_num - 1] != VAR_2)) {
    return 0;
  }
  return 1;
}
