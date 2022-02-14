
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {struct TYPE_5__** next; TYPE_2__** nodes; } ;
typedef TYPE_1__ portal_t ;
struct TYPE_6__ {scalar_t__ planenum; int cluster; int area; TYPE_1__* portals; scalar_t__ opaque; struct TYPE_6__** children; } ;
typedef TYPE_2__ node_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_1( node_t *VAR_4 ){
 portal_t *VAR_5;

 if ( VAR_4->planenum != VAR_0 ) {

  VAR_4->cluster = -99;
  FUNC_1( VAR_4->children[0] );
  FUNC_1( VAR_4->children[1] );
  return;
 }

 VAR_4->area = -1;

 if ( VAR_4->opaque ) {

  VAR_4->cluster = -1;
  return;
 }

 VAR_4->cluster = VAR_2;
 VAR_2++;


 for ( VAR_5 = VAR_4->portals ; VAR_5 ; )
 {
  if ( VAR_5->nodes[0] == VAR_4 ) {
   if ( FUNC_0( VAR_5 ) ) {
    VAR_3++;
   }
   else{
    VAR_1++;
   }
   VAR_5 = VAR_5->next[0];
  }
  else
  {
   if ( !FUNC_0( VAR_5 ) ) {
    VAR_1++;
   }
   VAR_5 = VAR_5->next[1];
  }
 }
}
