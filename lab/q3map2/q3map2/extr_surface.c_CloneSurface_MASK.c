
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int shaderInfo_t ;
struct TYPE_7__ {int numVerts; int numIndexes; struct TYPE_7__* indexes; struct TYPE_7__* verts; int * shaderInfo; int * sideRef; int type; } ;
typedef TYPE_1__ mapDrawSurface_t ;


 TYPE_1__* FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 void* FUNC_2 (int) ;

mapDrawSurface_t *FUNC_3( mapDrawSurface_t *VAR_0, shaderInfo_t *VAR_1 ){
 mapDrawSurface_t *VAR_2;



 if ( VAR_0 == ((void*)0) || VAR_1 == ((void*)0) ) {
  return ((void*)0);
 }


 VAR_2 = FUNC_0( VAR_0->type );
 if ( VAR_2 == ((void*)0) ) {
  return ((void*)0);
 }


 FUNC_1( VAR_2, VAR_0, sizeof( *VAR_2 ) );


 VAR_2->sideRef = ((void*)0);


 VAR_2->shaderInfo = VAR_1;


 if ( VAR_2->numVerts > 0 ) {
  VAR_2->verts = FUNC_2( VAR_2->numVerts * sizeof( *VAR_2->verts ) );
  FUNC_1( VAR_2->verts, VAR_0->verts, VAR_2->numVerts * sizeof( *VAR_2->verts ) );
 }


 if ( VAR_2->numIndexes <= 0 ) {
  return VAR_2;
 }
 VAR_2->indexes = FUNC_2( VAR_2->numIndexes * sizeof( *VAR_2->indexes ) );
 FUNC_1( VAR_2->indexes, VAR_0->indexes, VAR_2->numIndexes * sizeof( *VAR_2->indexes ) );


 return VAR_2;
}
