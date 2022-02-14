
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (int ,char const*) ;
 char* FUNC_3 (char const*,int ) ;

int FUNC_4(const char **VAR_0, const char *VAR_1, const char *VAR_2)
{
 if (!VAR_2)
  return FUNC_1(VAR_1);
 *VAR_0 = FUNC_3(VAR_2, 0);
 if (!*VAR_0)
  FUNC_2(FUNC_0("failed to expand user dir in: '%s'"), VAR_2);
 return 0;
}
