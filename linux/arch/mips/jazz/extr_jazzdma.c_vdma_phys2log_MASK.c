
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int frame; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;

unsigned long FUNC_0(unsigned long VAR_3)
{
 int VAR_4;
 int VAR_5;

 VAR_5 = VAR_3 & ~(VAR_0 - 1);

 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if (VAR_2[VAR_4].frame == VAR_5)
   break;
 }

 if (VAR_4 == VAR_1)
  return ~0UL;

 return (VAR_4 << 12) + (VAR_3 & (VAR_0 - 1));
}
