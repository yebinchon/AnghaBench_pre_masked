
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int sfxHandle_t ;
struct TYPE_8__ {int* persistant; int* stats; scalar_t__* powerups; } ;
typedef TYPE_2__ playerState_t ;
struct TYPE_10__ {int time; int timelimitWarnings; int fraglimitWarnings; int warmup; scalar_t__ intermissionStarted; int predictedPlayerEntity; } ;
struct TYPE_7__ {int threeFragSound; int twoFragSound; int oneFragSound; int fiveMinuteSound; int oneMinuteSound; int suddenDeathSound; int lostLeadSound; int tiedLeadSound; int takenLeadSound; int youHaveFlagSound; int holyShitSound; int humiliationSound; int deniedSound; int medalAssist; int assistSound; int medalDefend; int defendSound; int medalGauntlet; int firstHumiliationSound; int medalExcellent; int excellentSound; int firstExcellentSound; int medalImpressive; int impressiveSound; int firstImpressiveSound; int medalCapture; int captureAwardSound; int hitTeamSound; int hitSound; int hitSoundLowArmor; int hitSoundHighArmor; } ;
struct TYPE_9__ {scalar_t__ gametype; int timelimit; int levelStartTime; int fraglimit; int scores1; int scores2; TYPE_1__ media; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *,scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 int VAR_21 ;
 size_t VAR_22 ;
 TYPE_4__ VAR_23 ;
 TYPE_3__ VAR_24 ;
 int FUNC_2 (int ,int ,int) ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_3 (int ,int ) ;

void FUNC_4( playerState_t *VAR_27, playerState_t *VAR_28 ) {
 int VAR_29, VAR_30;



 sfxHandle_t VAR_31;


 if ( VAR_27->persistant[VAR_14] != VAR_28->persistant[VAR_14] ) {
  return;
 }


 if ( VAR_27->persistant[VAR_10] > VAR_28->persistant[VAR_10] ) {
  FUNC_3( VAR_24.media.hitSound, VAR_1 );

 } else if ( VAR_27->persistant[VAR_10] < VAR_28->persistant[VAR_10] ) {
  FUNC_3( VAR_24.media.hitTeamSound, VAR_1 );
 }


 if ( VAR_27->stats[VAR_22] < VAR_28->stats[VAR_22] - 1 ) {
  if ( VAR_27->stats[VAR_22] > 0 ) {
   FUNC_1( &VAR_23.predictedPlayerEntity, VAR_27->stats[VAR_22] );
  }
 }



 if ( VAR_23.intermissionStarted ) {
  return;
 }


 VAR_30 = VAR_25;
 if (VAR_27->persistant[VAR_6] != VAR_28->persistant[VAR_6]) {
  FUNC_2(VAR_24.media.captureAwardSound, VAR_24.media.medalCapture, VAR_27->persistant[VAR_6]);
  VAR_30 = VAR_26;

 }
 if (VAR_27->persistant[VAR_11] != VAR_28->persistant[VAR_11]) {







  VAR_31 = VAR_24.media.impressiveSound;

  FUNC_2(VAR_31, VAR_24.media.medalImpressive, VAR_27->persistant[VAR_11]);
  VAR_30 = VAR_26;

 }
 if (VAR_27->persistant[VAR_8] != VAR_28->persistant[VAR_8]) {







  VAR_31 = VAR_24.media.excellentSound;

  FUNC_2(VAR_31, VAR_24.media.medalExcellent, VAR_27->persistant[VAR_8]);
  VAR_30 = VAR_26;

 }
 if (VAR_27->persistant[VAR_9] != VAR_28->persistant[VAR_9]) {







  VAR_31 = VAR_24.media.humiliationSound;

  FUNC_2(VAR_31, VAR_24.media.medalGauntlet, VAR_27->persistant[VAR_9]);
  VAR_30 = VAR_26;

 }
 if (VAR_27->persistant[VAR_7] != VAR_28->persistant[VAR_7]) {
  FUNC_2(VAR_24.media.defendSound, VAR_24.media.medalDefend, VAR_27->persistant[VAR_7]);
  VAR_30 = VAR_26;

 }
 if (VAR_27->persistant[VAR_4] != VAR_28->persistant[VAR_4]) {
  FUNC_2(VAR_24.media.assistSound, VAR_24.media.medalAssist, VAR_27->persistant[VAR_4]);
  VAR_30 = VAR_26;

 }

 if (VAR_27->persistant[VAR_12] != VAR_28->persistant[VAR_12]) {
  if ((VAR_27->persistant[VAR_12] & VAR_15) !=
    (VAR_28->persistant[VAR_12] & VAR_15)) {
   FUNC_3( VAR_24.media.deniedSound, VAR_0 );
  }
  else if ((VAR_27->persistant[VAR_12] & VAR_16) !=
    (VAR_28->persistant[VAR_12] & VAR_16)) {
   FUNC_3( VAR_24.media.humiliationSound, VAR_0 );
  }
  else if ((VAR_27->persistant[VAR_12] & VAR_17) !=
    (VAR_28->persistant[VAR_12] & VAR_17)) {
   FUNC_3( VAR_24.media.holyShitSound, VAR_0 );
  }
  VAR_30 = VAR_26;
 }


 if ( VAR_24.gametype > VAR_3 ) {
  if ((VAR_27->powerups[VAR_20] != VAR_28->powerups[VAR_20] && VAR_27->powerups[VAR_20]) ||
   (VAR_27->powerups[VAR_18] != VAR_28->powerups[VAR_18] && VAR_27->powerups[VAR_18]) ||
   (VAR_27->powerups[VAR_19] != VAR_28->powerups[VAR_19] && VAR_27->powerups[VAR_19]) )
  {
   FUNC_3( VAR_24.media.youHaveFlagSound, VAR_0 );
  }
 }


 if (!VAR_30) {

  if ( !VAR_23.warmup ) {

   if ( VAR_27->persistant[VAR_13] != VAR_28->persistant[VAR_13] ) {
    if ( VAR_24.gametype < VAR_3) {
     if ( VAR_27->persistant[VAR_13] == 0 ) {
      FUNC_0(VAR_24.media.takenLeadSound);
     } else if ( VAR_27->persistant[VAR_13] == VAR_21 ) {
      FUNC_0(VAR_24.media.tiedLeadSound);
     } else if ( ( VAR_28->persistant[VAR_13] & ~VAR_21 ) == 0 ) {
      FUNC_0(VAR_24.media.lostLeadSound);
     }
    }
   }
  }
 }


 if ( VAR_24.timelimit > 0 ) {
  int VAR_32;

  VAR_32 = VAR_23.time - VAR_24.levelStartTime;
  if ( !( VAR_23.timelimitWarnings & 4 ) && VAR_32 > ( VAR_24.timelimit * 60 + 2 ) * 1000 ) {
   VAR_23.timelimitWarnings |= 1 | 2 | 4;
   FUNC_3( VAR_24.media.suddenDeathSound, VAR_0 );
  }
  else if ( !( VAR_23.timelimitWarnings & 2 ) && VAR_32 > (VAR_24.timelimit - 1) * 60 * 1000 ) {
   VAR_23.timelimitWarnings |= 1 | 2;
   FUNC_3( VAR_24.media.oneMinuteSound, VAR_0 );
  }
  else if ( VAR_24.timelimit > 5 && !( VAR_23.timelimitWarnings & 1 ) && VAR_32 > (VAR_24.timelimit - 5) * 60 * 1000 ) {
   VAR_23.timelimitWarnings |= 1;
   FUNC_3( VAR_24.media.fiveMinuteSound, VAR_0 );
  }
 }


 if ( VAR_24.fraglimit > 0 && VAR_24.gametype < VAR_2) {
  VAR_29 = VAR_24.scores1;

  if (VAR_24.gametype == VAR_3 && VAR_24.scores2 > VAR_29) {
   VAR_29 = VAR_24.scores2;
  }

  if ( !( VAR_23.fraglimitWarnings & 4 ) && VAR_29 == (VAR_24.fraglimit - 1) ) {
   VAR_23.fraglimitWarnings |= 1 | 2 | 4;
   FUNC_0(VAR_24.media.oneFragSound);
  }
  else if ( VAR_24.fraglimit > 2 && !( VAR_23.fraglimitWarnings & 2 ) && VAR_29 == (VAR_24.fraglimit - 2) ) {
   VAR_23.fraglimitWarnings |= 1 | 2;
   FUNC_0(VAR_24.media.twoFragSound);
  }
  else if ( VAR_24.fraglimit > 3 && !( VAR_23.fraglimitWarnings & 1 ) && VAR_29 == (VAR_24.fraglimit - 3) ) {
   VAR_23.fraglimitWarnings |= 1;
   FUNC_0(VAR_24.media.threeFragSound);
  }
 }
}
