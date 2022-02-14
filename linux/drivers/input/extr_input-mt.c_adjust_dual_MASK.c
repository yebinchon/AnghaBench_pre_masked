
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static int FUNC_0(int *VAR_0, int VAR_1, int *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5, *VAR_6, VAR_7, VAR_8;

 if (VAR_0 == VAR_2)
  return 0;

 VAR_5 = *VAR_0;
 VAR_6 = VAR_0 + VAR_1;
 VAR_7 = VAR_6 == VAR_2 ? VAR_5 + 1 : *VAR_6;

 for (; VAR_6 != VAR_2; VAR_6 += VAR_1)
  if (*VAR_6 < VAR_5)
   VAR_7 = VAR_5, VAR_5 = *VAR_6;
  else if (*VAR_6 < VAR_7)
   VAR_7 = *VAR_6;

 VAR_8 = (VAR_5 + VAR_7 + 1) / 2;
 if (VAR_8 == 0 || (VAR_8 > VAR_4 && (!VAR_3 || VAR_4 > 0)))
  return 0;

 if (VAR_7 < 0 && VAR_4 <= 0)
  VAR_8 *= 2;

 for (VAR_6 = VAR_0; VAR_6 != VAR_2; VAR_6 += VAR_1)
  *VAR_6 -= VAR_8;

 return (VAR_8 < VAR_7 && VAR_7 <= 0) || (VAR_5 >= 0 && VAR_5 < VAR_8);
}
