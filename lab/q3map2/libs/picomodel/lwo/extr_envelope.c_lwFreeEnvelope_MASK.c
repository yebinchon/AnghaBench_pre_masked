
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int cfilter; int key; struct TYPE_6__* name; } ;
typedef TYPE_1__ lwEnvelope ;
typedef int (* ListFreeFunc ) (TYPE_1__*) ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int (*) (TYPE_1__*)) ;

void FUNC_2( lwEnvelope *VAR_1 ){
 if ( VAR_1 ) {
  if ( VAR_1->name ) {
   FUNC_0( VAR_1->name );
  }
  FUNC_1( VAR_1->key, FUNC_0 );
  FUNC_1( VAR_1->cfilter, (ListFreeFunc) VAR_0 );
  FUNC_0( VAR_1 );
 }
}
