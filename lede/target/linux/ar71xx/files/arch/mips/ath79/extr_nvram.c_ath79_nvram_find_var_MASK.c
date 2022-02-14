
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*,int,unsigned int) ;
 scalar_t__ FUNC_1 (char*,char const*,unsigned int) ;
 unsigned int FUNC_2 (char const*) ;

char *FUNC_3(const char *VAR_0, const char *VAR_1, unsigned VAR_2)
{
 unsigned VAR_3 = FUNC_2(VAR_0);
 char *VAR_4, *VAR_5;

 if (VAR_2 == 0 || VAR_3 == 0)
  return ((void*)0);

 if (VAR_2 < VAR_3)
  return ((void*)0);

 if (VAR_3 == 1)
  return FUNC_0(VAR_1, (int) *VAR_0, VAR_2);

 VAR_5 = (char *) VAR_1 + VAR_2 - VAR_3;
 for (VAR_4 = (char *) VAR_1; VAR_4 <= VAR_5; VAR_4++)
  if (VAR_4[0] == VAR_0[0] && FUNC_1(VAR_4, VAR_0, VAR_3) == 0)
   return VAR_4 + VAR_3;

 return ((void*)0);
}
