
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_1(int VAR_3, int *VAR_4, int *VAR_5)
{
 int VAR_6, VAR_7;
 int VAR_8 = VAR_3 * 9 / 8;
 int VAR_9 = VAR_3 * 7 / 8;
 int VAR_10 = 65536;




 for (VAR_6 = 1; VAR_6 < VAR_1; VAR_6++) {
  int VAR_11 = VAR_2[VAR_6];
  if (VAR_11*2 < VAR_9)
   continue;
  if (VAR_11 > VAR_8)
   break;
  for (VAR_7 = 0; VAR_7 <= VAR_6; VAR_7++) {
   int VAR_12 = VAR_11 + VAR_2[VAR_7];
   int VAR_13;
   if (VAR_12 < VAR_9)
    continue;
   if (VAR_12 > VAR_8)
    break;

   VAR_13 = FUNC_0(VAR_3 - VAR_12);
   if (VAR_13 >= VAR_10)
    continue;

   *VAR_4 = VAR_6;
   *VAR_5 = VAR_7;
   VAR_10 = VAR_13;
   if (VAR_13 == 0)
    return VAR_3;
  }
 }
 if (VAR_10 < 65536) {
  int VAR_14;
  if (VAR_3 & 1) {
   VAR_6 = *VAR_5;
   *VAR_5 = *VAR_4;
   *VAR_4 = VAR_6;
  }
  VAR_14 = VAR_2[*VAR_4] + VAR_2[*VAR_5];
  if (*VAR_4 < *VAR_5)
   return VAR_14 + 1;
  else
   return VAR_14;
 }

 return -VAR_0;
}
