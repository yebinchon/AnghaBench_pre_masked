
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 unsigned short** VAR_1 ;

__attribute__((used)) static int FUNC_0(unsigned short VAR_2)
{
 int VAR_3, VAR_4 = 0, VAR_5;

 if (VAR_2 <= VAR_1[VAR_0 - 1][0])
  return VAR_1[VAR_0 - 1][1];

 if (VAR_2 >= VAR_1[0][0])
  return VAR_1[0][1];

 for (VAR_3 = 0; VAR_3 < VAR_0 - 1; VAR_3++) {
  if ((VAR_2 <= VAR_1[VAR_3][0]) &&
      (VAR_2 >= VAR_1[VAR_3 + 1][0])) {
   if (VAR_2 == VAR_1[VAR_3][0]) {
    VAR_4 = VAR_1[VAR_3][1];
   } else if (VAR_2 == VAR_1[VAR_3 + 1][0]) {
    VAR_4 = VAR_1[VAR_3 + 1][1];
   } else {
    VAR_5 = ((VAR_2 - VAR_1[VAR_3][0]) * 1000) /
     (VAR_1[VAR_3 + 1][0] - VAR_1[VAR_3][0]);

    VAR_4 = VAR_1[VAR_3][1] +
     ((VAR_5 * (VAR_1[VAR_3 + 1][1] -
       VAR_1[VAR_3][1])) / 1000);
   }
   break;
  }
 }

 return VAR_4;
}
