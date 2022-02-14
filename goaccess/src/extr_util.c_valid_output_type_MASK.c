
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char*,char const*) ;
 size_t FUNC_1 (char const*) ;
 char* FUNC_2 (char const*,char) ;

int
FUNC_3 (const char *VAR_0)
{
  const char *VAR_1 = ((void*)0);
  size_t VAR_2;

  if ((VAR_1 = FUNC_2 (VAR_0, '.')) == ((void*)0))
    return -1;

  VAR_1++;

  VAR_2 = FUNC_1 (VAR_1);
  if (VAR_2 < 3 || VAR_2 > 4)
    return 0;

  if (FUNC_0 ("html", VAR_1) == 0)
    return 1;

  if (FUNC_0 ("json", VAR_1) == 0)
    return 1;

  if (FUNC_0 ("csv", VAR_1) == 0)
    return 1;

  return 0;
}
