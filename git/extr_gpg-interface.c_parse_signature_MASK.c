
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char,size_t) ;

size_t FUNC_2(const char *VAR_0, size_t VAR_1)
{
 size_t VAR_2 = 0;
 size_t VAR_3 = VAR_1;
 while (VAR_2 < VAR_1) {
  const char *VAR_4;

  if (FUNC_0(VAR_0 + VAR_2))
   VAR_3 = VAR_2;

  VAR_4 = FUNC_1(VAR_0 + VAR_2, '\n', VAR_1 - VAR_2);
  VAR_2 += VAR_4 ? VAR_4 - (VAR_0 + VAR_2) + 1 : VAR_1 - VAR_2;
 }
 return VAR_3;
}
