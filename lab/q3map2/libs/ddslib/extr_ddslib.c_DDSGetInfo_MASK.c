
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int ddsPF_t ;
struct TYPE_4__ {int height; int width; int size; scalar_t__ magic; } ;
typedef TYPE_1__ ddsBuffer_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int ) ;

int FUNC_2( ddsBuffer_t *VAR_0, int *VAR_1, int *VAR_2, ddsPF_t *VAR_3 ){

 if ( VAR_0 == ((void*)0) ) {
  return -1;
 }


 if ( *( (int*) VAR_0->magic ) != *( (int*) "DDS " ) ) {
  return -1;
 }
 if ( FUNC_1( VAR_0->size ) != 124 ) {
  return -1;
 }


 if ( VAR_1 != ((void*)0) ) {
  *VAR_1 = FUNC_1( VAR_0->width );
 }
 if ( VAR_2 != ((void*)0) ) {
  *VAR_2 = FUNC_1( VAR_0->height );
 }


 FUNC_0( VAR_0, VAR_3 );


 return 0;
}
