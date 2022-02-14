
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*,char**,int) ;
 char* FUNC_1 (char*,char const*) ;

__attribute__((used)) static char *
FUNC_2 (char **VAR_0, const char *VAR_1, int VAR_2)
{
  int VAR_3 = 0;
  char *VAR_4 = *VAR_0, *VAR_5 = ((void*)0);
  char VAR_6;

  if ((*VAR_1 != 0x0) && (VAR_5 = FUNC_1 (*VAR_0, VAR_1)) == ((void*)0))
    return ((void*)0);

  VAR_6 = !*VAR_1 ? 0x0 : *VAR_5;
  do {

    if (*VAR_4 == VAR_6)
      VAR_3++;

    if ((*VAR_4 == VAR_6 && VAR_2 == VAR_3) || *VAR_4 == '\0')
      return FUNC_0 (VAR_4, VAR_0, 1);

    if (*VAR_4 == '\\')
      VAR_4++;
  } while (*VAR_4++);

  return ((void*)0);
}
