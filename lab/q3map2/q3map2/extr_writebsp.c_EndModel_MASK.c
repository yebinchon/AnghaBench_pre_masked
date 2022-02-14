
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int node_t ;
struct TYPE_5__ {int numBrushes; int firstBrush; } ;
typedef TYPE_1__ entity_t ;
struct TYPE_6__ {int numBSPBrushes; int firstBSPBrush; scalar_t__ firstBSPSurface; scalar_t__ numBSPSurfaces; } ;
typedef TYPE_2__ bspModel_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*) ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;

void FUNC_2( entity_t *VAR_4, node_t *VAR_5 ){
 bspModel_t *VAR_6;



 FUNC_1( VAR_0, "--- EndModel ---\n" );


 VAR_6 = &VAR_1[ VAR_3 ];
 FUNC_0( VAR_5 );


 VAR_6->numBSPSurfaces = VAR_2 - VAR_6->firstBSPSurface;
 VAR_6->firstBSPBrush = VAR_4->firstBrush;
 VAR_6->numBSPBrushes = VAR_4->numBrushes;


 VAR_3++;
}
