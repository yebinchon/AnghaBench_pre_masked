
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int maxentities; TYPE_1__* entities; } ;
struct TYPE_3__ {int * leaves; int * areas; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0(void)
{
 int VAR_1;
 for (VAR_1 = 0; VAR_1 < VAR_0.maxentities; VAR_1++)
 {
  VAR_0.entities[VAR_1].areas = ((void*)0);
  VAR_0.entities[VAR_1].leaves = ((void*)0);
 }
}
