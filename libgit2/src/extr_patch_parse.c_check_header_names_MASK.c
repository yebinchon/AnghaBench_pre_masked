
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;

int FUNC_2(
 const char *VAR_0,
 const char *VAR_1,
 const char *VAR_2,
 bool VAR_3)
{
 if (!VAR_0 || !VAR_1)
  return 0;

 if (VAR_3 && FUNC_1(VAR_1, "/dev/null") != 0)
  return FUNC_0("expected %s path of '/dev/null'", VAR_2);

 else if (!VAR_3 && FUNC_1(VAR_0, VAR_1) != 0)
  return FUNC_0("mismatched %s path names", VAR_2);

 return 0;
}
