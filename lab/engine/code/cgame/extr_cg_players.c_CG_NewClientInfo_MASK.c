
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int qboolean ;
typedef int newInfo ;
typedef int modelStr ;
struct TYPE_11__ {char const* name; int* color1; int* c1RGBA; int* color2; int* c2RGBA; char const* redTeam; char const* blueTeam; char const* modelName; char const* skinName; char const* headModelName; char const* headSkinName; int infoValid; int deferred; void* teamLeader; void* teamTask; void* team; void* losses; void* wins; void* handicap; void* botSkill; } ;
typedef TYPE_1__ clientInfo_t ;
struct TYPE_16__ {int loading; } ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {scalar_t__ integer; } ;
struct TYPE_13__ {scalar_t__ integer; } ;
struct TYPE_12__ {scalar_t__ gametype; TYPE_1__* clientinfo; } ;


 int FUNC_0 (char const*,int*) ;
 char* FUNC_1 (scalar_t__) ;
 int FUNC_2 (int,TYPE_1__*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int,TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 char* VAR_1 ;
 char* VAR_2 ;
 scalar_t__ VAR_3 ;
 char* FUNC_6 (char const*,char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (char const*,char const*,int) ;
 void* FUNC_8 (char const*) ;
 TYPE_7__ VAR_6 ;
 TYPE_6__ VAR_7 ;
 TYPE_5__ VAR_8 ;
 TYPE_4__ VAR_9 ;
 TYPE_3__ VAR_10 ;
 int FUNC_9 (int,char const*,char const*) ;
 int FUNC_10 (TYPE_1__*,int ,int) ;
 int VAR_11 ;
 int VAR_12 ;
 char* FUNC_11 (char const*,char) ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 () ;

void FUNC_14( int VAR_13 ) {
 clientInfo_t *VAR_14;
 clientInfo_t VAR_15;
 const char *VAR_16;
 const char *VAR_17;
 char *VAR_18;

 VAR_14 = &VAR_10.clientinfo[VAR_13];

 VAR_16 = FUNC_1( VAR_13 + VAR_0 );
 if ( !VAR_16[0] ) {
  FUNC_10( VAR_14, 0, sizeof( *VAR_14 ) );
  return;
 }



 FUNC_10( &VAR_15, 0, sizeof( VAR_15 ) );


 VAR_17 = FUNC_6(VAR_16, "n");
 FUNC_7( VAR_15.name, VAR_17, sizeof( VAR_15.name ) );


 VAR_17 = FUNC_6( VAR_16, "c1" );
 FUNC_0( VAR_17, VAR_15.color1 );

 VAR_15.c1RGBA[0] = 255 * VAR_15.color1[0];
 VAR_15.c1RGBA[1] = 255 * VAR_15.color1[1];
 VAR_15.c1RGBA[2] = 255 * VAR_15.color1[2];
 VAR_15.c1RGBA[3] = 255;

 VAR_17 = FUNC_6( VAR_16, "c2" );
 FUNC_0( VAR_17, VAR_15.color2 );

 VAR_15.c2RGBA[0] = 255 * VAR_15.color2[0];
 VAR_15.c2RGBA[1] = 255 * VAR_15.color2[1];
 VAR_15.c2RGBA[2] = 255 * VAR_15.color2[2];
 VAR_15.c2RGBA[3] = 255;


 VAR_17 = FUNC_6( VAR_16, "skill" );
 VAR_15.botSkill = FUNC_8( VAR_17 );


 VAR_17 = FUNC_6( VAR_16, "hc" );
 VAR_15.handicap = FUNC_8( VAR_17 );


 VAR_17 = FUNC_6( VAR_16, "w" );
 VAR_15.wins = FUNC_8( VAR_17 );


 VAR_17 = FUNC_6( VAR_16, "l" );
 VAR_15.losses = FUNC_8( VAR_17 );


 VAR_17 = FUNC_6( VAR_16, "t" );
 VAR_15.team = FUNC_8( VAR_17 );


 VAR_17 = FUNC_6( VAR_16, "tt" );
 VAR_15.teamTask = FUNC_8(VAR_17);


 VAR_17 = FUNC_6( VAR_16, "tl" );
 VAR_15.teamLeader = FUNC_8(VAR_17);

 VAR_17 = FUNC_6( VAR_16, "g_redteam" );
 FUNC_7(VAR_15.redTeam, VAR_17, VAR_5);

 VAR_17 = FUNC_6( VAR_16, "g_blueteam" );
 FUNC_7(VAR_15.blueTeam, VAR_17, VAR_5);


 VAR_17 = FUNC_6( VAR_16, "model" );
 FUNC_9(VAR_13, VAR_15.name, VAR_17);
 if ( VAR_9.integer ) {


  char VAR_19[VAR_4];
  char *VAR_20;

  if( VAR_10.gametype >= VAR_3 ) {
   FUNC_7( VAR_15.modelName, VAR_2, sizeof( VAR_15.modelName ) );
   FUNC_7( VAR_15.skinName, "default", sizeof( VAR_15.skinName ) );
  } else {
   FUNC_12( "model", VAR_19, sizeof( VAR_19 ) );
   if ( ( VAR_20 = FUNC_11( VAR_19, '/' ) ) == ((void*)0)) {
    VAR_20 = "default";
   } else {
    *VAR_20++ = 0;
   }

   FUNC_7( VAR_15.skinName, VAR_20, sizeof( VAR_15.skinName ) );
   FUNC_7( VAR_15.modelName, VAR_19, sizeof( VAR_15.modelName ) );
  }

  if ( VAR_10.gametype >= VAR_3 ) {

   VAR_18 = FUNC_11( VAR_17, '/' );
   if ( VAR_18 ) {
    FUNC_7( VAR_15.skinName, VAR_18 + 1, sizeof( VAR_15.skinName ) );
   }
  }
 } else {
  FUNC_7( VAR_15.modelName, VAR_17, sizeof( VAR_15.modelName ) );

  VAR_18 = FUNC_11( VAR_15.modelName, '/' );
  if ( !VAR_18 ) {

   FUNC_7( VAR_15.skinName, "default", sizeof( VAR_15.skinName ) );
  } else {
   FUNC_7( VAR_15.skinName, VAR_18 + 1, sizeof( VAR_15.skinName ) );

   *VAR_18 = 0;
  }
 }


 VAR_17 = FUNC_6( VAR_16, "hmodel" );
 if ( VAR_9.integer ) {


  char VAR_21[VAR_4];
  char *VAR_22;

  if( VAR_10.gametype >= VAR_3 ) {
   FUNC_7( VAR_15.headModelName, VAR_1, sizeof( VAR_15.headModelName ) );
   FUNC_7( VAR_15.headSkinName, "default", sizeof( VAR_15.headSkinName ) );
  } else {
   FUNC_12( "headmodel", VAR_21, sizeof( VAR_21 ) );
   if ( ( VAR_22 = FUNC_11( VAR_21, '/' ) ) == ((void*)0)) {
    VAR_22 = "default";
   } else {
    *VAR_22++ = 0;
   }

   FUNC_7( VAR_15.headSkinName, VAR_22, sizeof( VAR_15.headSkinName ) );
   FUNC_7( VAR_15.headModelName, VAR_21, sizeof( VAR_15.headModelName ) );
  }

  if ( VAR_10.gametype >= VAR_3 ) {

   VAR_18 = FUNC_11( VAR_17, '/' );
   if ( VAR_18 ) {
    FUNC_7( VAR_15.headSkinName, VAR_18 + 1, sizeof( VAR_15.headSkinName ) );
   }
  }
 } else {
  FUNC_7( VAR_15.headModelName, VAR_17, sizeof( VAR_15.headModelName ) );

  VAR_18 = FUNC_11( VAR_15.headModelName, '/' );
  if ( !VAR_18 ) {

   FUNC_7( VAR_15.headSkinName, "default", sizeof( VAR_15.headSkinName ) );
  } else {
   FUNC_7( VAR_15.headSkinName, VAR_18 + 1, sizeof( VAR_15.headSkinName ) );

   *VAR_18 = 0;
  }
 }



 if ( !FUNC_4( &VAR_15 ) ) {
  qboolean VAR_23;

  VAR_23 = FUNC_13() < 4000000;


  if ( VAR_23 || (VAR_8.integer && !VAR_7.integer && !VAR_6.loading ) ) {

   FUNC_5( VAR_13, &VAR_15 );

   if ( VAR_23 ) {
    FUNC_3( "Memory is low. Using deferred model.\n" );
    VAR_15.deferred = VAR_11;
   }
  } else {
   FUNC_2( VAR_13, &VAR_15 );
  }
 }


 VAR_15.infoValid = VAR_12;
 *VAR_14 = VAR_15;
}
