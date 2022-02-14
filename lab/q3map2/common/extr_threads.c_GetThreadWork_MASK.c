
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int FUNC_4( void ){
 int VAR_5;
 int VAR_6;

 FUNC_1();

 if ( VAR_0 == VAR_4 ) {
  FUNC_2();
  return -1;
 }

 VAR_6 = 10 * VAR_0 / VAR_4;
 if ( VAR_6 != VAR_1 ) {
  VAR_1 = VAR_6;
  if ( VAR_2 ) {
   FUNC_0( "%i...", VAR_6 );
   FUNC_3( VAR_3 );
  }
 }

 VAR_5 = VAR_0;
 VAR_0++;
 FUNC_2();

 return VAR_5;
}
