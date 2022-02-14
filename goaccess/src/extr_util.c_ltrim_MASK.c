
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char*,scalar_t__) ;
 scalar_t__ FUNC_2 (char*) ;

char *
FUNC_3 (char *VAR_0)
{
  char *VAR_1 = VAR_0;

  while (FUNC_0 (*VAR_1))
    ++VAR_1;
  FUNC_1 (VAR_0, VAR_1, FUNC_2 (VAR_1) + 1);

  return VAR_0;
}
