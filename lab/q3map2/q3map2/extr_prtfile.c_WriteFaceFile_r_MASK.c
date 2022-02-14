
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int numpoints; int ** p; } ;
typedef TYPE_1__ winding_t ;
struct TYPE_7__ {TYPE_3__** nodes; TYPE_1__* winding; struct TYPE_7__** next; } ;
typedef TYPE_2__ portal_t ;
struct TYPE_8__ {scalar_t__ planenum; int cluster; TYPE_2__* portals; scalar_t__ opaque; struct TYPE_8__** children; } ;
typedef TYPE_3__ node_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_1 ;

void FUNC_3( node_t *VAR_2 ){
 int VAR_3, VAR_4;
 portal_t *VAR_5;
 winding_t *VAR_6;


 if ( VAR_2->planenum != VAR_0 ) {
  FUNC_3( VAR_2->children[0] );
  FUNC_3( VAR_2->children[1] );
  return;
 }

 if ( VAR_2->opaque ) {
  return;
 }

 for ( VAR_5 = VAR_2->portals ; VAR_5 ; VAR_5 = VAR_5->next[VAR_4] )
 {
  VAR_6 = VAR_5->winding;
  VAR_4 = ( VAR_5->nodes[1] == VAR_2 );
  if ( VAR_6 ) {
   if ( FUNC_0( VAR_5 ) ) {
    continue;
   }


   if ( VAR_5->nodes[0] == VAR_2 ) {
    FUNC_2( VAR_1,"%i %i ",VAR_6->numpoints, VAR_5->nodes[0]->cluster );
    for ( VAR_3 = 0 ; VAR_3 < VAR_6->numpoints ; VAR_3++ )
    {
     FUNC_2( VAR_1,"(" );
     FUNC_1( VAR_1, VAR_6->p[VAR_3][0] );
     FUNC_1( VAR_1, VAR_6->p[VAR_3][1] );
     FUNC_1( VAR_1, VAR_6->p[VAR_3][2] );
     FUNC_2( VAR_1,") " );
    }
    FUNC_2( VAR_1,"\n" );
   }
   else
   {
    FUNC_2( VAR_1,"%i %i ",VAR_6->numpoints, VAR_5->nodes[1]->cluster );
    for ( VAR_3 = VAR_6->numpoints - 1; VAR_3 >= 0; VAR_3-- )
    {
     FUNC_2( VAR_1,"(" );
     FUNC_1( VAR_1, VAR_6->p[VAR_3][0] );
     FUNC_1( VAR_1, VAR_6->p[VAR_3][1] );
     FUNC_1( VAR_1, VAR_6->p[VAR_3][2] );
     FUNC_2( VAR_1,") " );
    }
    FUNC_2( VAR_1,"\n" );
   }
  }
 }
}
