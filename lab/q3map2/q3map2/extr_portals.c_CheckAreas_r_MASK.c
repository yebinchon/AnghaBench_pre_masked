
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ planenum; int cluster; int area; TYPE_1__* brushlist; scalar_t__ areaportal; scalar_t__ opaque; struct TYPE_6__** children; } ;
typedef TYPE_2__ node_t ;
struct TYPE_7__ {int* portalareas; int brushNum; } ;
typedef TYPE_3__ brush_t ;
struct TYPE_5__ {TYPE_3__* original; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;

void FUNC_1( node_t *VAR_2 ){
 brush_t *VAR_3;

 if ( VAR_2->planenum != VAR_0 ) {
  FUNC_1( VAR_2->children[0] );
  FUNC_1( VAR_2->children[1] );
  return;
 }

 if ( VAR_2->opaque ) {
  return;
 }

 if ( VAR_2->cluster != -1 ) {
  if ( VAR_2->area == -1 ) {
   FUNC_0( VAR_1, "WARNING: cluster %d has area set to -1\n", VAR_2->cluster );
  }
 }
 if ( VAR_2->areaportal ) {
  VAR_3 = VAR_2->brushlist->original;


  if ( VAR_3->portalareas[0] == -1 || VAR_3->portalareas[1] == -1 ) {
   FUNC_0( VAR_1, "WARNING: areaportal brush %i doesn't touch two areas\n", VAR_3->brushNum );
  }
 }
}
