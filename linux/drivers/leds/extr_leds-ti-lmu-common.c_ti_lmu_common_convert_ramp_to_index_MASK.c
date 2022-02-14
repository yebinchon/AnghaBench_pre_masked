
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (unsigned int*) ;
 unsigned int* VAR_0 ;

__attribute__((used)) static unsigned int FUNC_1(unsigned int VAR_1)
{
 int VAR_2 = FUNC_0(VAR_0);
 int VAR_3;

 if (VAR_1 <= VAR_0[0])
  return 0;

 if (VAR_1 > VAR_0[VAR_2 - 1])
  return VAR_2 - 1;

 for (VAR_3 = 1; VAR_3 < VAR_2; VAR_3++) {
  if (VAR_1 == VAR_0[VAR_3])
   return VAR_3;


  if (VAR_1 > VAR_0[VAR_3 - 1] && VAR_1 < VAR_0[VAR_3]) {
   if (VAR_1 - VAR_0[VAR_3 - 1] < VAR_0[VAR_3] - VAR_1)
    return VAR_3 - 1;
   else
    return VAR_3;
  }
 }

 return 0;
}
