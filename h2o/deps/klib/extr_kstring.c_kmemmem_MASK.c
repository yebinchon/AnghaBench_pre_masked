
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ubyte_t ;


 int FUNC_0 (int*) ;
 int* FUNC_1 (size_t const*,int) ;

void *FUNC_2(const void *VAR_0, int VAR_1, const void *VAR_2, int VAR_3, int **VAR_4)
{
 int VAR_5, VAR_6, *VAR_7 = 0, *VAR_8, *VAR_9;
 const ubyte_t *VAR_10, *VAR_11;
 VAR_10 = (const ubyte_t*)VAR_0; VAR_11 = (const ubyte_t*)VAR_2;
 VAR_7 = (VAR_4 == 0 || *VAR_4 == 0)? FUNC_1(VAR_11, VAR_3) : *VAR_4;
 if (VAR_4 && *VAR_4 == 0) *VAR_4 = VAR_7;
 VAR_8 = VAR_7; VAR_9 = VAR_7 + VAR_3;
 VAR_6 = 0;
 while (VAR_6 <= VAR_1 - VAR_3) {
  for (VAR_5 = VAR_3 - 1; VAR_5 >= 0 && VAR_11[VAR_5] == VAR_10[VAR_5+VAR_6]; --VAR_5);
  if (VAR_5 >= 0) {
   int VAR_12 = VAR_9[VAR_10[VAR_5+VAR_6]] - VAR_3 + 1 + VAR_5;
   if (VAR_12 < VAR_8[VAR_5]) VAR_12 = VAR_8[VAR_5];
   VAR_6 += VAR_12;
  } else return (void*)(VAR_10 + VAR_6);
 }
 if (VAR_4 == 0) FUNC_0(VAR_7);
 return 0;
}
