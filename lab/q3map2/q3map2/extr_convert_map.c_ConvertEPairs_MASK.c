
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* key; char* value; struct TYPE_4__* next; } ;
typedef TYPE_1__ epair_t ;
struct TYPE_5__ {TYPE_1__* epairs; } ;
typedef TYPE_2__ entity_t ;
typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (int *,char*,char*,char*) ;

__attribute__((used)) static void FUNC_2( FILE *VAR_0, entity_t *VAR_1 ){
 epair_t *VAR_2;



 for ( VAR_2 = VAR_1->epairs; VAR_2 != ((void*)0); VAR_2 = VAR_2->next )
 {

  if ( VAR_2->key[ 0 ] == '\0' || VAR_2->value[ 0 ] == '\0' ) {
   continue;
  }


  if ( !FUNC_0( VAR_2->key, "model" ) && VAR_2->value[ 0 ] == '*' ) {
   continue;
  }


  FUNC_1( VAR_0, "\t\"%s\" \"%s\"\n", VAR_2->key, VAR_2->value );
 }
}
