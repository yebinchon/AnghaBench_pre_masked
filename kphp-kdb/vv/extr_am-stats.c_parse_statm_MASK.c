
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 long long FUNC_1 (char const*,char**,int) ;
 long long FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3 (const char *VAR_2, long long *VAR_3, int VAR_4) {
  static long long VAR_5 = -1;
  if (VAR_5 < 0) {
    VAR_5 = FUNC_2 (VAR_0);
    FUNC_0 (VAR_5 > 0);
  }
  int VAR_6;
  if (VAR_4 > 7) {
    VAR_4 = 7;
  }
  const char *VAR_7 = VAR_2;
  char *VAR_8;
  VAR_1 = 0;
  for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
    VAR_3[VAR_6] = FUNC_1 (VAR_7, &VAR_8, 10);
    if (VAR_7 == VAR_8 || VAR_1) {
      return -1;
    }
    VAR_3[VAR_6] *= VAR_5;
    VAR_7 = VAR_8;
  }
  return 0;
}
