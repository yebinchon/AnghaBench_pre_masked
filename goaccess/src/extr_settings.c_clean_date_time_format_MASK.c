
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;

__attribute__((used)) static char *
FUNC_1 (const char *VAR_0)
{
  char *VAR_1 = ((void*)0), *VAR_2 = ((void*)0), *VAR_3 = ((void*)0);
  int VAR_4 = 0;

  if (VAR_0 == ((void*)0) || *VAR_0 == '\0')
    return ((void*)0);

  VAR_1 = FUNC_0 (VAR_0);
  VAR_2 = VAR_1;
  VAR_3 = VAR_1;
  while (*VAR_2) {
    *VAR_3 = *VAR_2++;
    if (*VAR_3 == '%' || VAR_4) {
      VAR_4 = !VAR_4;
      VAR_3++;
    }
  }
  *VAR_3 = '\0';

  return VAR_1;
}
