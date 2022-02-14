
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int picoMemStream_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int *,unsigned int*,int*) ;
 int FUNC_3 (int ) ;

int FUNC_4( char *VAR_7, picoMemStream_t *VAR_8, unsigned int *VAR_9, int *VAR_10 ){
 unsigned int VAR_11, VAR_12, VAR_13;



 if ( !VAR_8 ) {
  return VAR_4;
 }



 FUNC_3( 0 );
 VAR_11 = FUNC_0( VAR_8 );
 VAR_12 = FUNC_0( VAR_8 );
 VAR_13 = FUNC_0( VAR_8 );
 if ( 12 != FUNC_1() ) {
  return VAR_5;
 }



 if ( VAR_11 != VAR_0 ) {
  if ( VAR_10 ) {
   *VAR_10 = 12;
  }
  return VAR_5;
 }

 if ( VAR_13 != VAR_1 ) {
  if ( VAR_13 == VAR_2 ) {
   return FUNC_2( VAR_7, VAR_8, VAR_9, VAR_10 );
  }
  else {
   if ( VAR_10 ) {
    *VAR_10 = 12;
   }
   return VAR_3;
  }
 }

 return VAR_6;
}
