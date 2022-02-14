
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int* VAR_2 ;

__attribute__((used)) static int FUNC_0(int VAR_3)
{
 int VAR_4;

 if (VAR_3 > VAR_2[1])
  return 0;

 if (VAR_3 < VAR_2[VAR_1 - 1])
  return VAR_1 - 1;

 for (VAR_4 = 1; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_3 == VAR_2[VAR_4])
   return VAR_4;


  if (VAR_3 < VAR_2[VAR_4 - 1] &&
      VAR_3 > VAR_2[VAR_4]) {
   if (VAR_3 - VAR_2[VAR_4 - 1] <
       VAR_2[VAR_4] - VAR_3)
    return VAR_4 + 1;
   else
    return VAR_4;
  }
 }

 return -VAR_0;
}
