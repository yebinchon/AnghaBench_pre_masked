
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char const*,char const**) ;
 int FUNC_1 (char const*,char*) ;

__attribute__((used)) static int FUNC_2(const char *VAR_0, const char *VAR_1)
{
 if (!FUNC_1(VAR_1, "/") && !FUNC_1(VAR_0, "/.git"))
  return 0;
 if (FUNC_0(VAR_0, VAR_1, &VAR_0) &&
     !FUNC_1(VAR_0, "/.git"))
  return 0;
 return 1;
}
