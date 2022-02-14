
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef unsigned long phys_addr_t ;
struct TYPE_3__ {unsigned long start; unsigned long limit; unsigned long phys; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

phys_addr_t FUNC_1(unsigned long VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2)
  if (VAR_1 >= VAR_0[VAR_2].start && VAR_1 < VAR_0[VAR_2].limit)
   return VAR_0[VAR_2].phys + (VAR_1 - VAR_0[VAR_2].start);
 return 0;
}
