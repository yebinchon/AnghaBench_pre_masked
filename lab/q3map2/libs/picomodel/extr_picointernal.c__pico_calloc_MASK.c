
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 void* FUNC_0 (size_t) ;
 int FUNC_1 (void*,int ,size_t) ;

void *FUNC_2( size_t VAR_0, size_t VAR_1 ){
 void *VAR_2;


 if ( VAR_0 == 0 || VAR_1 == 0 ) {
  return ((void*)0);
 }
 if ( &FUNC_0 == ((void*)0) ) {
  return ((void*)0);
 }


 VAR_2 = FUNC_0( VAR_0 * VAR_1 );
 if ( VAR_2 == ((void*)0) ) {
  return ((void*)0);
 }


 FUNC_1( VAR_2,0,VAR_0 * VAR_1 );


 return VAR_2;
}
