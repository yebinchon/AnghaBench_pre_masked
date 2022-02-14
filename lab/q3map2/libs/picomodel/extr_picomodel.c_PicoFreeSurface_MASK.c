
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int numSTArrays; int numColorArrays; struct TYPE_5__** color; struct TYPE_5__** st; struct TYPE_5__* name; struct TYPE_5__* faceNormal; struct TYPE_5__* index; struct TYPE_5__* smoothingGroup; struct TYPE_5__* normal; struct TYPE_5__* xyz; } ;
typedef TYPE_1__ picoSurface_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__**) ;

void FUNC_2( picoSurface_t *VAR_0 ){
 int VAR_1;


 if ( VAR_0 == ((void*)0) ) {
  return;
 }


 FUNC_0( VAR_0->xyz );
 FUNC_0( VAR_0->normal );
 FUNC_0( VAR_0->smoothingGroup );
 FUNC_0( VAR_0->index );
 FUNC_0( VAR_0->faceNormal );

 if ( VAR_0->name ) {
  FUNC_0( VAR_0->name );
 }


 for ( VAR_1 = 0; VAR_1 < VAR_0->numSTArrays; VAR_1++ )
  FUNC_0( VAR_0->st[ VAR_1 ] );
 FUNC_1( VAR_0->st );
 for ( VAR_1 = 0; VAR_1 < VAR_0->numColorArrays; VAR_1++ )
  FUNC_0( VAR_0->color[ VAR_1 ] );
 FUNC_1( VAR_0->color );


 FUNC_0( VAR_0 );
}
