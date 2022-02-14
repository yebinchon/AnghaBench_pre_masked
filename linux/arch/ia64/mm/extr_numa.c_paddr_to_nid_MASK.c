
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned long start_paddr; unsigned long size; int nid; } ;


 TYPE_1__* VAR_0 ;
 int VAR_1 ;

int
FUNC_0(unsigned long VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if (VAR_2 >= VAR_0[VAR_3].start_paddr &&
      VAR_2 < VAR_0[VAR_3].start_paddr + VAR_0[VAR_3].size)
   break;

 return (VAR_3 < VAR_1) ? VAR_0[VAR_3].nid : (VAR_1 ? -1 : 0);
}
