
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 char* FUNC_0 (char const*,char,int) ;

int FUNC_1 (void **VAR_1, void **VAR_2) {
  const char *VAR_3 = *VAR_2;
  int VAR_4 = (long)*(VAR_2 + 1);
  char *VAR_5 = FUNC_0 (VAR_3, '.', VAR_4);
  if (VAR_5) {
    *(VAR_2 + 1) = (void *)(long)(VAR_5 - VAR_3);
  }
  VAR_0;
}
