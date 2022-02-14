
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static char *
FUNC_2 (const char *VAR_0)
{
  if (FUNC_1 (VAR_0, "10.0"))
    return FUNC_0 ("Windows 10");
  else if (FUNC_1 (VAR_0, "6.3"))
    return FUNC_0 ("Windows 8.1");
  else if (FUNC_1 (VAR_0, "6.3; ARM"))
    return FUNC_0 ("Windows RT");
  else if (FUNC_1 (VAR_0, "6.2; ARM"))
    return FUNC_0 ("Windows RT");
  else if (FUNC_1 (VAR_0, "6.2"))
    return FUNC_0 ("Windows 8");
  else if (FUNC_1 (VAR_0, "6.1"))
    return FUNC_0 ("Windows 7");
  else if (FUNC_1 (VAR_0, "6.0"))
    return FUNC_0 ("Windows Vista");
  else if (FUNC_1 (VAR_0, "5.2"))
    return FUNC_0 ("Windows XP x64");
  else if (FUNC_1 (VAR_0, "5.1"))
    return FUNC_0 ("Windows XP");
  else if (FUNC_1 (VAR_0, "5.0"))
    return FUNC_0 ("Windows 2000");
  return ((void*)0);
}
