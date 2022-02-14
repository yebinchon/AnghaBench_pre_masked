
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int user ;


 int FUNC_0 (int) ;
 char* VAR_0 ;
 int FUNC_1 (char*,char*,int) ;
 char VAR_1 ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int,int,int,int*) ;
 int FUNC_4 (int *,int,int,char*,int) ;
 scalar_t__ VAR_2 ;

int FUNC_5 (user *VAR_3, int VAR_4, int VAR_5) {
  if (VAR_2) {
    return 1;
  }

  FUNC_0 (FUNC_2 (VAR_3));

  int VAR_6;
  char *VAR_7 = FUNC_3 (VAR_3, VAR_4, VAR_5, 1, &VAR_6);

  if (VAR_7 == ((void*)0)) {
    return 0;
  }
  if (VAR_6 == 0 || VAR_7[0] >= 0) {
    return 1;
  }

  char *VAR_8 = VAR_0;
  int VAR_9 = -(VAR_7[0] + VAR_1) + 4 * sizeof (int) + 1;
  VAR_6 -= VAR_9;
  VAR_7 += VAR_9;

  FUNC_0 (VAR_6 > 0);
  FUNC_1 (VAR_8, VAR_7, VAR_6);

  return FUNC_4 (VAR_3, VAR_4, VAR_5, VAR_0, VAR_6);
}
