
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 long* VAR_1 ;
 long FUNC_0 (char*,char**,int) ;

int FUNC_1 (char *VAR_2, int VAR_3) {
  int VAR_4 = 0;
  long VAR_5;
  char *VAR_6 = VAR_2, *VAR_7 = VAR_2 + VAR_3, *VAR_8;
  while (VAR_6 < VAR_7) {
    if (VAR_4 && *VAR_6++ != ',') {
      return -1;
    }
    VAR_1[VAR_4++] = VAR_5 = FUNC_0 (VAR_6, &VAR_8, 10);
    if (VAR_6 == VAR_8 || VAR_4 == VAR_0 || VAR_5 <= -0x7fffffff || VAR_5 >= 0x7fffffff) {
      return -1;
    }
    VAR_6 = VAR_8;
  }
  return VAR_4;
}
