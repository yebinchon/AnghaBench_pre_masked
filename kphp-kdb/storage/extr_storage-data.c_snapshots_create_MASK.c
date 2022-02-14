
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int binlogs; TYPE_2__** B; } ;
typedef TYPE_1__ volume_t ;
struct TYPE_6__ {scalar_t__ fd_rdonly; scalar_t__ fd_wronly; size_t dir_id; } ;
typedef TYPE_2__ storage_binlog_file_t ;
struct TYPE_7__ {char* path; } ;


 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 char** VAR_5 ;
 scalar_t__* VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,char*,char*,char*) ;
 int FUNC_3 (char*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (int) ;

__attribute__((used)) static int FUNC_6 (volume_t *VAR_8, char *VAR_9) {
  int VAR_10, VAR_11 = 0;
  char *VAR_12 = FUNC_4 (VAR_9, '/');
  if (VAR_12 == ((void*)0)) {
    VAR_12 = VAR_9;
  } else {
    VAR_12++;
  }
  int VAR_13 = FUNC_3 (VAR_12) + 1;
  VAR_7 = 0;
  for (VAR_10 = 0; VAR_10 < VAR_8->binlogs; VAR_10++) {
    storage_binlog_file_t *VAR_14 = VAR_8->B[VAR_10];
    if (VAR_14->fd_rdonly < 0 && VAR_14->fd_wronly < 0) {
      continue;
    }
    int VAR_15 = VAR_13 + 1 + FUNC_3 (VAR_0[VAR_14->dir_id].path);
    char *VAR_16 = FUNC_5 (VAR_15);
    FUNC_0 (FUNC_2 (VAR_16, "%s/%s", VAR_0[VAR_14->dir_id].path, VAR_12) + 1 == VAR_15);
    VAR_5[VAR_7] = VAR_16;
    VAR_6[VAR_7] = FUNC_1 (VAR_16, VAR_1 | VAR_3 | VAR_4 | VAR_2, 0660);
    if (VAR_6[VAR_7] >= 0) {
      VAR_11++;
    }
    VAR_7++;
  }
  return VAR_11;
}
