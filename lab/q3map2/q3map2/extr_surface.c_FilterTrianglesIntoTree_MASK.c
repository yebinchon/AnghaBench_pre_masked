
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int numpoints; int * p; } ;
typedef TYPE_2__ winding_t ;
struct TYPE_13__ {int headnode; } ;
typedef TYPE_3__ tree_t ;
struct TYPE_14__ {int numIndexes; size_t* indexes; size_t numVerts; TYPE_1__* verts; } ;
typedef TYPE_4__ mapDrawSurface_t ;
struct TYPE_11__ {int xyz; } ;


 TYPE_2__* FUNC_0 (int) ;
 int FUNC_1 (char*,size_t,size_t) ;
 scalar_t__ FUNC_2 (int ,TYPE_4__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_2__*,TYPE_4__*,int ) ;
 int FUNC_4 (int ,int ) ;

__attribute__((used)) static int FUNC_5( mapDrawSurface_t *VAR_0, tree_t *VAR_1 ){
 int VAR_2, VAR_3;
 winding_t *VAR_4;



 VAR_3 = 0;
 for ( VAR_2 = 0; VAR_2 < VAR_0->numIndexes; VAR_2 += 3 )
 {

  if ( VAR_0->indexes[ VAR_2 ] >= VAR_0->numVerts ||
    VAR_0->indexes[ VAR_2 + 1 ] >= VAR_0->numVerts ||
    VAR_0->indexes[ VAR_2 + 2 ] >= VAR_0->numVerts ) {
   FUNC_1( "Index %d greater than vertex count %d", VAR_0->indexes[ VAR_2 ], VAR_0->numVerts );
  }


  VAR_4 = FUNC_0( 3 );
  VAR_4->numpoints = 3;
  FUNC_4( VAR_0->verts[ VAR_0->indexes[ VAR_2 ] ].xyz, VAR_4->p[ 0 ] );
  FUNC_4( VAR_0->verts[ VAR_0->indexes[ VAR_2 + 1 ] ].xyz, VAR_4->p[ 1 ] );
  FUNC_4( VAR_0->verts[ VAR_0->indexes[ VAR_2 + 2 ] ].xyz, VAR_4->p[ 2 ] );
  VAR_3 += FUNC_3( VAR_4, VAR_0, VAR_1->headnode );
 }


 for ( VAR_2 = 0; VAR_2 < VAR_0->numVerts; VAR_2++ )
  VAR_3 += FUNC_2( VAR_0->verts[ VAR_2 ].xyz, VAR_0, VAR_1->headnode );

 return VAR_3;
}
