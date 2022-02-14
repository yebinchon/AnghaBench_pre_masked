
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__** nodes; struct TYPE_7__** next; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_8__ {scalar_t__ planenum; TYPE_1__* portals; struct TYPE_8__** children; } ;
typedef TYPE_2__ node_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_2__*) ;

void FUNC_2( node_t *VAR_1 ){
 portal_t *VAR_2, *VAR_3;
 int VAR_4;


 if ( VAR_1->planenum != VAR_0 ) {
  FUNC_2( VAR_1->children[0] );
  FUNC_2( VAR_1->children[1] );
 }


 for ( VAR_2 = VAR_1->portals ; VAR_2 ; VAR_2 = VAR_3 )
 {
  VAR_4 = ( VAR_2->nodes[1] == VAR_1 );
  VAR_3 = VAR_2->next[VAR_4];

  FUNC_1( VAR_2, VAR_2->nodes[!VAR_4] );
  FUNC_0( VAR_2 );
 }
 VAR_1->portals = ((void*)0);
}
