
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ phys_addr_t ;
struct TYPE_3__ {scalar_t__ phys; scalar_t__ limit; scalar_t__ start; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

unsigned long FUNC_1(phys_addr_t VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); ++VAR_2)
  if (VAR_1 >= VAR_0[VAR_2].phys
          && VAR_1 < (VAR_0[VAR_2].limit-VAR_0[VAR_2].start)
                +VAR_0[VAR_2].phys)
   return VAR_0[VAR_2].start+(VAR_1-VAR_0[VAR_2].phys);
 return 0;
}
