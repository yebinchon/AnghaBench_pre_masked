
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ planenum; scalar_t__ area; int skybox; scalar_t__ opaque; struct TYPE_3__** children; } ;
typedef TYPE_1__ node_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_0( node_t *VAR_3 ){
 if ( VAR_2 < 0 ) {
  return;
 }

 if ( VAR_3->planenum != VAR_0 ) {
  FUNC_0( VAR_3->children[ 0 ] );
  FUNC_0( VAR_3->children[ 1 ] );
  return;
 }

 if ( VAR_3->opaque || VAR_3->area != VAR_2 ) {
  return;
 }

 VAR_3->skybox = VAR_1;
}
