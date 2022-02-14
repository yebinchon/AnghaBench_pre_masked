
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0, unsigned long *VAR_1, const char **VAR_2)
{
 if (!FUNC_0(*VAR_0))
  return 0;

 *VAR_1 = 0;
 while (FUNC_0(*VAR_0)) {
  *VAR_1 = *VAR_1 * 10 + (*VAR_0 - '0');
  ++VAR_0;
 }

 *VAR_2 = VAR_0;
 return 1;
}
