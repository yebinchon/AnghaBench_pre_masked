
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;
 int* VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;

int FUNC_0 (char *VAR_4) {
  int VAR_5 = 1, VAR_6 = 0;
  char VAR_7;

  while ((VAR_7 = *VAR_4) != 0) {
    while (VAR_7 != VAR_3[VAR_5]) {
      VAR_5 = VAR_0[VAR_5];
      if (!VAR_5) {
        break;
      }
    }
    VAR_6 |= VAR_1[++VAR_5];
    ++VAR_4;
  }
  return VAR_6 == (1 << VAR_2) - 1;

}
