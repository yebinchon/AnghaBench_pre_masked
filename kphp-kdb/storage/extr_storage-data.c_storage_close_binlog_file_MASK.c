
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int binlogs; int mutex_write; TYPE_2__** B; } ;
typedef TYPE_1__ volume_t ;
struct TYPE_5__ {int dir_id; int fd_rdonly; int fd_wronly; int size; scalar_t__ prefix; } ;
typedef TYPE_2__ storage_binlog_file_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3 (volume_t *VAR_0, int VAR_1) {
  int VAR_2;
  for (VAR_2 = 0; VAR_2 < VAR_0->binlogs; VAR_2++) {
    storage_binlog_file_t *VAR_3 = VAR_0->B[VAR_2];
    if (VAR_3->dir_id == VAR_1) {
      if (VAR_3->fd_rdonly >= 0) {
        FUNC_0 (VAR_3->fd_rdonly);
        VAR_3->fd_rdonly = -1;
      }
      FUNC_1 (&VAR_0->mutex_write);
      if (VAR_3->fd_wronly >= 0) {
        FUNC_0 (VAR_3->fd_wronly);
        VAR_3->fd_wronly = -1;
      }
      FUNC_2 (&VAR_0->mutex_write);
      VAR_3->prefix = 0;
      VAR_3->size = -1;
      return 0;
    }
  }
  return -1;
}
