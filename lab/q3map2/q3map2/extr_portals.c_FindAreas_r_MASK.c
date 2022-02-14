
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ planenum; int area; scalar_t__ areaportal; scalar_t__ opaque; struct TYPE_4__** children; } ;
typedef TYPE_1__ node_t ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;

void FUNC_1( node_t *VAR_2 ){
 if ( VAR_2->planenum != VAR_0 ) {
  FUNC_1( VAR_2->children[ 0 ] );
  FUNC_1( VAR_2->children[ 1 ] );
  return;
 }

 if ( VAR_2->opaque || VAR_2->areaportal || VAR_2->area != -1 ) {
  return;
 }

 FUNC_0( VAR_2 );
 VAR_1++;
}
