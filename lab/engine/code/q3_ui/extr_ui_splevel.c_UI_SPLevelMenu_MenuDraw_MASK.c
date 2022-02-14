
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef double* vec4_t ;
typedef int string ;
typedef int buf ;
struct TYPE_7__ {int x; int y; } ;
struct TYPE_10__ {TYPE_2__ generic; } ;
struct TYPE_6__ {scalar_t__ shader; } ;
struct TYPE_9__ {char* playerModel; int* awardLevels; int numMaps; char** levelNames; int* levelScores; int* levelScoresSkill; int numBots; char** botNames; scalar_t__* botPics; int selectedArenaInfo; scalar_t__ levelFocusPic; TYPE_5__* item_maps; int menu; scalar_t__ levelSelectedPic; scalar_t__* levelCompletePic; TYPE_1__ item_player; int playerPicName; scalar_t__ reinit; } ;
struct TYPE_8__ {int realtime; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,...) ;
 char* FUNC_1 (int ,char*) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 TYPE_5__* FUNC_3 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char*,int) ;
 int FUNC_8 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_9 (int,int,int,int,scalar_t__) ;
 int FUNC_10 (int,int,char*,int,int ) ;
 int FUNC_11 (int,int,char*,int,int ) ;
 int FUNC_12 (int,int,int,int,int ) ;
 int VAR_6 ;
 int FUNC_13 () ;
 int VAR_7 ;
 int FUNC_14 () ;
 int FUNC_15 (int ,double*) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_4__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 double FUNC_16 (int) ;
 int FUNC_17 (char*,char*,int) ;
 int FUNC_18 (double*) ;
 TYPE_3__ VAR_17 ;
 char* FUNC_19 (char*,scalar_t__) ;

__attribute__((used)) static void FUNC_20( void ) {
 int VAR_18, VAR_19;
 int VAR_20, VAR_21;
 vec4_t VAR_22;
 int VAR_23;

 int VAR_24;
 char VAR_25[VAR_1];
 char VAR_26[64];

 if( VAR_14.reinit ) {
  FUNC_13();
  FUNC_14();
  return;
 }


 FUNC_17( "name", VAR_26, 32 );
 FUNC_5( VAR_26 );
 FUNC_10( 320, VAR_2, VAR_26, VAR_5|VAR_7, VAR_9 );


 FUNC_17( "model", VAR_25, sizeof(VAR_25) );
 if( FUNC_6( VAR_25, VAR_14.playerModel ) != 0 ) {
  FUNC_7( VAR_14.playerModel, VAR_25, sizeof(VAR_14.playerModel) );
  FUNC_4( VAR_14.playerModel, VAR_14.playerPicName, sizeof(VAR_14.playerPicName) );
  VAR_14.item_player.shader = 0;
 }


 FUNC_2( &VAR_14.menu );


 VAR_21 = VAR_0;
 VAR_19 = 0;
 for( VAR_18 = 0; VAR_18 < 6; VAR_18++ ) {
  VAR_23 = VAR_14.awardLevels[VAR_18];
  if( VAR_23 > 0 ) {
   if( VAR_19 & 1 ) {
    VAR_20 = 224 - (VAR_19 - 1 ) / 2 * (48 + 16);
   }
   else {
    VAR_20 = 368 + VAR_19 / 2 * (48 + 16);
   }
   VAR_19++;

   if( VAR_23 == 1 ) {
    continue;
   }

   if( VAR_23 >= 1000000 ) {
    FUNC_0( VAR_26, sizeof(VAR_26), "%im", VAR_23 / 1000000 );
   }
   else if( VAR_23 >= 1000 ) {
    FUNC_0( VAR_26, sizeof(VAR_26), "%ik", VAR_23 / 1000 );
   }
   else {
    FUNC_0( VAR_26, sizeof(VAR_26), "%i", VAR_23 );
   }

   FUNC_11( VAR_20 + 24, VAR_21 + 48, VAR_26, VAR_5, VAR_12 );
  }
 }

 FUNC_10( 18, 38, FUNC_19( "Tier %i", VAR_16 + 1 ), VAR_6|VAR_7, VAR_9 );

 for ( VAR_18 = 0; VAR_18 < VAR_14.numMaps; VAR_18++ ) {
  VAR_20 = VAR_14.item_maps[VAR_18].generic.x;
  VAR_21 = VAR_14.item_maps[VAR_18].generic.y;
  FUNC_12( VAR_20, VAR_21 + 96, 128, 18, VAR_8 );
 }

 if ( VAR_16 > VAR_13 ) {
  FUNC_10( 320, 216, "ACCESS DENIED", VAR_5|VAR_4, VAR_10 );
  return;
 }


 FUNC_15( VAR_11, VAR_22 );
 VAR_22[3] = 0.5+0.5*FUNC_16(VAR_17.realtime/VAR_3);
 for ( VAR_18 = 0; VAR_18 < VAR_14.numMaps; VAR_18++ ) {
  VAR_20 = VAR_14.item_maps[VAR_18].generic.x;
  VAR_21 = VAR_14.item_maps[VAR_18].generic.y;

  FUNC_11( VAR_20 + 64, VAR_21 + 96, VAR_14.levelNames[VAR_18], VAR_5|VAR_7, VAR_9 );

  if( VAR_14.levelScores[VAR_18] == 1 ) {
   FUNC_9( VAR_20, VAR_21, 128, 96, VAR_14.levelCompletePic[VAR_14.levelScoresSkill[VAR_18] - 1] );
  }

  if ( VAR_18 == VAR_15 ) {
   if( FUNC_3( &VAR_14.menu ) == &VAR_14.item_maps[VAR_18] ) {
    FUNC_18( VAR_22 );
   }
   FUNC_9( VAR_20-1, VAR_21-1, 130, 130 - 14, VAR_14.levelSelectedPic );
   FUNC_18( ((void*)0) );
  }
  else if( FUNC_3( &VAR_14.menu ) == &VAR_14.item_maps[VAR_18] ) {
   FUNC_18( VAR_22 );
   FUNC_9( VAR_20-31, VAR_21-30, 256, 256-27, VAR_14.levelFocusPic);
   FUNC_18( ((void*)0) );
  }
 }


 VAR_21 = 192;
 FUNC_7( VAR_25, FUNC_1( VAR_14.selectedArenaInfo, "map" ), 20 );
 FUNC_8( VAR_25 );
 FUNC_0( VAR_26, sizeof(VAR_26), "%s: %s", VAR_25, FUNC_1( VAR_14.selectedArenaInfo, "longname" ) );
 FUNC_10( 320, VAR_21, VAR_26, VAR_5|VAR_7, VAR_9 );





 VAR_21 += 24;
 VAR_24 = (7 - VAR_14.numBots) * (64 + 26) / 2;
 for( VAR_18 = 0; VAR_18 < VAR_14.numBots; VAR_18++ ) {
  VAR_20 = 18 + VAR_24 + (64 + 26) * VAR_18;
  if( VAR_14.botPics[VAR_18] ) {
   FUNC_9( VAR_20, VAR_21, 64, 64, VAR_14.botPics[VAR_18]);
  }
  else {
   FUNC_12( VAR_20, VAR_21, 64, 64, VAR_8 );
   FUNC_10( VAR_20+22, VAR_21+18, "?", VAR_4, VAR_9 );
  }
  FUNC_11( VAR_20, VAR_21 + 64, VAR_14.botNames[VAR_18], VAR_7|VAR_6, VAR_9 );
 }
}
