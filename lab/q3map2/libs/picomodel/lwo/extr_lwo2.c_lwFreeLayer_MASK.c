
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int vmap; int polygon; int point; struct TYPE_4__* name; } ;
typedef TYPE_1__ lwLayer ;
typedef int ListFreeFunc ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (int ,int ) ;

void FUNC_4( lwLayer *VAR_1 ){
 if ( VAR_1 ) {
  if ( VAR_1->name ) {
   FUNC_0( VAR_1->name );
  }
  FUNC_1( &VAR_1->point );
  FUNC_2( &VAR_1->polygon );
  FUNC_3( VAR_1->vmap, (ListFreeFunc) VAR_0 );
  FUNC_0( VAR_1 );
 }
}
