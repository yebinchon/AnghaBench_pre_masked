
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ssize_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_3 ;
 long FUNC_1 () ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int,char*,int) ;
 char* FUNC_4 (char const*,char) ;
 long FUNC_5 (char const*,int *,int) ;
 int FUNC_6 (int) ;

int FUNC_7(size_t* VAR_4) {
  char VAR_5[1024];
  const char* VAR_6;
  ssize_t VAR_7;
  long VAR_8;
  int VAR_9;
  int VAR_10;

  do
    VAR_9 = FUNC_2("/proc/self/stat", VAR_1);
  while (VAR_9 == -1 && VAR_3 == VAR_0);

  if (VAR_9 == -1)
    return FUNC_0(VAR_3);

  do
    VAR_7 = FUNC_3(VAR_9, VAR_5, sizeof(VAR_5) - 1);
  while (VAR_7 == -1 && VAR_3 == VAR_0);

  FUNC_6(VAR_9);
  if (VAR_7 == -1)
    return FUNC_0(VAR_3);
  VAR_5[VAR_7] = '\0';

  VAR_6 = FUNC_4(VAR_5, ' ');
  if (VAR_6 == ((void*)0))
    goto err;

  VAR_6 += 1;
  if (*VAR_6 != '(')
    goto err;

  VAR_6 = FUNC_4(VAR_6, ')');
  if (VAR_6 == ((void*)0))
    goto err;

  for (VAR_10 = 1; VAR_10 <= 22; VAR_10++) {
    VAR_6 = FUNC_4(VAR_6 + 1, ' ');
    if (VAR_6 == ((void*)0))
      goto err;
  }

  VAR_3 = 0;
  VAR_8 = FUNC_5(VAR_6, ((void*)0), 10);
  if (VAR_3 != 0)
    goto err;
  if (VAR_8 < 0)
    goto err;

  *VAR_4 = VAR_8 * FUNC_1();
  return 0;

err:
  return VAR_2;
}
