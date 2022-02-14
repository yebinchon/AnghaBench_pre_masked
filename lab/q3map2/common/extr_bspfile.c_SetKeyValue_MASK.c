
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {void* value; void* key; struct TYPE_5__* next; } ;
typedef TYPE_1__ epair_t ;
struct TYPE_6__ {TYPE_1__* epairs; } ;
typedef TYPE_2__ entity_t ;


 void* FUNC_0 (char const*) ;
 int FUNC_1 (void*) ;
 TYPE_1__* FUNC_2 (int) ;
 int FUNC_3 (void*,char const*) ;

void FUNC_4( entity_t *VAR_0, const char *VAR_1, const char *VAR_2 ) {
 epair_t *VAR_3;

 for ( VAR_3 = VAR_0->epairs ; VAR_3 ; VAR_3 = VAR_3->next ) {
  if ( !FUNC_3( VAR_3->key, VAR_1 ) ) {
   FUNC_1( VAR_3->value );
   VAR_3->value = FUNC_0( VAR_2 );
   return;
  }
 }
 VAR_3 = FUNC_2( sizeof( *VAR_3 ) );
 VAR_3->next = VAR_0->epairs;
 VAR_0->epairs = VAR_3;
 VAR_3->key = FUNC_0( VAR_1 );
 VAR_3->value = FUNC_0( VAR_2 );
}
