
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int binlogs; int cur_log_pos; int mutex_write; TYPE_2__** B; } ;
typedef TYPE_1__ volume_t ;
struct stat {int st_size; int st_mtime; } ;
struct TYPE_5__ {int dir_id; int fd_rdonly; int fd_wronly; int size; int prefix; int abs_filename; int mtime; } ;
typedef TYPE_2__ storage_binlog_file_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,struct stat*) ;
 scalar_t__ FUNC_2 (int,int ) ;
 scalar_t__ FUNC_3 (unsigned char*,unsigned char*,int const) ;
 void* FUNC_4 (int ,int ) ;
 int const FUNC_5 (int,unsigned char*,int const,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

int FUNC_8 (volume_t *VAR_11, int VAR_12) {
  int VAR_13;
  for (VAR_13 = 0; VAR_13 < VAR_11->binlogs; VAR_13++) {
    storage_binlog_file_t *VAR_14 = VAR_11->B[VAR_13];
    if (VAR_14->dir_id == VAR_12) {
      if (VAR_14->fd_rdonly >= 0 || VAR_14->fd_wronly >= 0) {
        return -1;
      }
      int VAR_15 = FUNC_4 (VAR_14->abs_filename, VAR_1);
      if (VAR_15 < 0) {
        return VAR_6;
      }
      struct stat VAR_16;
      if (FUNC_1 (VAR_15, &VAR_16) < 0) {
        FUNC_0 (VAR_15);
        return VAR_5;
      }
      if (VAR_10) {
        VAR_14->size = VAR_16.st_size;
        VAR_14->mtime = VAR_16.st_mtime;
        VAR_14->fd_rdonly = VAR_15;
        return 0;
      }

      FUNC_6 (&VAR_11->mutex_write);
      if (VAR_16.st_size != VAR_11->cur_log_pos) {
        FUNC_0 (VAR_15);
        FUNC_7 (&VAR_11->mutex_write);
        return VAR_8;
      }
      int VAR_17, VAR_18 = 0, VAR_19 = 0;
      for (VAR_17 = 0; VAR_17 < VAR_11->binlogs; VAR_17++) {
        if (VAR_11->B[VAR_17]->prefix && VAR_11->B[VAR_17]->size == VAR_11->cur_log_pos && VAR_11->B[VAR_17]->fd_rdonly >= 0) {
          VAR_18 = 1;
          break;
        }
      }
      if (VAR_18) {
        unsigned char VAR_20[VAR_3], VAR_21[VAR_3];
        const int VAR_22 = (VAR_3 < VAR_16.st_size) ? VAR_3 : VAR_16.st_size;
        if (VAR_22 != FUNC_5 (VAR_15, VAR_20, VAR_22, VAR_11->cur_log_pos - VAR_22)) {
          VAR_19 = VAR_7;
        } else {
          for (VAR_17 = 0; VAR_17 < VAR_11->binlogs; VAR_17++) {
            if (VAR_11->B[VAR_17]->prefix && VAR_11->B[VAR_17]->size == VAR_11->cur_log_pos && VAR_11->B[VAR_17]->fd_rdonly >= 0) {
              if (VAR_22 != FUNC_5 (VAR_11->B[VAR_17]->fd_rdonly, VAR_21, VAR_22, VAR_11->cur_log_pos - VAR_22)) {
                VAR_19 = VAR_7;
                break;
              }
              if (FUNC_3 (VAR_20, VAR_21, VAR_22)) {
                VAR_19 = VAR_9;
              }
              break;
            }
          }
        }
      }
      if (!VAR_19) {
        VAR_14->prefix = 1;
        VAR_14->size = VAR_16.st_size;
        VAR_14->fd_rdonly = VAR_15;
        VAR_14->fd_wronly = FUNC_4 (VAR_14->abs_filename, VAR_2);
        if (FUNC_2 (VAR_14->fd_wronly, VAR_0) <= 0) {
          FUNC_0 (VAR_14->fd_wronly);
          VAR_14->fd_wronly = -1;
        }
      }
      FUNC_7 (&VAR_11->mutex_write);
      return VAR_19;
    }
  }
  return VAR_4;
}
