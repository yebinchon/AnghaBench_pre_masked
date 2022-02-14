
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int winding_t ;
struct TYPE_7__ {int planenum; int visibleHull; } ;
typedef TYPE_1__ side_t ;
struct TYPE_8__ {int normal; int dist; } ;
typedef TYPE_2__ plane_t ;
struct TYPE_9__ {int planenum; int opaque; struct TYPE_9__** children; } ;
typedef TYPE_3__ node_t ;


 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ,int ,int ,int **,int **) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_2__* VAR_2 ;

void FUNC_3( winding_t *VAR_3, side_t *VAR_4, node_t *VAR_5 ){
 plane_t *VAR_6;
 winding_t *VAR_7, *VAR_8;

 if ( !VAR_3 ) {
  return;
 }

 if ( VAR_5->planenum != VAR_1 ) {
  if ( VAR_4->planenum == VAR_5->planenum ) {
   FUNC_3( VAR_3, VAR_4, VAR_5->children[0] );
   return;
  }
  if ( VAR_4->planenum == ( VAR_5->planenum ^ 1 ) ) {
   FUNC_3( VAR_3, VAR_4, VAR_5->children[1] );
   return;
  }

  VAR_6 = &VAR_2[ VAR_5->planenum ];
  FUNC_1( VAR_3, VAR_6->normal, VAR_6->dist,
       VAR_0, &VAR_7, &VAR_8 );
  FUNC_2( VAR_3 );

  FUNC_3( VAR_7, VAR_4, VAR_5->children[0] );
  FUNC_3( VAR_8, VAR_4, VAR_5->children[1] );

  return;
 }


 if ( !VAR_5->opaque ) {
  FUNC_0( VAR_3, &VAR_4->visibleHull, VAR_2[ VAR_4->planenum ].normal );
 }

 FUNC_2( VAR_3 );
 return;
}
