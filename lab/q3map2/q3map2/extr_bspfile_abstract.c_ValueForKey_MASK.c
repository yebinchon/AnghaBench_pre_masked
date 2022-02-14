
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char const* value; int key; struct TYPE_4__* next; } ;
typedef TYPE_1__ epair_t ;
struct TYPE_5__ {TYPE_1__* epairs; } ;
typedef TYPE_2__ entity_t ;


 int FUNC_0 (int ,char const*) ;

const char *FUNC_1( const entity_t *VAR_0, const char *VAR_1 ){
 epair_t *VAR_2;



 if ( VAR_0 == ((void*)0) ) {
  return "";
 }


 for ( VAR_2 = VAR_0->epairs; VAR_2 != ((void*)0); VAR_2 = VAR_2->next )
 {
  if ( !FUNC_0( VAR_2->key, VAR_1 ) ) {
   return VAR_2->value;
  }
 }


 return "";
}
