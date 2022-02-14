
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int modName ;
typedef int message ;


 int FUNC_0 (char*,int,char*,char*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (char const*,char*,int) ;
 int VAR_2 ;
 int FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (int ,char*,char*) ;
 scalar_t__ FUNC_5 (char const*) ;

void FUNC_6( const char *VAR_3 ) {
 if( FUNC_5( VAR_3 ) ) {

  char VAR_4[1024];
  char VAR_5[VAR_2];

  FUNC_2( VAR_3, VAR_5, sizeof ( VAR_5 ) );
  FUNC_3( VAR_5 );

  FUNC_0( VAR_4, sizeof (VAR_4), "The last time %s ran, "
   "it didn't exit properly. This may be due to inappropriate video "
   "settings. Would you like to start with \"safe\" video settings?", VAR_5 );

  if( FUNC_4( VAR_1, VAR_4, "Abnormal Exit" ) == VAR_0 ) {
   FUNC_1( "com_abnormalExit", "1" );
  }

 }
}
