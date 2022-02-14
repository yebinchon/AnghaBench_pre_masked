
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (char const,char const) ;
 scalar_t__ FUNC_2 (char const) ;

int FUNC_3(const char *VAR_0, const char *VAR_1)
{
 int VAR_2 = 0;

 FUNC_0(VAR_1 && VAR_0 && *VAR_1 && *VAR_0);

 while (*VAR_1 && *VAR_0 && !FUNC_1(*VAR_1, *VAR_0)) {
  VAR_1++;
  VAR_0++;
  VAR_2++;
 }


 if (*VAR_1 && *VAR_0)
  return -1;

 if (!*VAR_0)
  return !*VAR_1 ? VAR_2 : -1;


 if (FUNC_2(VAR_1[-1]))
  return FUNC_2(VAR_0[-1]) ? VAR_2 : -1;


 return FUNC_2(*VAR_0) ? VAR_2 + 1 : -1;
}
