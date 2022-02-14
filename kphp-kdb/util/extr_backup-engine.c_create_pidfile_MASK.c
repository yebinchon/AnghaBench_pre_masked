
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int st_mode; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int) ;
 int VAR_7 ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (char*,int,...) ;
 char* VAR_10 ;
 int VAR_11 ;
 int FUNC_9 (int,char*,int) ;
 int FUNC_10 (char*,char*,...) ;
 scalar_t__ FUNC_11 (char*,TYPE_1__*) ;
 TYPE_1__ VAR_12 ;
 scalar_t__ FUNC_12 (char*) ;
 int FUNC_13 (int,char*,int) ;

__attribute__((used)) static int FUNC_14 (void) {
  static char VAR_13[32];
  int VAR_14, VAR_15;

  FUNC_1 (FUNC_10 (VAR_10, "%s/backup.pid", VAR_8) < VAR_2);

  if (FUNC_11 (VAR_10, &VAR_12) >= 0) {
    if (!FUNC_0 (VAR_12.st_mode)) {
      VAR_9 = VAR_0;
      return -1;
    }
    int VAR_16 = FUNC_8 (VAR_10, VAR_5);
    if (VAR_16 < 0) {
      return -1;
    }
    int VAR_17 = FUNC_9 (VAR_16, VAR_13, 16);
    FUNC_4 (VAR_16);
    if (VAR_17 < 0) {
      return -1;
    }
    if (VAR_17 < 16) {
      VAR_13[VAR_17] = 0;
      VAR_14 = FUNC_3 (VAR_13);
      if (VAR_14 > 0) {
        FUNC_10 (VAR_13, "/proc/%d/", VAR_14);
        if (FUNC_11 (VAR_13, &VAR_12) >= 0) {
          FUNC_7 ("fatal: destination directory %s already locked by process %d\n", VAR_8, VAR_14);
          FUNC_5 (2);
        }
      }
    }
    FUNC_7 ("warning: removing stale pid file %s\n", VAR_10);
    if (FUNC_12 (VAR_10) < 0 && VAR_9 != VAR_1) {
      return -1;
    }
  }

  VAR_15 = FUNC_8 (VAR_10, VAR_6 | VAR_3 | VAR_4, 0640);
  if (VAR_15 < 0) {
    return -1;
  }

  VAR_11 = 1;
  FUNC_2 (VAR_7);

  int VAR_18 = FUNC_10 (VAR_13, "%d\n", FUNC_6());
  if (FUNC_13 (VAR_15, VAR_13, VAR_18) != VAR_18) {
    FUNC_4 (VAR_15);
    return -1;
  }
  FUNC_4 (VAR_15);
  return 0;
}
