
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,char*,int) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int,int,int,int*) ;
 int FUNC_4 (int *,int,int,scalar_t__,int) ;
 scalar_t__ VAR_1 ;

int FUNC_5 (user *VAR_2, int VAR_3, int VAR_4, int VAR_5, int VAR_6) {
  FUNC_0 (0 <= VAR_5 && VAR_5 <= 1);

  if (VAR_1) {
    return 1;
  }

  FUNC_0 (FUNC_2 (VAR_2));

  int VAR_7;
  char *VAR_8 = FUNC_3 (VAR_2, VAR_3, VAR_4, 1, &VAR_7);

  if (VAR_8 == ((void*)0) || VAR_7 == 0 || VAR_8[0] >= 0) {
    return 0;
  }

  FUNC_1 (VAR_0, VAR_8, VAR_7);
  FUNC_0 (VAR_7 >= 1 + 2 * sizeof (int));
  int *VAR_9 = (int *)(VAR_0 + 1);
  VAR_9[VAR_5] = VAR_6;

  return FUNC_4 (VAR_2, VAR_3, VAR_4, VAR_0, VAR_7);
}
