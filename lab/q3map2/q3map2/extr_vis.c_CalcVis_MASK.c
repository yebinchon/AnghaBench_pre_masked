
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int FUNC_5 (int,int ,int ) ;
 int FUNC_6 () ;
 int FUNC_7 (char*,...) ;
 char* FUNC_8 (int *,char*) ;
 float FUNC_9 (char const*) ;
 int * VAR_1 ;
 float VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;

void FUNC_10( void ){
 int VAR_10;
 const char *VAR_11;



 VAR_2 = 0.0f;
 VAR_11 = FUNC_8( &VAR_1[ 0 ], "_farplanedist" );
 if ( VAR_11[ 0 ] == '\0' ) {
  VAR_11 = FUNC_8( &VAR_1[ 0 ], "fogclip" );
 }
 if ( VAR_11[ 0 ] == '\0' ) {
  VAR_11 = FUNC_8( &VAR_1[ 0 ], "distancecull" );
 }
 if ( VAR_11[ 0 ] != '\0' ) {
  VAR_2 = FUNC_9( VAR_11 );
  if ( VAR_2 > 0.0f ) {
   FUNC_7( "farplane distance = %.1f\n", VAR_2 );
  }
  else{
   VAR_2 = 0.0f;
  }
 }



 FUNC_7( "\n--- BasePortalVis (%d) ---\n", VAR_5 * 2 );
 FUNC_5( VAR_5 * 2, VAR_8, VAR_0 );



 FUNC_6();

 if ( VAR_3 ) {
  FUNC_0();
 }
 else if ( VAR_4 ) {
  FUNC_3();
 }
 else if ( VAR_6 ) {
  FUNC_2();
 }
 else {
  FUNC_1();
 }



 FUNC_7( "creating leaf vis...\n" );
 for ( VAR_10 = 0 ; VAR_10 < VAR_7 ; VAR_10++ )
  FUNC_4( VAR_10 );

 FUNC_7( "Total visible clusters: %i\n", VAR_9 );
 FUNC_7( "Average clusters visible: %i\n", VAR_9 / VAR_7 );
}
