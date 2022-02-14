
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int numpoints; int * p; } ;
typedef TYPE_1__ winding_t ;
typedef int vec3_t ;
struct TYPE_12__ {int headnode; } ;
typedef TYPE_2__ tree_t ;
struct TYPE_13__ {int numFoliageInstances; int patchHeight; int numIndexes; size_t* indexes; size_t numVerts; TYPE_4__* verts; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_14__ {int xyz; } ;
typedef TYPE_4__ bspDrawVert_t ;


 TYPE_1__* FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,size_t) ;
 scalar_t__ FUNC_2 (int ,TYPE_3__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_3__*,int ) ;
 int FUNC_4 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_5( mapDrawSurface_t *VAR_0, tree_t *VAR_1 ){
 int VAR_2, VAR_3, VAR_4;
 bspDrawVert_t *VAR_5;
 vec3_t VAR_6;
 winding_t *VAR_7;



 VAR_4 = 0;
 for ( VAR_2 = 0; VAR_2 < VAR_0->numFoliageInstances; VAR_2++ )
 {

  VAR_5 = VAR_0->verts + VAR_0->patchHeight + VAR_2;


  for ( VAR_3 = 0; VAR_3 < VAR_0->numIndexes; VAR_3 += 3 )
  {

   if ( VAR_0->indexes[ VAR_3 ] >= VAR_0->numVerts ||
     VAR_0->indexes[ VAR_3 + 1 ] >= VAR_0->numVerts ||
     VAR_0->indexes[ VAR_3 + 2 ] >= VAR_0->numVerts ) {
    FUNC_1( "Index %d greater than vertex count %d", VAR_0->indexes[ VAR_3 ], VAR_0->numVerts );
   }


   VAR_7 = FUNC_0( 3 );
   VAR_7->numpoints = 3;
   FUNC_4( VAR_5->xyz, VAR_0->verts[ VAR_0->indexes[ VAR_3 ] ].xyz, VAR_7->p[ 0 ] );
   FUNC_4( VAR_5->xyz, VAR_0->verts[ VAR_0->indexes[ VAR_3 + 1 ] ].xyz, VAR_7->p[ 1 ] );
   FUNC_4( VAR_5->xyz, VAR_0->verts[ VAR_0->indexes[ VAR_3 + 2 ] ].xyz, VAR_7->p[ 2 ] );
   VAR_4 += FUNC_3( VAR_7, VAR_0, VAR_1->headnode );
  }


  for ( VAR_3 = 0; VAR_3 < ( VAR_0->numVerts - VAR_0->numFoliageInstances ); VAR_3++ )
  {
   FUNC_4( VAR_5->xyz, VAR_0->verts[ VAR_3 ].xyz, VAR_6 );
   VAR_4 += FUNC_2( VAR_6, VAR_0, VAR_1->headnode );
  }
 }

 return VAR_4;
}
