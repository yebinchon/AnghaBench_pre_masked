
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char const*,char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,int) ;

int
FUNC_3(const char *VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3, *VAR_4, *VAR_5;





 for (VAR_2 = VAR_0, VAR_4 = VAR_1;
      (VAR_3 = FUNC_0(VAR_2, '.')) && (VAR_5 = FUNC_0(VAR_4, '.'));
      VAR_2 = VAR_3 + 1, VAR_4 = VAR_5 + 1)
  if (FUNC_2(VAR_2, VAR_4, VAR_3 - VAR_2 + 1) && FUNC_2(VAR_4, "*.", 2))
   return 0;
 return (!FUNC_1(VAR_2, VAR_4) || !FUNC_1(VAR_4, "*"));
}
