
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int winding_t ;
typedef int vec3_t ;
struct TYPE_10__ {float dist; int normal; } ;
struct TYPE_8__ {int compileFlags; int * winding; TYPE_2__* onnode; TYPE_3__ plane; TYPE_2__** nodes; struct TYPE_8__** next; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_9__ {size_t planenum; int * children; int compileFlags; TYPE_1__* portals; } ;
typedef TYPE_2__ node_t ;


 int FUNC_0 (TYPE_1__*,int ,int ) ;
 TYPE_1__* FUNC_1 () ;
 int * FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int FUNC_3 (int **,int ,float,int ) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ,int ) ;
 scalar_t__ FUNC_9 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;

void FUNC_10( node_t *VAR_6 ){
 portal_t *VAR_7, *VAR_8;
 winding_t *VAR_9;
 vec3_t VAR_10;
 float VAR_11;
 int VAR_12;

 VAR_9 = FUNC_2( VAR_6 );


 for ( VAR_8 = VAR_6->portals ; VAR_8 && VAR_9; VAR_8 = VAR_8->next[VAR_12] )
 {
  if ( VAR_8->nodes[0] == VAR_6 ) {
   VAR_12 = 0;
   FUNC_7( VAR_8->plane.normal, VAR_10 );
   VAR_11 = VAR_8->plane.dist;
  }
  else if ( VAR_8->nodes[1] == VAR_6 ) {
   VAR_12 = 1;
   FUNC_8( VAR_5, VAR_8->plane.normal, VAR_10 );
   VAR_11 = -VAR_8->plane.dist;
  }
  else{
   FUNC_4( "CutNodePortals_r: mislinked portal" );
  }

  FUNC_3( &VAR_9, VAR_10, VAR_11, VAR_0 );
 }

 if ( !VAR_9 ) {
  return;
 }
 if ( FUNC_9( VAR_9 ) ) {
  VAR_2++;
  FUNC_6( VAR_9 );
  return;
 }

 VAR_7 = FUNC_1();
 VAR_7->plane = VAR_3[VAR_6->planenum];
 VAR_7->onnode = VAR_6;
 VAR_7->winding = VAR_9;
 VAR_7->compileFlags = VAR_6->compileFlags;
 FUNC_0( VAR_7, VAR_6->children[0], VAR_6->children[1] );
}
