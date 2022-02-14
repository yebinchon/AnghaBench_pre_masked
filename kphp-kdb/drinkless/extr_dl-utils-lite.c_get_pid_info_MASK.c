
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_3__ {int starttime; int cstime; int cutime; int stime; int utime; } ;
typedef TYPE_1__ pid_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int ) ;
 scalar_t__ FUNC_3 (int,char*,int) ;
 int FUNC_4 (char*,int,char*,unsigned long) ;
 int FUNC_5 (char*,char*,int *) ;

int FUNC_6 (pid_t VAR_2, pid_info_t *VAR_3) {

  static char VAR_4[10000];
  FUNC_4 (VAR_4, 10000, "/proc/%lu/stat", (unsigned long)VAR_2);
  int VAR_5 = FUNC_2 (VAR_4, VAR_0);

  if (VAR_5 == -1) {
    return 0;
  }

  int VAR_6 = (int)FUNC_3 (VAR_5, VAR_4, 10000 - 1);
  if (VAR_6 <= 0) {
    FUNC_0 (VAR_5);
    return 0;
  }
  VAR_4[VAR_6] = 0;

  char *VAR_7 = VAR_4;
  int VAR_8 = 0;

  while (VAR_8 < 22) {
    if (VAR_8 == 12) {
      FUNC_5 (VAR_7, "%llu", &VAR_3->utime);
    }
    if (VAR_8 == 13) {
      FUNC_5 (VAR_7, "%llu", &VAR_3->stime);
   }
    if (VAR_8 == 14) {
      FUNC_5 (VAR_7, "%llu", &VAR_3->cutime);
    }
    if (VAR_8 == 15) {
      FUNC_5 (VAR_7, "%llu", &VAR_3->cstime);
    }
    if (VAR_8 == 21) {
      FUNC_5 (VAR_7, "%llu", &VAR_3->starttime);
    }
    while (*VAR_7 && *VAR_7 != ' ') {
      VAR_7++;
    }
    if (*VAR_7 == ' ') {
      VAR_7++;
      VAR_8++;
    } else {
      FUNC_1 (0, "unexpected end of proc file");
      break;
    }
  }

  FUNC_0 (VAR_5);
  return 1;

}
