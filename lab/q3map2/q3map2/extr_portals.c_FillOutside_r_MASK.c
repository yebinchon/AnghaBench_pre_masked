
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ planenum; scalar_t__ opaque; int occupied; struct TYPE_3__** children; } ;
typedef TYPE_1__ node_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

void FUNC_0( node_t *VAR_5 ){
 if ( VAR_5->planenum != VAR_0 ) {
  FUNC_0( VAR_5->children[0] );
  FUNC_0( VAR_5->children[1] );
  return;
 }



 if ( !VAR_5->occupied ) {
  if ( !VAR_5->opaque ) {
   VAR_2++;
   VAR_5->opaque = VAR_4;
  }
  else {
   VAR_3++;
  }
 }
 else {
  VAR_1++;
 }

}
