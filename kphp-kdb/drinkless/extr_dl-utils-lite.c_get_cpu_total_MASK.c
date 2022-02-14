
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ FUNC_2 (int,char*,int) ;
 int FUNC_3 (char*,int,char*) ;

int FUNC_4 (unsigned long long *VAR_2) {

  static char VAR_3[10000];
  FUNC_3 (VAR_3, 10000, "/proc/stat");
  int VAR_4 = FUNC_1 (VAR_3, VAR_0);

  if (VAR_4 == -1) {
    return 0;
  }

  int VAR_5 = (int)FUNC_2 (VAR_4, VAR_3, 10000 - 1);
  if (VAR_5 <= 0) {
    FUNC_0 (VAR_4);
    return 0;
  }

  unsigned long long VAR_6 = 0, VAR_7 = 0;
  int VAR_8;
  for (VAR_8 = 0; VAR_8 < VAR_5; VAR_8++) {
    int VAR_9 = VAR_3[VAR_8];
    if (VAR_9 >= '0' && VAR_9 <= '9') {
      VAR_7 = VAR_7 * 10 + (unsigned long long)VAR_9 - '0';
    } else {
      VAR_6 += VAR_7;
      VAR_7 = 0;
      if (VAR_9 == '\n') {
        break;
      }
    }
  }

  *VAR_2 = VAR_6;

  FUNC_0 (VAR_4);
  return 1;

}
