
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_9__ {scalar_t__ planenum; int maxs; int mins; int sky; struct TYPE_9__** children; } ;
typedef TYPE_2__ node_t ;
struct TYPE_10__ {int numVerts; TYPE_1__* verts; } ;
typedef TYPE_3__ mapDrawSurface_t ;
struct TYPE_8__ {int xyz; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*) ;
 scalar_t__ VAR_0 ;

int FUNC_2( mapDrawSurface_t *VAR_1, node_t *VAR_2, qboolean VAR_3 ){
 int VAR_4, VAR_5 = 0;



 if ( VAR_2 == ((void*)0) ) {
  return 0;
 }


 if ( VAR_2->planenum != VAR_0 ) {

  VAR_5 += FUNC_2( VAR_1, VAR_2->children[ 0 ], VAR_3 );
  VAR_5 += FUNC_2( VAR_1, VAR_2->children[ 1 ], VAR_3 );
  return VAR_5;
 }


 if ( VAR_3 ) {

  if ( !VAR_2->sky ) {
   return 0;
  }


  for ( VAR_4 = 0; VAR_4 < VAR_1->numVerts; VAR_4++ )
   FUNC_0( VAR_1->verts[ VAR_4 ].xyz, VAR_2->mins, VAR_2->maxs );
 }


 return FUNC_1( VAR_1, VAR_2 );
}
