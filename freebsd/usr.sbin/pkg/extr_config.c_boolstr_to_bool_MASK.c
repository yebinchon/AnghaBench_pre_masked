
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int
FUNC_1(const char *VAR_0)
{
 if (VAR_0 != ((void*)0) && (FUNC_0(VAR_0, "true") == 0 ||
     FUNC_0(VAR_0, "yes") == 0 || FUNC_0(VAR_0, "on") == 0 ||
     VAR_0[0] == '1'))
  return (1);

 return (0);
}
