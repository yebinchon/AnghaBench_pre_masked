
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t ubyte_t ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int*) ;

__attribute__((used)) static int *FUNC_2(const ubyte_t *VAR_0, int VAR_1)
{
 int VAR_2, *VAR_3, *VAR_4, *VAR_5, *VAR_6;
 VAR_4 = (int*)FUNC_0(VAR_1 + 256, sizeof(int));
 VAR_5 = VAR_4; VAR_6 = VAR_4 + VAR_1;
 {
  for (VAR_2 = 0; VAR_2 < 256; ++VAR_2) VAR_6[VAR_2] = VAR_1;
  for (VAR_2 = 0; VAR_2 < VAR_1 - 1; ++VAR_2) VAR_6[VAR_0[VAR_2]] = VAR_1 - VAR_2 - 1;
 }
 VAR_3 = (int*)FUNC_0(VAR_1, sizeof(int));
 {
  int VAR_7 = 0, VAR_8;
  VAR_3[VAR_1 - 1] = VAR_1;
  VAR_8 = VAR_1 - 1;
  for (VAR_2 = VAR_1 - 2; VAR_2 >= 0; --VAR_2) {
   if (VAR_2 > VAR_8 && VAR_3[VAR_2 + VAR_1 - 1 - VAR_7] < VAR_2 - VAR_8)
    VAR_3[VAR_2] = VAR_3[VAR_2 + VAR_1 - 1 - VAR_7];
   else {
    if (VAR_2 < VAR_8) VAR_8 = VAR_2;
    VAR_7 = VAR_2;
    while (VAR_8 >= 0 && VAR_0[VAR_8] == VAR_0[VAR_8 + VAR_1 - 1 - VAR_7]) --VAR_8;
    VAR_3[VAR_2] = VAR_7 - VAR_8;
   }
  }
 }
 {
  int VAR_9 = 0;
  for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) VAR_5[VAR_2] = VAR_1;
  for (VAR_2 = VAR_1 - 1; VAR_2 >= 0; --VAR_2)
   if (VAR_3[VAR_2] == VAR_2 + 1)
    for (; VAR_9 < VAR_1 - 1 - VAR_2; ++VAR_9)
     if (VAR_5[VAR_9] == VAR_1)
      VAR_5[VAR_9] = VAR_1 - 1 - VAR_2;
  for (VAR_2 = 0; VAR_2 <= VAR_1 - 2; ++VAR_2)
   VAR_5[VAR_1 - 1 - VAR_3[VAR_2]] = VAR_1 - 1 - VAR_2;
 }
 FUNC_1(VAR_3);
 return VAR_4;
}
