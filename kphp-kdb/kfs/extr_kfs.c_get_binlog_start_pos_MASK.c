
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kfs_file_info {scalar_t__ kfs_file_type; long long log_pos; scalar_t__ file_size; } ;
typedef TYPE_1__* kfs_replica_handle_t ;
struct TYPE_3__ {int binlog_num; struct kfs_file_info** binlogs; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 long long FUNC_2 (struct kfs_file_info*) ;
 int FUNC_3 (struct kfs_file_info*) ;

long long FUNC_4 (kfs_replica_handle_t VAR_1, int VAR_2, long long *VAR_3) {
  if (!VAR_1 || VAR_2 < 0 || VAR_2 >= VAR_1->binlog_num) {
    return -1;
  }
  int VAR_4 = FUNC_3 (VAR_1->binlogs[VAR_2]);
  if (VAR_4 == -2) {
    return -1;
  }
  if (VAR_4 >= 0) {
    FUNC_0 (FUNC_1 (VAR_4) >= 0);
  }
  struct kfs_file_info *VAR_5 = VAR_1->binlogs[VAR_2];
  FUNC_0 (VAR_5->kfs_file_type == VAR_0 && VAR_5->log_pos >= 0 && VAR_5->file_size >= 0);
  if (VAR_3) {
    *VAR_3 = VAR_5->log_pos + FUNC_2 (VAR_5);
  }
  return VAR_5->log_pos;
}
