
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 char* VAR_0 ;
 void* VAR_1 ;
 void* FUNC_2 (char*) ;

void FUNC_3 (char *VAR_2) {
  char *VAR_3 = VAR_2;
  while (*VAR_3 && *VAR_3 != '%') {
    VAR_3++;
  }
  int VAR_4 = *VAR_3 == '%';
  if (!VAR_4) {
    VAR_0 = VAR_2;
    FUNC_1();
    return;
  }

  char VAR_5[100];
  char VAR_6[100];
  int VAR_7 = 100;

  char *VAR_8 = VAR_5;
  char *VAR_9 = VAR_6;

  int VAR_10 = 0;
  while (*VAR_2) {
    FUNC_0 (VAR_8 < VAR_5 + VAR_7 - 3);
    if (*VAR_2 == '%') {
      if (!VAR_10) {
        *VAR_8++ = '%';
        *VAR_8++ = 'd';
        VAR_10 = 1;
      }
    } else {
      *VAR_8++ = *VAR_2;
      *VAR_9++ = *VAR_2;
    }
    VAR_2++;
  }
  *VAR_8 = 0;
  VAR_8 = VAR_5;
  *VAR_9 = 0;
  VAR_9 = VAR_6;

  VAR_0 = FUNC_2 (VAR_9);
  VAR_1 = FUNC_2 (VAR_8);
}
