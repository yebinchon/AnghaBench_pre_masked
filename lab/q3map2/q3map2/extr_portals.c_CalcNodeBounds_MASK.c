
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* winding; TYPE_3__** nodes; struct TYPE_6__** next; } ;
typedef TYPE_2__ portal_t ;
struct TYPE_7__ {int maxs; int mins; TYPE_2__* portals; } ;
typedef TYPE_3__ node_t ;
struct TYPE_5__ {int numpoints; int * p; } ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2( node_t *VAR_0 ){
 portal_t *VAR_1;
 int VAR_2;
 int VAR_3;


 FUNC_1( VAR_0->mins, VAR_0->maxs );
 for ( VAR_1 = VAR_0->portals ; VAR_1 ; VAR_1 = VAR_1->next[VAR_2] )
 {
  VAR_2 = ( VAR_1->nodes[1] == VAR_0 );
  for ( VAR_3 = 0 ; VAR_3 < VAR_1->winding->numpoints ; VAR_3++ )
   FUNC_0( VAR_1->winding->p[VAR_3], VAR_0->mins, VAR_0->maxs );
 }
}
