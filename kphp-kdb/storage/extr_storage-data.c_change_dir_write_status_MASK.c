
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int disabled; int binlogs; scalar_t__ cur_log_pos; int mutex_write; TYPE_3__** B; } ;
typedef TYPE_1__ volume_t ;
struct stat {scalar_t__ st_size; } ;
struct TYPE_7__ {int disabled; int st_fsync; int st_read; } ;
typedef TYPE_2__ storage_dir_t ;
struct TYPE_8__ {int dir_id; int fd_rdonly; int fd_wronly; int st_fsync; int st_read; int abs_filename; } ;
typedef TYPE_3__ storage_binlog_file_t ;


 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 int FUNC_1 (int,struct stat*) ;
 scalar_t__ FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,char*,int ) ;
 int VAR_6 ;

int FUNC_8 (int VAR_7, int VAR_8) {
  int VAR_9 = 1 << VAR_7;
  int VAR_10 = VAR_8 << VAR_7;
  int VAR_11, VAR_12;
  int VAR_13 = 0;
  if (VAR_7 < 0 || VAR_7 >= VAR_5) {
    return -1;
  }
  storage_dir_t *VAR_14 = VAR_0 + VAR_7;
  if (VAR_14->disabled == VAR_8) {
    return 0;
  }
  for (VAR_11 = 0; VAR_11 < VAR_6; VAR_11++) {
    volume_t *VAR_15 = VAR_4[VAR_11];
    storage_binlog_file_t *VAR_16 = ((void*)0);
    if ((VAR_15->disabled & VAR_9) != VAR_10) {
      for (VAR_12 = 0; VAR_12 < VAR_15->binlogs; VAR_12++) {
        if (VAR_15->B[VAR_12]->dir_id == VAR_7) {
          VAR_16 = VAR_15->B[VAR_12];
          break;
        }
      }
      if (VAR_16) {
        VAR_15->disabled ^= VAR_9;
        if (VAR_8) {
          if (VAR_16->fd_rdonly >= 0) {
            FUNC_0 (VAR_16->fd_rdonly);
            VAR_16->fd_rdonly = -1;
          }
          FUNC_5 (&VAR_15->mutex_write);
          if (VAR_16->fd_wronly >= 0) {
            FUNC_0 (VAR_16->fd_wronly);
            VAR_16->fd_wronly = -1;
          }
          FUNC_6 (&VAR_15->mutex_write);
        } else {
          if (VAR_16->fd_rdonly < 0) {
            int VAR_17 = FUNC_4 (VAR_16->abs_filename, VAR_2);
            if (VAR_17 >= 0) {
              VAR_16->fd_rdonly = VAR_17;
            }
          }
          FUNC_5 (&VAR_15->mutex_write);
          if (VAR_16->fd_wronly < 0) {
            int VAR_18 = FUNC_4 (VAR_16->abs_filename, VAR_3);
            if (VAR_18 >= 0) {
              struct stat VAR_19;
              if (!FUNC_1 (VAR_18, &VAR_19) && VAR_19.st_size == VAR_15->cur_log_pos && FUNC_2 (VAR_18, VAR_1)) {
                VAR_16->fd_wronly = VAR_18;
              } else {
                FUNC_7 (1, "Didn't open %s in write mode.\n", VAR_16->abs_filename);
                FUNC_0 (VAR_18);
              }
            }
          }
          FUNC_6 (&VAR_15->mutex_write);
          FUNC_3 (&VAR_16->st_read, 0, sizeof (VAR_16->st_read));
          FUNC_3 (&VAR_16->st_fsync, 0, sizeof (VAR_16->st_fsync));
        }
        VAR_13++;
      }
    }
  }
  VAR_14->disabled = VAR_8;
  if (!VAR_8) {
    FUNC_3 (&VAR_14->st_read, 0, sizeof (VAR_14->st_read));
    FUNC_3 (&VAR_14->st_fsync, 0, sizeof (VAR_14->st_fsync));
  }
  return VAR_13;
}
