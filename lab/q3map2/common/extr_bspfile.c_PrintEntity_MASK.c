
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int value; int key; struct TYPE_5__* next; } ;
typedef TYPE_1__ epair_t ;
struct TYPE_6__ {TYPE_1__* epairs; } ;
typedef TYPE_2__ entity_t ;


 int FUNC_0 (char*,TYPE_2__ const*,...) ;

void FUNC_1( const entity_t *VAR_0 ) {
 epair_t *VAR_1;

 FUNC_0( "------- entity %p -------\n", VAR_0 );
 for ( VAR_1 = VAR_0->epairs ; VAR_1 ; VAR_1 = VAR_1->next ) {
  FUNC_0( "%s = %s\n", VAR_1->key, VAR_1->value );
 }

}
