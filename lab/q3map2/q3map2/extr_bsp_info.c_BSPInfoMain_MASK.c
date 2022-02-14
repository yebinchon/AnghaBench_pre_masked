
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_10 (char*,char*) ;

int FUNC_11( int VAR_2, char **VAR_3 ){
 int VAR_4;
 char VAR_5[ 1024 ], VAR_6[ 64 ];
 int VAR_7;
 FILE *VAR_8;



 if ( VAR_2 < 1 ) {
  FUNC_7( "No files to dump info for.\n" );
  return -1;
 }


 VAR_0 = VAR_1;


 for ( VAR_4 = 0; VAR_4 < VAR_2; VAR_4++ )
 {
  FUNC_7( "---------------------------------\n" );


  FUNC_10( VAR_5, VAR_3[ VAR_4 ] );
  FUNC_1( VAR_5, VAR_6 );
  if ( !FUNC_5( VAR_6, "map" ) ) {
   FUNC_6( VAR_5 );
  }
  FUNC_0( VAR_5, ".bsp" );
  VAR_8 = FUNC_9( VAR_5, "rb" );
  if ( VAR_8 ) {
   VAR_7 = FUNC_4( VAR_8 );
   FUNC_8( VAR_8 );
  }
  else{
   VAR_7 = 0;
  }


  FUNC_7( "%s\n", VAR_5 );
  FUNC_2( VAR_5 );
  FUNC_3();


  FUNC_7( "\n" );
  FUNC_7( "          total         %9d\n", VAR_7 );
  FUNC_7( "                        %9d KB\n", VAR_7 / 1024 );
  FUNC_7( "                        %9d MB\n", VAR_7 / ( 1024 * 1024 ) );

  FUNC_7( "---------------------------------\n" );
 }


 return VAR_4;
}
