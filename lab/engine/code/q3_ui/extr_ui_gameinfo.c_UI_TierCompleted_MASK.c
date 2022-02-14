
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int,int*,int*) ;
 int FUNC_2 () ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (int ) ;

int FUNC_5( int VAR_1 ) {
 int VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5;
 int VAR_6;
 const char *VAR_7;

 VAR_4 = VAR_1 / VAR_0;
 VAR_2 = VAR_4 * VAR_0;

 if( VAR_4 == FUNC_2() ) {
  VAR_7 = FUNC_3( "training" );
  if( VAR_1 == FUNC_4( FUNC_0( VAR_7, "num" ) ) ) {
   return 0;
  }
  VAR_7 = FUNC_3( "final" );
  if( !VAR_7 || VAR_1 == FUNC_4( FUNC_0( VAR_7, "num" ) ) ) {
   return VAR_4 + 1;
  }
  return -1;
 }

 for( VAR_3 = 0; VAR_3 < VAR_0; VAR_3++, VAR_2++ ) {
  FUNC_1( VAR_2, &VAR_5, &VAR_6 );
  if ( VAR_5 != 1 ) {
   return -1;
  }
 }
 return VAR_4 + 1;
}
