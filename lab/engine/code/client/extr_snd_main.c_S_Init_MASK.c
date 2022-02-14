
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ qboolean ;
struct TYPE_2__ {scalar_t__ integer; } ;
typedef TYPE_1__ cvar_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int (*) ()) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*) ;
 void* FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;
 int VAR_3 ;
 scalar_t__ FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 (int *) ;
 scalar_t__ VAR_4 ;
 void* VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 void* VAR_9 ;
 void* VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;

void FUNC_15( void )
{
 cvar_t *VAR_13;
 qboolean VAR_14 = VAR_4;

 FUNC_2( "------ Initializing Sound ------\n" );

 VAR_11 = FUNC_3( "s_volume", "0.8", VAR_0 );
 VAR_7 = FUNC_3( "s_musicvolume", "0.25", VAR_0 );
 VAR_10 = FUNC_3("s_muted", "0", VAR_2);
 VAR_6 = FUNC_3( "s_doppler", "1", VAR_0 );
 VAR_5 = FUNC_3( "s_backend", "", VAR_2 );
 VAR_8 = FUNC_3( "s_muteWhenMinimized", "0", VAR_0 );
 VAR_9 = FUNC_3( "s_muteWhenUnfocused", "0", VAR_0 );

 VAR_13 = FUNC_3( "s_initsound", "1", 0 );
 if( !VAR_13->integer ) {
  FUNC_2( "Sound disabled.\n" );
 } else {

  FUNC_7( );

  FUNC_0( "play", FUNC_9 );
  FUNC_0( "music", FUNC_8 );
  FUNC_0( "stopmusic", FUNC_13 );
  FUNC_0( "s_list", FUNC_11 );
  FUNC_0( "s_stop", FUNC_12 );
  FUNC_0( "s_info", FUNC_10 );

  VAR_13 = FUNC_3( "s_useOpenAL", "1", VAR_0 | VAR_1 );
  if( VAR_13->integer ) {

   VAR_14 = FUNC_5( &VAR_12 );
   FUNC_4( "s_backend", "OpenAL" );
  }

  if( !VAR_14 ) {
   VAR_14 = FUNC_6( &VAR_12 );
   FUNC_4( "s_backend", "base" );
  }

  if( VAR_14 ) {
   if( !FUNC_14( &VAR_12 ) ) {
    FUNC_1( VAR_3, "Sound interface invalid" );
   }

   FUNC_10( );
   FUNC_2( "Sound initialization successful.\n" );
  } else {
   FUNC_2( "Sound initialization failed.\n" );
  }
 }

 FUNC_2( "--------------------------------\n");
}
