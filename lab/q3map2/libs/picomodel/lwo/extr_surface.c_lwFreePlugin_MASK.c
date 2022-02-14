
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* data; struct TYPE_4__* name; struct TYPE_4__* ord; } ;
typedef TYPE_1__ lwPlugin ;


 int FUNC_0 (TYPE_1__*) ;

void FUNC_1( lwPlugin *VAR_0 ){
 if ( VAR_0 ) {
  if ( VAR_0->ord ) {
   FUNC_0( VAR_0->ord );
  }
  if ( VAR_0->name ) {
   FUNC_0( VAR_0->name );
  }
  if ( VAR_0->data ) {
   FUNC_0( VAR_0->data );
  }
  FUNC_0( VAR_0 );
 }
}
