
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
void
FUNC_0 (char *VAR_0)
{
  char *VAR_1, *VAR_2;
  for (VAR_1 = VAR_2 = VAR_0; *VAR_1 != '\0'; VAR_1++) {
    *VAR_2 = *VAR_1;
    if (*VAR_2 != '\r' && *VAR_2 != '\n')
      VAR_2++;
  }
  *VAR_2 = '\0';
}
