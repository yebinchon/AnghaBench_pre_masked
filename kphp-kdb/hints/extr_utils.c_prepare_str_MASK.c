
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int) ;
 char* FUNC_1 (int) ;
 int FUNC_2 (char*,char*,int) ;
 char* VAR_1 ;
 int VAR_2 ;
 int* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (unsigned char*,int ) ;
 int FUNC_6 (char*) ;

char *FUNC_7 (char *VAR_3) {
  if (FUNC_6 (VAR_3) >= VAR_0 / 4) {
    return ((void*)0);
  }

  FUNC_5 ((unsigned char *)VAR_3, VAR_2);
  int *VAR_4 = FUNC_3 (VAR_2);
  char *VAR_5 = VAR_1;

  while (*VAR_4 != 0) {
    VAR_5 += FUNC_4 (*VAR_4++, VAR_5);
  }
  *VAR_5++ = 0;

  FUNC_0 (VAR_5 - VAR_1 < VAR_0);

  char *VAR_6 = FUNC_1 (VAR_5 - VAR_1);
  if (VAR_6 == ((void*)0)) {
    return VAR_6;
  }

  FUNC_2 (VAR_6, VAR_1, VAR_5 - VAR_1);
  return VAR_6;
}
