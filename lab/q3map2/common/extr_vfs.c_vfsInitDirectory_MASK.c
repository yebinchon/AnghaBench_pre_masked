
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int GDir ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 int FUNC_1 (char*,char const*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (char const*,int ,int *) ;
 char* FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 char** VAR_4 ;
 char* FUNC_6 (char const*) ;
 int FUNC_7 (char*,int,char*,char const*,char const*) ;
 int FUNC_8 (char*,char*,char const*,char*) ;
 int FUNC_9 (char*,char const*) ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int FUNC_13 (char*) ;

void FUNC_14( const char *VAR_5 ){
 char VAR_6[VAR_0];
 char *VAR_7;
 GDir *VAR_8;

 if ( VAR_3 == ( VAR_1 - 1 ) ) {
  return;
 }

 FUNC_1( "VFS Init: %s\n", VAR_5 );

 FUNC_9( VAR_4[VAR_3], VAR_5 );
 FUNC_12( VAR_4[VAR_3] );
 FUNC_11( VAR_4[VAR_3] );
 VAR_3++;

 if ( VAR_2 ) {
  VAR_8 = FUNC_3( VAR_5, 0, ((void*)0) );

  if ( VAR_8 != ((void*)0) ) {
   while ( 1 )
   {
    const char* VAR_9 = FUNC_4( VAR_8 );
    if ( VAR_9 == ((void*)0) ) {
     break;
    }

    VAR_7 = FUNC_6( VAR_9 );

    {

     char *VAR_10 = FUNC_10( VAR_7, '.' );

     if ( VAR_10 != ((void*)0) && ( !FUNC_0( VAR_10, ".pk3dir" ) || !FUNC_0( VAR_10, ".dpkdir" ) ) ) {
      if ( VAR_3 == VAR_1 ) {
       continue;
      }
      FUNC_7( VAR_4[VAR_3], VAR_0, "%s/%s", VAR_5, VAR_9 );
      VAR_4[VAR_3][VAR_0-1] = '\0';
      FUNC_12( VAR_4[VAR_3] );
      FUNC_11( VAR_4[VAR_3] );
      ++VAR_3;
     }

     if ( VAR_10 == ((void*)0) || ( FUNC_0( VAR_10, ".pk3" ) != 0 && FUNC_0( VAR_10, ".dpk" ) != 0 ) ) {
      continue;
     }
    }

    FUNC_8( VAR_6, "%s/%s", VAR_5, VAR_7 );
    FUNC_13( VAR_6 );

    FUNC_5( VAR_7 );
   }
   FUNC_2( VAR_8 );
  }
 }
}
