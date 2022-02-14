
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char const*,...) ;
 int FUNC_2 (char const*,char const*,char const*,char const*,int) ;

void FUNC_3(const char *VAR_0,
         const char *VAR_1, const char *VAR_2,
         const char *VAR_3, int VAR_4)
{
 if (!FUNC_2(VAR_0, VAR_1, VAR_2,
          VAR_3, VAR_4))
  return;
 if (VAR_2)
  FUNC_1(FUNC_0("could not set '%s' to '%s'"), VAR_1, VAR_2);
 else
  FUNC_1(FUNC_0("could not unset '%s'"), VAR_1);
}
