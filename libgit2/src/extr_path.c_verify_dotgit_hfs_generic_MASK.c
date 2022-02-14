
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char const**,size_t*) ;

__attribute__((used)) static bool FUNC_1(const char *VAR_0, size_t VAR_1, const char *VAR_2, size_t VAR_3)
{
 size_t VAR_4;
 char VAR_5;

 if (FUNC_0(&VAR_0, &VAR_1) != '.')
  return 1;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_0(&VAR_0, &VAR_1);
  if (VAR_5 != VAR_2[VAR_4])
   return 1;
 }

 if (FUNC_0(&VAR_0, &VAR_1) != '\0')
  return 1;

 return 0;
}
