
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct statfs {double f_bavail; double f_blocks; } ;
struct TYPE_6__ {int last_fail_time; int fails; int success; int sequential_fails; } ;
struct TYPE_5__ {int last_fail_time; int sequential_fails; int success; int fails; } ;
struct TYPE_7__ {char* path; int binlogs; TYPE_2__ st_fsync; TYPE_1__ st_read; scalar_t__ scanned; scalar_t__ disabled; int pending_aio_connections; } ;
typedef TYPE_3__ storage_dir_t ;


 int FUNC_0 (char*,char*,int,char*,int,int,int,int,int,int,int,int,int ,int ,int ,double,int ) ;
 int FUNC_1 (char*,struct statfs*) ;
 scalar_t__ FUNC_2 (char*) ;

__attribute__((used)) static int FUNC_3 (char *VAR_0, storage_dir_t *VAR_1) {
  struct statfs VAR_2;
  FUNC_1 (VAR_1->path, &VAR_2);
  double VAR_3 = (100.0 * VAR_2.f_bavail) / VAR_2.f_blocks;
  return FUNC_0 (VAR_0, "a:14:{"
                            "s:4:\"path\";s:%d:\"%s\";"
                            "s:7:\"binlogs\";i:%d;"
                            "s:8:\"disabled\";i:%d;"
                            "s:7:\"scanned\";i:%d;"
                            "s:19:\"read_last_fail_time\";i:%d;"
                            "s:21:\"read_sequential_fails\";i:%d;"
                            "s:12:\"read_success\";d:%lld;"
                            "s:10:\"read_fails\";d:%lld;"
                            "s:20:\"fsync_last_fail_time\";i:%d;"
                            "s:22:\"fsync_sequential_fails\";i:%d;"
                            "s:13:\"fsync_success\";d:%lld;"
                            "s:11:\"fsync_fails\";d:%lld;"
                            "s:18:\"free_space_percent\";d:%.10lf;"
                            "s:23:\"pending_aio_connections\";i:%d;"
                          "}",
   (int) FUNC_2 (VAR_1->path), VAR_1->path,
   VAR_1->binlogs,
   (int) VAR_1->disabled,
   (int) VAR_1->scanned,
   VAR_1->st_read.last_fail_time,
   VAR_1->st_read.sequential_fails,
   VAR_1->st_read.success,
   VAR_1->st_read.fails,
   VAR_1->st_fsync.last_fail_time,
   VAR_1->st_fsync.sequential_fails,
   VAR_1->st_fsync.success,
   VAR_1->st_fsync.fails,
   VAR_3,
   VAR_1->pending_aio_connections
   );
}
