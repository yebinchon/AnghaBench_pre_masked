
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int entity_t ;


 char* FUNC_0 (int const*,char*) ;
 int FUNC_1 (char const*) ;

void FUNC_2( const entity_t *VAR_0, const entity_t *VAR_1, int *VAR_2, int *VAR_3 ){
 const char *VAR_4;



 if ( VAR_2 != ((void*)0) ) {
  VAR_4 = FUNC_0( VAR_0, "_castShadows" );
  if ( VAR_4[ 0 ] == '\0' ) {
   VAR_4 = FUNC_0( VAR_0, "_cs" );
  }
  if ( VAR_4[ 0 ] == '\0' ) {
   VAR_4 = FUNC_0( VAR_1, "_castShadows" );
  }
  if ( VAR_4[ 0 ] == '\0' ) {
   VAR_4 = FUNC_0( VAR_1, "_cs" );
  }
  if ( VAR_4[ 0 ] != '\0' ) {
   *VAR_2 = FUNC_1( VAR_4 );
  }
 }


 if ( VAR_3 != ((void*)0) ) {
  VAR_4 = FUNC_0( VAR_0, "_receiveShadows" );
  if ( VAR_4[ 0 ] == '\0' ) {
   VAR_4 = FUNC_0( VAR_0, "_rs" );
  }
  if ( VAR_4[ 0 ] == '\0' ) {
   VAR_4 = FUNC_0( VAR_1, "_receiveShadows" );
  }
  if ( VAR_4[ 0 ] == '\0' ) {
   VAR_4 = FUNC_0( VAR_1, "_rs" );
  }
  if ( VAR_4[ 0 ] != '\0' ) {
   *VAR_3 = FUNC_1( VAR_4 );
  }
 }
}
