
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;
 char const* FUNC_2 (char*,char const*) ;

__attribute__((used)) static const char *FUNC_3(const char *VAR_0)
{
 if (!VAR_0)
  return "git";
 else if (FUNC_1(VAR_0, "git"))
  return VAR_0;
 else if (FUNC_0(VAR_0))
  return FUNC_2("git-%s", VAR_0);
 else
  return FUNC_2("git%s", VAR_0);
}
