
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int picoMemStream_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,void*,int) ;
 scalar_t__ VAR_1 ;

void *FUNC_3( picoMemStream_t *VAR_2, int VAR_3 ){
 void *VAR_4;

 if ( VAR_1 == VAR_0 ) {
  return ((void*)0);
 }
 if ( VAR_3 < 0 ) {
  VAR_1 = VAR_0;
  return ((void*)0);
 }
 VAR_4 = FUNC_0( VAR_3 );
 if ( !VAR_4 ) {
  VAR_1 = VAR_0;
  return ((void*)0);
 }
 if ( 1 != FUNC_2( VAR_2, VAR_4, VAR_3 ) ) {
  VAR_1 = VAR_0;
  FUNC_1( VAR_4 );
  return ((void*)0);
 }

 VAR_1 += VAR_3;
 return VAR_4;
}
