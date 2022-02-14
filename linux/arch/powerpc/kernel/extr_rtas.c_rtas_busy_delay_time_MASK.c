
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

unsigned int FUNC_0(int VAR_3)
{
 int VAR_4;
 unsigned int VAR_5 = 0;

 if (VAR_3 == VAR_0) {
  VAR_5 = 1;
 } else if (VAR_3 >= VAR_2 &&
     VAR_3 <= VAR_1) {
  VAR_4 = VAR_3 - VAR_2;
  for (VAR_5 = 1; VAR_4 > 0; VAR_4--)
   VAR_5 *= 10;
 }

 return VAR_5;
}
