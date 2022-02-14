
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t modelnum; } ;
typedef TYPE_1__ entity_t ;
struct TYPE_6__ {int numBrushes; int firstBrush; } ;


 int FUNC_0 (int *,TYPE_1__*) ;
 int * VAR_0 ;
 TYPE_2__* VAR_1 ;

void FUNC_1(entity_t *VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1[VAR_2->modelnum].numBrushes; VAR_3++)
 {
  FUNC_0(&VAR_0[VAR_1[VAR_2->modelnum].firstBrush + VAR_3], VAR_2);
 }
}
