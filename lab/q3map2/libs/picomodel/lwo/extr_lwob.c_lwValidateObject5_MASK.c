
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int picoMemStream_t ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

int FUNC_3( char *VAR_6, picoMemStream_t *VAR_7, unsigned int *VAR_8, int *VAR_9 ){
 unsigned int VAR_10, VAR_11, VAR_12;




 if ( !VAR_7 ) {
  return VAR_3;
 }



 FUNC_2( 0 );
 VAR_10 = FUNC_0( VAR_7 );
 VAR_11 = FUNC_0( VAR_7 );
 VAR_12 = FUNC_0( VAR_7 );
 if ( 12 != FUNC_1() ) {
  return VAR_4;
 }



 if ( VAR_10 != VAR_0 || VAR_12 != VAR_1 ) {
  if ( VAR_9 ) {
   *VAR_9 = 12;
  }
  return VAR_2;
 }

 return VAR_5;
}
