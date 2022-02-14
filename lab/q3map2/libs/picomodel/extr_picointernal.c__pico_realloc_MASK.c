
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (void*) ;
 int * VAR_0 ;
 int FUNC_2 (void*,void*,size_t) ;

void *FUNC_3( void **VAR_1, size_t VAR_2, size_t VAR_3 ){
 void *VAR_4;


 if ( VAR_1 == ((void*)0) ) {
  return ((void*)0);
 }
 if ( VAR_3 < VAR_2 ) {
  return *VAR_1;
 }
 if ( VAR_0 == ((void*)0) ) {
  return ((void*)0);
 }


 VAR_4 = FUNC_0( VAR_3 );
 if ( VAR_4 == ((void*)0) ) {
  return ((void*)0);
 }


 if ( *VAR_1 != ((void*)0) ) {
  FUNC_2( VAR_4, *VAR_1, VAR_2 );
  FUNC_1( *VAR_1 );
 }


 *VAR_1 = VAR_4;
 return *VAR_1;
}
