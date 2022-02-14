
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int VAR_1, unsigned long VAR_2)
{
 char VAR_3;
 int VAR_4;

 if (VAR_2 < VAR_1 + 1)
  return 0;
 VAR_3 = VAR_0[0];
 switch (VAR_3) {
 case '=': case '>': case '<': case '|':
  break;
 default:
  return 0;
 }
 for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++)
  if (VAR_0[VAR_4] != VAR_3)
   return 0;

 if (VAR_2 < VAR_1 + 1 || !FUNC_0(VAR_0[VAR_1]))
  return 0;
 return 1;
}
