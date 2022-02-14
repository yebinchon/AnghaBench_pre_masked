
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pid_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 int FUNC_1 () ;
 int FUNC_2 (char*,char*,size_t) ;
 size_t FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int*,int,char**,size_t*,int *,int ) ;
 int FUNC_5 (char**) ;
 char** FUNC_6 (char**,size_t) ;

int FUNC_7(char* VAR_7, size_t* VAR_8) {
  int VAR_9[4];
  char **VAR_10 = ((void*)0);
  char **VAR_11;
  size_t VAR_12 = 100U;
  size_t VAR_13;
  pid_t VAR_14;
  int VAR_15;

  if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0) || *VAR_8 == 0)
    return VAR_4;

  VAR_14 = FUNC_1();
  for (;;) {
    VAR_15 = VAR_5;
    VAR_11 = FUNC_6(VAR_10, VAR_12);
    if (VAR_11 == ((void*)0))
      goto out;
    VAR_10 = VAR_11;
    VAR_9[0] = VAR_0;
    VAR_9[1] = VAR_2;
    VAR_9[2] = VAR_14;
    VAR_9[3] = VAR_3;
    if (FUNC_4(VAR_9, 4, VAR_10, &VAR_12, ((void*)0), 0) == 0) {
      break;
    }
    if (VAR_6 != VAR_1) {
      VAR_15 = FUNC_0(VAR_6);
      goto out;
    }
    VAR_12 *= 2U;
  }

  if (VAR_10[0] == ((void*)0)) {
    VAR_15 = VAR_4;
    goto out;
  }

  *VAR_8 -= 1;
  VAR_13 = FUNC_3(VAR_10[0]);
  if (*VAR_8 > VAR_13)
    *VAR_8 = VAR_13;

  FUNC_2(VAR_7, VAR_10[0], *VAR_8);
  VAR_7[*VAR_8] = '\0';
  VAR_15 = 0;

out:
  FUNC_5(VAR_10);

  return VAR_15;
}
