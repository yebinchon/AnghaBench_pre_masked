
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,char*) ;
 int FUNC_1 (int,int*,int*) ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;

int FUNC_4( void ) {
 int VAR_1;
 int VAR_2 = 0;
 int VAR_3;
 const char *VAR_4;

 VAR_4 = FUNC_2( "training" );
 if( VAR_4 ) {
  VAR_1 = FUNC_3( FUNC_0( VAR_4, "num" ) );
  FUNC_1( VAR_1, &VAR_2, &VAR_3 );
  if ( !VAR_2 || VAR_2 > 1 ) {
   return VAR_1;
  }
 }

 for( VAR_1 = 0; VAR_1 < VAR_0; VAR_1++ ) {
  FUNC_1( VAR_1, &VAR_2, &VAR_3 );
  if ( !VAR_2 || VAR_2 > 1 ) {
   return VAR_1;
  }
 }

 VAR_4 = FUNC_2( "final" );
 if( !VAR_4 ) {
  return -1;
 }
 return FUNC_3( FUNC_0( VAR_4, "num" ) );
}
