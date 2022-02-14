
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int a ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char) ;
 int FUNC_2 (long long*,int ,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int,char*,int) ;
 int FUNC_5 (char*,char*,long long*) ;
 long long FUNC_6 (int ) ;
 int FUNC_7 (int,char*,char*) ;

int FUNC_8 (long long *VAR_4, int VAR_5) {
  FUNC_2 (VAR_4, 0, sizeof (VAR_4[0]) * VAR_5);
  char VAR_6[1024], *VAR_7;
  int VAR_8 = FUNC_3 ("/proc/self/statm", VAR_1), VAR_9 = -1, VAR_10;
  if (VAR_8 < 0) {
    return -1;
  }
  do {
    VAR_9 = FUNC_4 (VAR_8, VAR_6, sizeof (VAR_6));
    if (VAR_9 < 0) {
      if (VAR_3 == VAR_0) {
        continue;
      }
    }
    break;
  } while (1);

  while (FUNC_0 (VAR_8) < 0 && VAR_3 == VAR_0) {}

  if (VAR_9 < 0 || VAR_9 >= sizeof (VAR_6)) {
    return -1;
  }
  VAR_6[VAR_9] = 0;
  FUNC_7 (3, "/proc/self/statm: %s\n", VAR_6);
  long long VAR_11 = FUNC_6 (VAR_2);
  VAR_7 = VAR_6;
  for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
    if (FUNC_5 (VAR_7, "%lld", &VAR_4[VAR_10]) != 1) {
      return -1;
    }
    VAR_4[VAR_10] *= VAR_11;
    while (*VAR_7 && !FUNC_1 (*VAR_7)) {
      VAR_7++;
    }
  }
  return 0;
}
