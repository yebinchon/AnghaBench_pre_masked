
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int numVerts; int * lightmapVecs; TYPE_1__* verts; struct TYPE_8__* parent; int shaderInfo; } ;
typedef TYPE_2__ mapDrawSurface_t ;
struct TYPE_7__ {int xyz; } ;


 TYPE_2__* FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_0 ;

mapDrawSurface_t *FUNC_3( mapDrawSurface_t *VAR_1 ){
 int VAR_2;
 mapDrawSurface_t *VAR_3;



 if ( VAR_1 == ((void*)0) ) {
  return ((void*)0);
 }


 VAR_3 = FUNC_0( VAR_1, VAR_1->shaderInfo );
 if ( VAR_3 == ((void*)0) ) {
  return ((void*)0);
 }


 VAR_3->parent = VAR_1;


 for ( VAR_2 = 0; VAR_2 < VAR_3->numVerts; VAR_2++ )
 {
  FUNC_2( VAR_0, VAR_3->verts[ VAR_2 ].xyz );




 }


 FUNC_1( VAR_3->lightmapVecs[ 2 ] );


 return VAR_3;
}
