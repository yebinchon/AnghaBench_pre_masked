
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dirent {char* d_name; } ;
typedef int binlogname ;
struct TYPE_2__ {int scanned; char* path; scalar_t__ binlogs; } ;
typedef int DIR ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,...) ;
 int * FUNC_3 (char*) ;
 struct dirent* FUNC_4 (int *) ;
 int FUNC_5 (char*,int) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char*,char*) ;

int FUNC_10 (int VAR_4) {
  char VAR_5[VAR_1];
  if (VAR_0[VAR_4].scanned) {
    return VAR_3;
  }
  DIR *VAR_6 = FUNC_3 (VAR_0[VAR_4].path);
  if (VAR_6 == ((void*)0)) {
    FUNC_9 (1, "storage_scan_dir: opendir (%s) fail. %m\n", VAR_0[VAR_4].path);
    return VAR_2;
  }

  struct dirent *VAR_7;
  int VAR_8 = 0;
  while ( (VAR_7 = FUNC_4 (VAR_6)) != ((void*)0)) {
    if (!FUNC_6 (VAR_7->d_name, ".") || !FUNC_6 (VAR_7->d_name, "..")) {
      continue;
    }
    int VAR_9 = FUNC_8 (VAR_7->d_name);
    if (VAR_9 <= 4 || FUNC_6 (VAR_7->d_name + VAR_9 - 4, ".bin")) {
      continue;
    }
    if (FUNC_8 (VAR_0[VAR_4].path) + 1 + VAR_9 > sizeof (VAR_5) - 1) {
      FUNC_2 ("Binlog path too long\n");
      FUNC_1 (1);
    }
    FUNC_7 (VAR_5, VAR_0[VAR_4].path);
    char *VAR_10 = VAR_5 + FUNC_8 (VAR_5);
    if (VAR_10[-1] != '/') {
      *VAR_10++ = '/';
    }
    FUNC_7 (VAR_10, VAR_7->d_name);
    int VAR_11 = FUNC_5 (VAR_5, VAR_4);
    if (VAR_11 < 0) {
      VAR_8++;
      continue;
    }
    VAR_0[VAR_4].binlogs++;
  }
  FUNC_0 (VAR_6);
  VAR_0[VAR_4].scanned = (VAR_0[VAR_4].binlogs > 0) ? 1 : 0;
  if (VAR_8 > 0) {
    FUNC_2 ("storage_scan_dir (%d): there are %d add_binlog_fails.\n", VAR_4, VAR_8);
  }
  return 0;
}
