
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ wronly_binlogs; int binlogs; long long log_readto_pos; TYPE_1__** B; } ;
typedef TYPE_2__ volume_t ;
struct TYPE_4__ {scalar_t__ size; int fd_wronly; int abs_filename; int prefix; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ,...) ;
 scalar_t__ FUNC_3 (int,int ) ;
 long long FUNC_4 (int,int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int,char*,int,scalar_t__) ;

int FUNC_7 (volume_t *VAR_4) {
  int VAR_5;
  VAR_4->wronly_binlogs = 0;
  for (VAR_5 = 0; VAR_5 < VAR_4->binlogs; VAR_5++) {
    if (VAR_4->B[VAR_5]->size < VAR_4->B[0]->size) {
      FUNC_2 ("Skip \"%s\", since it is shorter than %s.\n", VAR_4->B[VAR_5]->abs_filename, VAR_4->B[0]->abs_filename);
      VAR_4->B[VAR_5]->fd_wronly = -1;
      continue;
    }
    if (!VAR_4->B[VAR_5]->prefix) {
      FUNC_2 ("Skip \"%s\", since it isn't prefix of %s.\n", VAR_4->B[VAR_5]->abs_filename, VAR_4->B[0]->abs_filename);
      VAR_4->B[VAR_5]->fd_wronly = -1;
      continue;
    }
    VAR_4->B[VAR_5]->fd_wronly = FUNC_5 (VAR_4->B[VAR_5]->abs_filename, VAR_1);
    if (VAR_4->B[VAR_5]->fd_wronly < 0) {
      FUNC_2 ("open (\"%s\", O_WRONLY) fail. %m", VAR_4->B[VAR_5]->abs_filename);
      VAR_4->B[VAR_5]->fd_wronly = -1;
      continue;
    }
    long long VAR_6 = FUNC_4 (VAR_4->B[VAR_5]->fd_wronly, 0, VAR_2);
    if (VAR_6 != VAR_4->log_readto_pos) {
      FUNC_2 ("lseek (\"%s\", 0, SEEK_END) returns %lld, but V->log_readto_pos is equal to %lld.\n", VAR_4->B[VAR_5]->abs_filename, VAR_6, VAR_4->log_readto_pos);
      FUNC_0 (VAR_4->B[VAR_5]->fd_wronly);
      VAR_4->B[VAR_5]->fd_wronly = -1;
      continue;
    }
    if (FUNC_3 (VAR_4->B[VAR_5]->fd_wronly, VAR_0) <= 0) {
      FUNC_2 ("lock_whole_file (%s, F_WRLCK) fail.\n", VAR_4->B[VAR_5]->abs_filename);
      FUNC_1 (1);
    }
    VAR_4->wronly_binlogs++;
  }
  if (VAR_4->wronly_binlogs <= 0) {
    FUNC_6 (1, "binlogs: %d, wronly: %d\n", VAR_4->binlogs, VAR_4->wronly_binlogs);
    return VAR_3;
  }
  return 0;
}
