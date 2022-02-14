
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int valid; } ;
struct TYPE_5__ {int * leaves; int * areas; TYPE_1__ i; } ;
typedef TYPE_2__ aas_entity_t ;
struct TYPE_6__ {int maxentities; TYPE_2__* entities; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_3__ VAR_0 ;

void FUNC_2(void)
{
 int VAR_1;
 aas_entity_t *VAR_2;

 for (VAR_1 = 0; VAR_1 < VAR_0.maxentities; VAR_1++)
 {
  VAR_2 = &VAR_0.entities[VAR_1];
  if (!VAR_2->i.valid)
  {
   FUNC_0( VAR_2->areas );
   VAR_2->areas = ((void*)0);
   FUNC_1( VAR_2->leaves );
   VAR_2->leaves = ((void*)0);
  }
 }
}
