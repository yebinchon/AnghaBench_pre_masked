
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int compileFlags; TYPE_3__** nodes; struct TYPE_8__** next; } ;
typedef TYPE_2__ portal_t ;
struct TYPE_9__ {int area; int cluster; TYPE_2__* portals; scalar_t__ skybox; TYPE_1__* brushlist; scalar_t__ areaportal; } ;
typedef TYPE_3__ node_t ;
struct TYPE_10__ {void** portalareas; int brushNum; } ;
typedef TYPE_4__ brush_t ;
struct TYPE_7__ {TYPE_4__* original; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,int ) ;
 void* VAR_2 ;
 void* VAR_3 ;

void FUNC_2( node_t *VAR_4 ){
 int VAR_5;
 portal_t *VAR_6;
 brush_t *VAR_7;


 if ( VAR_4->areaportal ) {
  if ( VAR_4->area == -1 ) {
   VAR_4->area = VAR_2;
  }


  VAR_7 = VAR_4->brushlist->original;


  if ( VAR_7->portalareas[ 0 ] == VAR_2 || VAR_7->portalareas[ 1 ] == VAR_2 ) {
   return;
  }


  if ( VAR_7->portalareas[ 1 ] != -1 ) {
   FUNC_1( VAR_1, "WARNING: areaportal brush %i touches > 2 areas\n", VAR_7->brushNum );
   return;
  }
  if ( VAR_7->portalareas[ 0 ] != -1 ) {
   VAR_7->portalareas[ 1 ] = VAR_2;
  }
  else{
   VAR_7->portalareas[ 0 ] = VAR_2;
  }

  return;
 }

 if ( VAR_4->area != -1 ) {
  return;
 }
 if ( VAR_4->cluster == -1 ) {
  return;
 }

 VAR_4->area = VAR_2;


 if ( VAR_4->skybox ) {
  VAR_3 = VAR_2;
 }

 for ( VAR_6 = VAR_4->portals; VAR_6; VAR_6 = VAR_6->next[ VAR_5 ] )
 {
  VAR_5 = ( VAR_6->nodes[1] == VAR_4 );


  if ( VAR_6->compileFlags & VAR_0 ) {
   continue;
  }

  if ( !FUNC_0( VAR_6 ) ) {
   continue;
  }

  FUNC_2( VAR_6->nodes[ !VAR_5 ] );
 }
}
