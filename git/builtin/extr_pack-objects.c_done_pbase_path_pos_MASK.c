
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 unsigned int* VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_0(unsigned VAR_2)
{
 int VAR_3 = 0;
 int VAR_4 = VAR_1;
 while (VAR_3 < VAR_4) {
  int VAR_5 = VAR_3 + (VAR_4 - VAR_3) / 2;
  if (VAR_0[VAR_5] == VAR_2)
   return VAR_5;
  if (VAR_0[VAR_5] < VAR_2)
   VAR_4 = VAR_5;
  else
   VAR_3 = VAR_5 + 1;
 }
 return -VAR_3-1;
}
