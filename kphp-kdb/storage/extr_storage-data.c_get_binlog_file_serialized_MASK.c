
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int last_fail_time; int sequential_fails; int success; int fails; } ;
struct TYPE_5__ {int fails; int success; int sequential_fails; int last_fail_time; } ;
struct TYPE_7__ {scalar_t__ fd_rdonly; scalar_t__ fd_wronly; char* abs_filename; int dir_id; TYPE_2__ st_read; scalar_t__ size; TYPE_1__ st_fsync; } ;
typedef TYPE_3__ storage_binlog_file_t ;


 int FUNC_0 (char*,char*,int,int,char*,int,int,int,int,int,int,int ,int ,int ,int ) ;
 scalar_t__ FUNC_1 (char*) ;

__attribute__((used)) static int FUNC_2 (char *VAR_0, storage_binlog_file_t *VAR_1) {
  int VAR_2 = 0;
  if (VAR_1->fd_rdonly >= 0) { VAR_2 |= 1; }
  if (VAR_1->fd_wronly >= 0) { VAR_2 |= 2; }
  return FUNC_0 (VAR_0, "a:12:{"
                         "s:4:\"mode\";i:%d;"
                         "s:4:\"path\";s:%d:\"%s\";"
                         "s:6:\"dir_id\";i:%d;"
                         "s:4:\"size\";i:%d;"
                         "s:19:\"read_last_fail_time\";i:%d;"
                         "s:21:\"read_sequential_fails\";i:%d;"
                         "s:12:\"read_success\";d:%lld;"
                         "s:10:\"read_fails\";d:%lld;"
                         "s:20:\"fsync_last_fail_time\";i:%d;"
                         "s:22:\"fsync_sequential_fails\";i:%d;"
                         "s:13:\"fsync_success\";d:%lld;"
                         "s:11:\"fsync_fails\";d:%lld;"
                       "}",
    VAR_2,
    (int) FUNC_1 (VAR_1->abs_filename), VAR_1->abs_filename,
    VAR_1->dir_id,
    (int) VAR_1->size,
    VAR_1->st_read.last_fail_time,
    VAR_1->st_read.sequential_fails,
    VAR_1->st_read.success,
    VAR_1->st_read.fails,
    VAR_1->st_fsync.last_fail_time,
    VAR_1->st_fsync.sequential_fails,
    VAR_1->st_fsync.success,
    VAR_1->st_fsync.fails
    );
}
