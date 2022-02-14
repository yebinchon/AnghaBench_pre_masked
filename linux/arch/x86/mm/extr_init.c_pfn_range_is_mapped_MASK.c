
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long start; unsigned long end; } ;


 int VAR_0 ;
 TYPE_1__* VAR_1 ;

bool FUNC_0(unsigned long VAR_2, unsigned long VAR_3)
{
 int VAR_4;

 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  if ((VAR_2 >= VAR_1[VAR_4].start) &&
      (VAR_3 <= VAR_1[VAR_4].end))
   return 1;

 return 0;
}
