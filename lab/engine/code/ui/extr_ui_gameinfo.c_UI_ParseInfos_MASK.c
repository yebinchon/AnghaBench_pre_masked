
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int key ;


 char* FUNC_0 (char**) ;
 char* FUNC_1 (char**,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*,int) ;
 char* FUNC_5 (scalar_t__) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*) ;
 scalar_t__ FUNC_8 (char*) ;
 char* FUNC_9 (char*,int ) ;

int FUNC_10( char *VAR_5, int VAR_6, char *VAR_7[] ) {
 char *VAR_8;
 int VAR_9;
 char VAR_10[VAR_2];
 char VAR_11[VAR_1];

 VAR_9 = 0;

 while ( 1 ) {
  VAR_8 = FUNC_0( &VAR_5 );
  if ( !VAR_8[0] ) {
   break;
  }
  if ( FUNC_6( VAR_8, "{" ) ) {
   FUNC_2( "Missing { in info file\n" );
   break;
  }

  if ( VAR_9 == VAR_6 ) {
   FUNC_2( "Max infos exceeded\n" );
   break;
  }

  VAR_11[0] = '\0';
  while ( 1 ) {
   VAR_8 = FUNC_1( &VAR_5, VAR_4 );
   if ( !VAR_8[0] ) {
    FUNC_2( "Unexpected end of info file\n" );
    break;
   }
   if ( !FUNC_6( VAR_8, "}" ) ) {
    break;
   }
   FUNC_4( VAR_10, VAR_8, sizeof( VAR_10 ) );

   VAR_8 = FUNC_1( &VAR_5, VAR_3 );
   if ( !VAR_8[0] ) {
    FUNC_7( VAR_8, "<NULL>" );
   }
   FUNC_3( VAR_11, VAR_10, VAR_8 );
  }

  VAR_7[VAR_9] = FUNC_5(FUNC_8(VAR_11) + FUNC_8("\\num\\") + FUNC_8(FUNC_9("%d", VAR_0)) + 1);
  if (VAR_7[VAR_9]) {
   FUNC_7(VAR_7[VAR_9], VAR_11);
   VAR_9++;
  }
 }
 return VAR_9;
}
