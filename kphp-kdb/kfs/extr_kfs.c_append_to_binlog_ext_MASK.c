
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct kfs_replica {int binlog_num; struct kfs_file_info** binlogs; } ;
struct kfs_file_info {scalar_t__ log_pos; scalar_t__ kfs_file_type; char* filename; int kfs_headers; long long file_size; struct kfs_replica* replica; } ;
typedef TYPE_1__* kfs_file_handle_t ;
struct TYPE_3__ {int fd; int lock; int offset; struct kfs_file_info* info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int,int) ;
 int FUNC_3 (int ,char*,char*,...) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_4 (int,int ) ;
 long long FUNC_5 (int,int ,int ) ;
 int FUNC_6 (char*,int ) ;
 int VAR_5 ;

long long FUNC_7 (kfs_file_handle_t VAR_6, int VAR_7) {
  FUNC_0 (VAR_6 && VAR_6->info && VAR_6->info->log_pos >= 0 && VAR_6->info->kfs_file_type == VAR_4 && VAR_6->info->replica);

  int VAR_8, VAR_9 = -1;
  struct kfs_file_info *VAR_10 = VAR_6->info;
  struct kfs_replica *VAR_11 = VAR_10->replica;

  if (VAR_6->fd >= 0) {
    VAR_9 = VAR_6->fd;
    FUNC_0 (FUNC_1 (VAR_6->fd) >= 0);
    VAR_6->fd = -1;
  }

  if (VAR_11 && (!VAR_11->binlog_num || VAR_11->binlogs[VAR_11->binlog_num - 1] != VAR_10)) {
    FUNC_3 (VAR_5, "cannot append to last read binlog file %s: newer binlog %s already exists\n", VAR_10->filename, VAR_11->binlogs[VAR_11->binlog_num - 1]->filename);
    return -1;
  }

  VAR_8 = FUNC_6 (VAR_10->filename, VAR_7 ? VAR_1 : VAR_2);
  if (VAR_8 < 0) {
    FUNC_3 (VAR_5, "cannot reopen binlog file %s in write mode: %m\n", VAR_10->filename);
    return -1;
  }
  if (VAR_9 > 0 && VAR_8 != VAR_9) {
    FUNC_0 (FUNC_2 (VAR_8, VAR_9) == VAR_9);
    FUNC_1 (VAR_8);
    VAR_8 = VAR_9;
  }
  long long VAR_12 = FUNC_5 (VAR_8, 0, VAR_3);
  FUNC_0 (VAR_12 > VAR_10->kfs_headers * 4096);
  VAR_10->file_size = VAR_12;
  VAR_6->fd = VAR_8;
  VAR_6->lock = 0;
  VAR_6->offset = VAR_10->kfs_headers * 4096;

  if (FUNC_4 (VAR_8, VAR_0) <= 0) {
    FUNC_3 (VAR_5, "cannot lock binlog file %s for writing\n", VAR_10->filename);
    return -1;
  }

  VAR_6->lock = -1;

  return VAR_10->log_pos + VAR_12 - VAR_6->offset;
}
