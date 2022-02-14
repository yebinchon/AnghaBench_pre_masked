
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int ) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0, size_t VAR_1)
{
 size_t VAR_2;
 char VAR_3;

 FUNC_0(VAR_0 && VAR_1 > 0);

 for (VAR_2 = 0; VAR_2 < VAR_1; VAR_2++)
 {
  VAR_3 = VAR_0[VAR_2];
  if ((VAR_3 < 'A' || VAR_3 > 'Z') && VAR_3 != '_')
   return 0;
 }

 if (*VAR_0 == '_' || VAR_0[VAR_1 - 1] == '_')
  return 0;

 return 1;
}
