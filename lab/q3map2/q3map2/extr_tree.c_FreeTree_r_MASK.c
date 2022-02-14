
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ planenum; scalar_t__ volume; int brushlist; struct TYPE_4__** children; } ;
typedef TYPE_1__ node_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;

void FUNC_3( node_t *VAR_1 ){

 if ( VAR_1->planenum != VAR_0 ) {
  FUNC_3( VAR_1->children[0] );
  FUNC_3( VAR_1->children[1] );
 }


 FUNC_1( VAR_1->brushlist );


 if ( VAR_1->volume ) {
  FUNC_0( VAR_1->volume );
 }

 FUNC_2( VAR_1 );
}
