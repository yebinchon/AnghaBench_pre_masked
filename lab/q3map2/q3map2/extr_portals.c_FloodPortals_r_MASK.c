
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_4__ {TYPE_2__** nodes; struct TYPE_4__** next; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_5__ {int occupied; TYPE_1__* portals; scalar_t__ opaque; int skybox; } ;
typedef TYPE_2__ node_t ;


 int VAR_0 ;

void FUNC_0( node_t *VAR_1, int VAR_2, qboolean VAR_3 ){
 int VAR_4;
 portal_t *VAR_5;


 if ( VAR_3 ) {
  VAR_1->skybox = VAR_3;
 }

 if ( VAR_1->occupied || VAR_1->opaque ) {
  return;
 }

 VAR_0++;
 VAR_1->occupied = VAR_2;

 for ( VAR_5 = VAR_1->portals; VAR_5; VAR_5 = VAR_5->next[ VAR_4 ] )
 {
  VAR_4 = ( VAR_5->nodes[ 1 ] == VAR_1 );
  FUNC_0( VAR_5->nodes[ !VAR_4 ], VAR_2 + 1, VAR_3 );
 }
}
