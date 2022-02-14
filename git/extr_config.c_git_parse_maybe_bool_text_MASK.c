
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0)
{
 if (!VAR_0)
  return 1;
 if (!*VAR_0)
  return 0;
 if (!FUNC_0(VAR_0, "true")
     || !FUNC_0(VAR_0, "yes")
     || !FUNC_0(VAR_0, "on"))
  return 1;
 if (!FUNC_0(VAR_0, "false")
     || !FUNC_0(VAR_0, "no")
     || !FUNC_0(VAR_0, "off"))
  return 0;
 return -1;
}
