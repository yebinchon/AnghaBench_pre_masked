
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int shader3 ;
typedef int shader2 ;
typedef int shader1 ;
struct TYPE_8__ {int levelShot; } ;
struct TYPE_7__ {scalar_t__ integer; } ;
struct TYPE_5__ {int talkSound; int votePassed; int voteFailed; } ;
struct TYPE_6__ {scalar_t__ gametype; TYPE_1__ media; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 char const* FUNC_1 (int) ;
 int FUNC_2 (char const*,double,int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 (char*,char const*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_11 (char const*,char*) ;
 int FUNC_12 (char const*,char*,int) ;
 int FUNC_13 (char*,char const*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 double VAR_9 ;
 TYPE_4__ VAR_10 ;
 TYPE_3__ VAR_11 ;
 TYPE_2__ VAR_12 ;
 int VAR_13 ;
 int FUNC_14 (char const*,char*) ;
 int FUNC_15 () ;
 int FUNC_16 (char*,char*,char*) ;
 int FUNC_17 (int ,int ) ;

__attribute__((used)) static void FUNC_18( void ) {
 const char *VAR_14;
 char VAR_15[VAR_5];

 VAR_14 = FUNC_1(0);

 if ( !VAR_14[0] ) {

  return;
 }

 if ( !FUNC_14( VAR_14, "cp" ) ) {
  FUNC_2( FUNC_1(1), VAR_9 * 0.30, VAR_0 );
  return;
 }

 if ( !FUNC_14( VAR_14, "cs" ) ) {
  FUNC_3();
  return;
 }

 if ( !FUNC_14( VAR_14, "print" ) ) {
  FUNC_8( "%s", FUNC_1(1) );
  return;
 }

 if ( !FUNC_14( VAR_14, "chat" ) ) {
  if ( VAR_12.gametype >= VAR_3 && VAR_11.integer ) {
   return;
  }

  FUNC_17( VAR_12.media.talkSound, VAR_2 );
  FUNC_13( VAR_15, FUNC_1(1), VAR_5 );
  FUNC_9( VAR_15 );
  FUNC_8( "%s\n", VAR_15 );
  return;
 }

 if ( !FUNC_14( VAR_14, "tchat" ) ) {
  FUNC_17( VAR_12.media.talkSound, VAR_2 );
  FUNC_13( VAR_15, FUNC_1(1), VAR_5 );
  FUNC_9( VAR_15 );
  FUNC_0( VAR_15 );
  FUNC_8( "%s\n", VAR_15 );
  return;
 }
 if ( !FUNC_14( VAR_14, "scores" ) ) {
  FUNC_6();
  return;
 }

 if ( !FUNC_14( VAR_14, "tinfo" ) ) {
  FUNC_7();
  return;
 }

 if ( !FUNC_14( VAR_14, "map_restart" ) ) {
  FUNC_5();
  return;
 }

 if ( FUNC_11 (VAR_14, "remapShader") == 0 )
 {
  if (FUNC_15() == 4)
  {
   char VAR_16[VAR_4];
   char VAR_17[VAR_4];
   char VAR_18[VAR_4];

   FUNC_13(VAR_16, FUNC_1(1), sizeof(VAR_16));
   FUNC_13(VAR_17, FUNC_1(2), sizeof(VAR_17));
   FUNC_13(VAR_18, FUNC_1(3), sizeof(VAR_18));

   FUNC_16(VAR_16, VAR_17, VAR_18);
  }

  return;
 }


 if ( !FUNC_14( VAR_14, "loaddefered" ) ) {
  FUNC_4();
  return;
 }



 if ( !FUNC_14( VAR_14, "clientLevelShot" ) ) {
  VAR_10.levelShot = VAR_13;
  return;
 }

 FUNC_8( "Unknown client game command: %s\n", VAR_14 );
}
