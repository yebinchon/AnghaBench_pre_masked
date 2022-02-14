
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2 (void *VAR_3, int VAR_4) {
  char *VAR_5 = (char *)VAR_3;
  int VAR_6 = 0;
  while (VAR_6 < VAR_4) {
    int VAR_7 = VAR_4 - VAR_6;
    if (VAR_7 > VAR_0 - VAR_2) {
      VAR_7 = VAR_0 - VAR_2;
    }
    FUNC_1 (VAR_1 + VAR_2, VAR_5 + VAR_6, VAR_7);
    VAR_6 += VAR_7;
    VAR_2 += VAR_7;
    if (VAR_2 == VAR_0) {
      FUNC_0();
    }
  }
}
