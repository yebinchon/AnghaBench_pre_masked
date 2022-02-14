
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int set ;


 int FUNC_0 () ;

void
FUNC_1 (char *VAR_0, size_t VAR_1)
{
  char VAR_2[] = "0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";

  while (VAR_1-- > 0)
    *VAR_0++ = VAR_2[FUNC_0 () % (sizeof (VAR_2) - 1)];
  *VAR_0 = '\0';
}
