
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buffer ;


 unsigned int FUNC_0 (char*,int) ;
 int FUNC_1 (char*,char const*) ;
 char* FUNC_2 (char*) ;
 int VAR_0 ;
 char* FUNC_3 (char const*,char const*,char const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (char*,int,int) ;
 int FUNC_9 (char*,char const*,...) ;
 unsigned int FUNC_10 (int,char*,unsigned int) ;

void FUNC_11( const char *VAR_4 )
{
 char VAR_5[ 1024 ];
 unsigned int VAR_6;
 int VAR_7 = -1;
 const char *VAR_8 = FUNC_2( "fs_homepath" );
 const char *VAR_9 = FUNC_2( "fs_game" );
 const char *VAR_10 = "crashlog.txt";
 char *VAR_11 = FUNC_3( VAR_8, VAR_9, "");
 char *VAR_12 = FUNC_3( VAR_8, VAR_9, VAR_10 );

 FUNC_6( FUNC_9( "%s\n", VAR_4 ) );


 FUNC_4( VAR_0, FUNC_9( "%s. See \"%s\" for details.", VAR_4, VAR_12 ), "Error" );




 if(!FUNC_5(VAR_8))
 {
  FUNC_1("ERROR: couldn't create path '%s' for crash log.\n", VAR_8);
  return;
 }

 if(!FUNC_5(VAR_11))
 {
  FUNC_1("ERROR: couldn't create path '%s' for crash log.\n", VAR_11);
  return;
 }




 VAR_7 = FUNC_8( VAR_12, VAR_1 | VAR_2 | VAR_3, 0640 );
 if( VAR_7 == -1 )
 {
  FUNC_1( "ERROR: couldn't open %s\n", VAR_10 );
  return;
 }


 while( ( VAR_6 = FUNC_0( VAR_5, sizeof( VAR_5 ) ) ) > 0 ) {
  if( FUNC_10( VAR_7, VAR_5, VAR_6 ) != VAR_6 ) {
   FUNC_1( "ERROR: couldn't fully write to %s\n", VAR_10 );
   break;
  }
 }

 FUNC_7( VAR_7 );
}
