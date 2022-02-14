
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ pid_t ;
struct TYPE_3__ {unsigned long long vm_peak; unsigned long long vm; unsigned long long rss_peak; unsigned long long rss; } ;
typedef TYPE_1__ mem_info_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 int FUNC_3 (char*,int,char*,unsigned long) ;
 int FUNC_4 (char*,char*,unsigned long long*) ;
 scalar_t__ FUNC_5 (char*,char*,int) ;

int FUNC_6 (pid_t VAR_2, mem_info_t *VAR_3) {

  static char VAR_4[10000];
  FUNC_3 (VAR_4, 10000, "/proc/%lu/status", (unsigned long)VAR_2);
  int VAR_5 = FUNC_1 (VAR_4, VAR_0);

  if (VAR_5 == -1) {
    return 0;
  }

  int VAR_6 = (int)FUNC_2 (VAR_5, VAR_4, 10000 - 1);
  if (VAR_6 <= 0) {
    FUNC_0 (VAR_5);
    return 0;
  }
  VAR_4[VAR_6] = 0;

  char *VAR_7 = VAR_4;
  while (*VAR_7) {
    char *VAR_8 = VAR_7;
    while (*VAR_7 != 0 && *VAR_7 != '\n') {
      VAR_7++;
    }
    unsigned long long *VAR_9 = ((void*)0);
    if (FUNC_5 (VAR_8, "VmPeak", 6) == 0) {
      VAR_9 = &VAR_3->vm_peak;
    }
    if (FUNC_5 (VAR_8, "VmSize", 6) == 0) {
      VAR_9 = &VAR_3->vm;
    }
    if (FUNC_5 (VAR_8, "VmHWM", 5) == 0) {
      VAR_9 = &VAR_3->rss_peak;
    }
    if (FUNC_5 (VAR_8, "VmRSS", 5) == 0) {
      VAR_9 = &VAR_3->rss;
    }
    if (VAR_9 != ((void*)0)) {
      while (VAR_8 < VAR_7 && *VAR_8 != ' ') {
        VAR_8++;
      }
      *VAR_9 = (unsigned long long)-1;

      if (VAR_8 < VAR_7) {
        FUNC_4 (VAR_8, "%llu", VAR_9);
      }
    }
    if (*VAR_7 == 0) {
      break;
    }
    VAR_7++;
  }

  FUNC_0 (VAR_5);
  return 1;

}
