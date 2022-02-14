
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* gamePath; char* magic; char* arg; int homeBasePath; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,...) ;
 TYPE_1__* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_7 (char*,char*,int) ;
 int VAR_3 ;
 int FUNC_8 (int ,char*,...) ;
 int FUNC_9 (char*) ;
 char** VAR_4 ;
 TYPE_1__* VAR_5 ;
 char** VAR_6 ;
 TYPE_1__* VAR_7 ;
 char* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_10 (char*,char*,char*,char*) ;
 scalar_t__ FUNC_11 (char*,char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 int VAR_11 ;
 int FUNC_14 (char*) ;

void FUNC_15( int *VAR_12, char **VAR_13 ){
 int VAR_14, VAR_15, VAR_16, VAR_17, VAR_18;
 char VAR_19[ VAR_2 ];


 FUNC_8( VAR_3, "--- InitPaths ---\n" );


 FUNC_6( VAR_13[ 0 ] );


 VAR_5 = &VAR_7[ 0 ];
 VAR_9 = 0;
 VAR_10 = 0;


 for ( VAR_14 = 0; VAR_14 < *VAR_12; VAR_14++ )
 {

  if ( VAR_13[ VAR_14 ] == ((void*)0) ) {
   continue;
  }


  if ( FUNC_11( VAR_13[ VAR_14 ], "-game" ) == 0 ) {
   if ( ++VAR_14 >= *VAR_12 ) {
    FUNC_4( "Out of arguments: No game specified after %s", VAR_13[ VAR_14 - 1 ] );
   }
   VAR_13[ VAR_14 - 1 ] = ((void*)0);
   VAR_5 = FUNC_5( VAR_13[ VAR_14 ] );
   if ( VAR_5 == ((void*)0) ) {
    VAR_5 = &VAR_7[ 0 ];
   }
   VAR_13[ VAR_14 ] = ((void*)0);
  }


  else if ( FUNC_11( VAR_13[ VAR_14 ], "-fs_basepath" ) == 0 ) {
   if ( ++VAR_14 >= *VAR_12 ) {
    FUNC_4( "Out of arguments: No path specified after %s.", VAR_13[ VAR_14 - 1 ] );
   }
   VAR_13[ VAR_14 - 1 ] = ((void*)0);
   FUNC_0( VAR_13[ VAR_14 ] );
   VAR_13[ VAR_14 ] = ((void*)0);
  }


  else if ( FUNC_11( VAR_13[ VAR_14 ], "-fs_game" ) == 0 ) {
   if ( ++VAR_14 >= *VAR_12 ) {
    FUNC_4( "Out of arguments: No path specified after %s.", VAR_13[ VAR_14 - 1 ] );
   }
   VAR_13[ VAR_14 - 1 ] = ((void*)0);
   FUNC_1( VAR_13[ VAR_14 ] );
   VAR_13[ VAR_14 ] = ((void*)0);
  }
 }


 for ( VAR_14 = 0, VAR_15 = 0, VAR_16 = 0; VAR_14 < *VAR_12 && VAR_15 < *VAR_12; VAR_14++, VAR_15++ )
 {
  for ( ; VAR_15 < *VAR_12 && VAR_13[ VAR_15 ] == ((void*)0); VAR_15++ ) ;
  VAR_13[ VAR_14 ] = VAR_13[ VAR_15 ];
  if ( VAR_13[ VAR_14 ] != ((void*)0) ) {
   VAR_16++;
  }
 }
 *VAR_12 = VAR_16;


 FUNC_1( VAR_5->gamePath );


 if ( VAR_9 == 0 ) {

  VAR_18 = FUNC_13( VAR_5->magic );
  for ( VAR_14 = 0; VAR_14 < *VAR_12 && VAR_9 == 0; VAR_14++ )
  {

   FUNC_12( VAR_19, VAR_13[ VAR_14 ] );
   FUNC_3( VAR_19 );
   VAR_17 = FUNC_13( VAR_19 );
   FUNC_8( VAR_3, "Searching for \"%s\" in \"%s\" (%d)...\n", VAR_5->magic, VAR_19, VAR_14 );


   for ( VAR_15 = 0; VAR_15 < ( VAR_17 - VAR_18 ); VAR_15++ )
   {

    if ( FUNC_7( &VAR_19[ VAR_15 ], VAR_5->magic, VAR_18 ) == 0 ) {

     while ( VAR_19[ ++VAR_15 ] != '/' && VAR_19[ VAR_15 ] != '\0' ) ;
     VAR_19[ VAR_15 ] = '\0';


     FUNC_0( VAR_19 );
     break;
    }
   }
  }


  if ( VAR_9 == 0 ) {
   FUNC_0( VAR_8 );
  }


  if ( VAR_9 == 0 ) {
   FUNC_4( "Failed to find a valid base path." );
  }
 }


 FUNC_2( VAR_5->homeBasePath );


 if ( VAR_9 > VAR_0 ) {
  VAR_9 = VAR_0;
 }
 if ( VAR_10 > VAR_1 ) {
  VAR_10 = VAR_1;
 }


 for ( VAR_15 = 0; VAR_15 < VAR_10; VAR_15++ )
 {

  for ( VAR_14 = 0; VAR_14 < VAR_9; VAR_14++ )
  {

   FUNC_10( VAR_19, "%s/%s/", VAR_4[ VAR_14 ], VAR_6[ VAR_15 ] );

   if (FUNC_11(VAR_5->arg, "quakelive") == 0 ) {
    VAR_11 = 1;
   } else {
    VAR_11 = 0;
   }
   FUNC_14( VAR_19 );
  }
 }


 FUNC_9( "\n" );
}
