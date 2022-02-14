
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {struct TYPE_6__** next; TYPE_2__** nodes; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_7__ {TYPE_1__* portals; } ;
typedef TYPE_2__ node_t ;


 int FUNC_0 (char*) ;

void FUNC_1( portal_t *VAR_0, node_t *VAR_1, node_t *VAR_2 ){
 if ( VAR_0->nodes[0] || VAR_0->nodes[1] ) {
  FUNC_0( "AddPortalToNode: allready included" );
 }

 VAR_0->nodes[0] = VAR_1;
 VAR_0->next[0] = VAR_1->portals;
 VAR_1->portals = VAR_0;

 VAR_0->nodes[1] = VAR_2;
 VAR_0->next[1] = VAR_2->portals;
 VAR_2->portals = VAR_0;
}
