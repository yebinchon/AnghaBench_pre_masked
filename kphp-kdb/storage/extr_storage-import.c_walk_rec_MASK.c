
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {scalar_t__ st_mtime; int st_mode; } ;
struct dirent {char* d_name; } ;
struct TYPE_3__ {scalar_t__ n; scalar_t__ mtime; char** prefix; } ;
typedef TYPE_1__ hash_entry_t ;
typedef int DIR ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 TYPE_1__* FUNC_6 (scalar_t__*,int) ;
 int FUNC_7 (char*,scalar_t__*,...) ;
 int * FUNC_8 (scalar_t__*) ;
 struct dirent* FUNC_9 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_10 (scalar_t__*,char*,char*) ;
 scalar_t__ FUNC_11 (scalar_t__*,struct stat*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (scalar_t__*) ;
 int FUNC_14 (char*,int *,int) ;
 scalar_t__* VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_15 (DIR *VAR_6[5], int VAR_7[5], int VAR_8, char *VAR_9) {
  const int VAR_10 = FUNC_13 (VAR_4);
  VAR_6[VAR_8] = FUNC_8 (VAR_4);
  if (VAR_6[VAR_8] == ((void*)0)) {
    FUNC_7 ("opendir (%s) fail (depth = %d). %m\n", VAR_4, VAR_8);
    return -1;
  }
  struct dirent *VAR_11;
  while ( (VAR_11 = FUNC_9 (VAR_6[VAR_8])) != ((void*)0)) {
    if (!FUNC_12 (VAR_11->d_name, ".") || !FUNC_12 (VAR_11->d_name, "..")) {
      continue;
    }
    FUNC_10 (VAR_4 + VAR_10, "/%s", VAR_11->d_name);
    struct stat VAR_12;
    if (FUNC_11 (VAR_4, &VAR_12)) {
      FUNC_7 ("stat (%s) fail. %m\n", VAR_4);
      continue;
    }
    if (FUNC_0(VAR_12.st_mode) && VAR_8 < 4) {
      VAR_1 = 0;
      VAR_7[VAR_8 + 1] = FUNC_14 (VAR_11->d_name, ((void*)0), 10);
      if (VAR_1) {
        continue;
      }
      int VAR_13 = 0;
      switch (VAR_8) {
        case 0:
          if (!FUNC_3 (VAR_7[1])) {
            VAR_13 = 1;
          }
          break;
        case 1:
          if (!FUNC_4 (VAR_7[1] + VAR_7[2] * 100)) {
            VAR_13 = 1;
          }
          break;
        case 2:
          if (VAR_7[3] % VAR_2 != VAR_3) {
            VAR_13 = 1;
          }
          break;
      }
      if (VAR_13) {
        continue;
      }
      FUNC_15 (VAR_6, VAR_7, VAR_8 + 1, VAR_9);
    } else if (FUNC_1(VAR_12.st_mode) && VAR_8 >= 3 && VAR_8 <= 4) {
      hash_entry_t *VAR_14 = FUNC_6 (VAR_4 + VAR_5, 1);
      FUNC_2 (VAR_14->n < VAR_0);
      if (VAR_14->mtime < VAR_12.st_mtime) {
        VAR_14->mtime = VAR_12.st_mtime;
      }
      VAR_14->prefix[VAR_14->n++] = VAR_9;
    }
  }
  VAR_4[VAR_10] = 0;
  FUNC_5 (VAR_6[VAR_8]);
  return 0;
}
