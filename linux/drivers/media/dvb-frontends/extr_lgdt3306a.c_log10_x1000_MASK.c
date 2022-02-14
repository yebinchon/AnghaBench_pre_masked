
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;


 int FUNC_0 (int*) ;
 int* VAR_0 ;
 int* VAR_1 ;

__attribute__((used)) static u32 FUNC_1(u32 VAR_2)
{
 u32 VAR_3, VAR_4, VAR_5;
 u32 VAR_6 = 0;
 u32 VAR_7;

 if (VAR_2 <= 0)
  return -1000000;

 if (VAR_2 == 10)
  return 0;

 if (VAR_2 < 10) {
  while (VAR_2 < 10) {
   VAR_2 = VAR_2 * 10;
   VAR_6--;
  }
 } else {
  while (VAR_2 >= 100) {
   VAR_2 = VAR_2 / 10;
   VAR_6++;
  }
 }
 VAR_6 *= 1000;

 if (VAR_2 == 10)
  return VAR_6;


 for (VAR_7 = 1; VAR_7 < FUNC_0(VAR_1); VAR_7++) {
  if (VAR_1[VAR_7] >= VAR_2)
   break;
 }
 if (VAR_7 == FUNC_0(VAR_1))
  return VAR_6 + VAR_0[VAR_7 - 1];

 VAR_3 = VAR_2 - VAR_1[VAR_7-1];
 VAR_4 = VAR_1[VAR_7] - VAR_1[VAR_7 - 1];
 VAR_5 = VAR_0[VAR_7] - VAR_0[VAR_7 - 1];


 return VAR_6 + VAR_0[VAR_7 - 1] +
  ((VAR_3*VAR_5) / VAR_4);
}
