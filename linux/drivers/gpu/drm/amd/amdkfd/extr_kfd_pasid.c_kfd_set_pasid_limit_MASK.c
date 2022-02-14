
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 unsigned int VAR_1 ;

bool FUNC_0(unsigned int VAR_2)
{
 if (VAR_2 < 2)
  return 0;

 if (VAR_2 < (1U << VAR_1)) {
  if (VAR_0)



   return 0;

  while (VAR_2 < (1U << VAR_1))
   VAR_1--;
 }

 return 1;
}
