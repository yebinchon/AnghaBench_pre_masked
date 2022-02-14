
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,int*) ;

char *FUNC_4 (char *VAR_0, int VAR_1, char *VAR_2, int VAR_3) {
  char *VAR_4 = VAR_2, *VAR_5 = VAR_0, *VAR_6 = VAR_2 + VAR_3, *VAR_7 = VAR_0 + VAR_1;
  while (VAR_4 < VAR_6 && *VAR_4) {
    int VAR_8 = 0, VAR_9;
    char *VAR_10 = FUNC_3 (VAR_4, &VAR_8);
    if (VAR_10) {
      VAR_9 = FUNC_2 (VAR_10);
    } else {
      VAR_9 = 1;
      VAR_10 = VAR_4;
    }
    FUNC_0 (VAR_8 > 0 && VAR_9 >= 0);
    if (VAR_5 + VAR_9 > VAR_7) {
      *VAR_5 = 0;
      return VAR_0;
    }
    FUNC_1 (VAR_5, VAR_10, VAR_9);
    VAR_5 += VAR_9;
    VAR_4 += VAR_8;
  }
  *VAR_5 = 0;
  return VAR_0;
}
