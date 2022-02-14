
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (long long) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 char* FUNC_4 (char*) ;
 int * FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int * FUNC_7 (int *,int,int ) ;
 int FUNC_8 (int *,int,long long) ;
 char* FUNC_9 (int *,int) ;

int FUNC_10 (int VAR_2, int VAR_3, long long VAR_4, char **VAR_5) {
  if (!FUNC_3 (VAR_2) || !FUNC_2 (VAR_3) || !FUNC_1 (VAR_4)) {
    VAR_1++;
    return -1;
  }

  int VAR_6 = FUNC_6 (VAR_2);
  if (VAR_6 == 0) {
    return 0;
  }
  FUNC_0 (VAR_6 > 0);

  user *VAR_7 = FUNC_5 (VAR_2);
  FUNC_0 (VAR_7 != ((void*)0));

  if (FUNC_7 (VAR_7, VAR_6, VAR_0) == ((void*)0)) {
    return -2;
  }

  int VAR_8 = FUNC_8 (VAR_7, VAR_3, VAR_4);
  if (!VAR_8) {
    return 0;
  }

  char *VAR_9 = FUNC_9 (VAR_7, VAR_8);
  if (VAR_9 == ((void*)0)) {
    return 0;
  }

  *VAR_5 = FUNC_4 (VAR_9);
  return 1;
}
