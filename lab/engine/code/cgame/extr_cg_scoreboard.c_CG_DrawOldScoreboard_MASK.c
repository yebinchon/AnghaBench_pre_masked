
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_18__ {scalar_t__ client; } ;
struct TYPE_10__ {scalar_t__ pm_type; } ;
struct TYPE_17__ {int deferredPlayerLoading; scalar_t__* teamScores; int numScores; TYPE_9__* scores; TYPE_3__* snap; scalar_t__* killerName; int scoreFadeTime; TYPE_1__ predictedPlayerState; scalar_t__ showScores; scalar_t__ warmup; } ;
struct TYPE_16__ {scalar_t__ integer; } ;
struct TYPE_15__ {scalar_t__ integer; } ;
struct TYPE_13__ {int scoreboardName; int scoreboardTime; int scoreboardPing; int scoreboardScore; } ;
struct TYPE_14__ {scalar_t__ gametype; TYPE_4__ media; } ;
struct TYPE_11__ {scalar_t__* persistant; scalar_t__ clientNum; } ;
struct TYPE_12__ {TYPE_2__ ps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int,char*,float) ;
 int FUNC_1 (int,TYPE_9__*,float*,float,int) ;
 int FUNC_2 (scalar_t__,int,int,int,int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int,int,int,float,scalar_t__) ;
 float* FUNC_5 (int ,int ) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int,scalar_t__,float,int,int) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 scalar_t__ VAR_25 ;
 TYPE_8__ VAR_26 ;
 TYPE_7__ VAR_27 ;
 TYPE_6__ VAR_28 ;
 TYPE_5__ VAR_29 ;
 float* VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 char* FUNC_9 (char*,scalar_t__,...) ;

qboolean FUNC_10( void ) {
 int VAR_34, VAR_35, VAR_36, VAR_37, VAR_38, VAR_39;
 float VAR_40;
 float *VAR_41;
 char *VAR_42;
 int VAR_43;
 int VAR_44;
 int VAR_45, VAR_46;


 if ( VAR_27.integer ) {
  VAR_26.deferredPlayerLoading = 0;
  return VAR_32;
 }

 if ( VAR_28.integer == 0 ) {
  return VAR_32;
 }

 if ( VAR_29.gametype == VAR_3 && VAR_26.predictedPlayerState.pm_type == VAR_9 ) {
  VAR_26.deferredPlayerLoading = 0;
  return VAR_32;
 }


 if ( VAR_26.warmup && !VAR_26.showScores ) {
  return VAR_32;
 }

 if ( VAR_26.showScores || VAR_26.predictedPlayerState.pm_type == VAR_8 ||
   VAR_26.predictedPlayerState.pm_type == VAR_9 ) {
  VAR_40 = 1.0;
  VAR_41 = VAR_30;
 } else {
  VAR_41 = FUNC_5( VAR_26.scoreFadeTime, VAR_2 );

  if ( !VAR_41 ) {

   VAR_26.deferredPlayerLoading = 0;
   VAR_26.killerName[0] = 0;
   return VAR_32;
  }
  VAR_40 = *VAR_41;
 }



 if ( VAR_26.killerName[0] ) {
  VAR_42 = FUNC_9("Tagged by %s", *VAR_26.killerName );
  VAR_36 = FUNC_3( VAR_42 ) * VAR_1;
  VAR_34 = ( VAR_21 - VAR_36 ) / 2;
  VAR_35 = 40;
  FUNC_0( VAR_34, VAR_35, VAR_42, VAR_40 );
 }


 if ( VAR_29.gametype < VAR_4) {
  if (VAR_26.snap->ps.persistant[VAR_7] != VAR_25 ) {
   VAR_42 = FUNC_9("%s place with %i",
    FUNC_7( VAR_26.snap->ps.persistant[VAR_5] + 1 ),
    VAR_26.snap->ps.persistant[VAR_6] );
   VAR_36 = FUNC_3( VAR_42 ) * VAR_1;
   VAR_34 = ( VAR_21 - VAR_36 ) / 2;
   VAR_35 = 60;
   FUNC_0( VAR_34, VAR_35, VAR_42, VAR_40 );
  }
 } else {
  if ( VAR_26.teamScores[0] == VAR_26.teamScores[1] ) {
   VAR_42 = FUNC_9("Teams are tied at %i", VAR_26.teamScores[0] );
  } else if ( VAR_26.teamScores[0] >= VAR_26.teamScores[1] ) {
   VAR_42 = FUNC_9("Red leads %i to %i",VAR_26.teamScores[0], VAR_26.teamScores[1] );
  } else {
   VAR_42 = FUNC_9("Blue leads %i to %i",VAR_26.teamScores[1], VAR_26.teamScores[0] );
  }

  VAR_36 = FUNC_3( VAR_42 ) * VAR_1;
  VAR_34 = ( VAR_21 - VAR_36 ) / 2;
  VAR_35 = 60;
  FUNC_0( VAR_34, VAR_35, VAR_42, VAR_40 );
 }


 VAR_35 = VAR_10;

 FUNC_2( VAR_18 + (VAR_17 / 2), VAR_35, 64, 32, VAR_29.media.scoreboardScore );
 FUNC_2( VAR_16 - (VAR_17 / 2), VAR_35, 64, 32, VAR_29.media.scoreboardPing );
 FUNC_2( VAR_19 - (VAR_17 / 2), VAR_35, 64, 32, VAR_29.media.scoreboardTime );
 FUNC_2( VAR_14 - (VAR_17 / 2), VAR_35, 64, 32, VAR_29.media.scoreboardName );

 VAR_35 = VAR_20;


 if ( VAR_26.numScores > VAR_13 ) {
  VAR_43 = VAR_12;
  VAR_44 = VAR_11;
  VAR_45 = 8;
  VAR_46 = 16;
 } else {
  VAR_43 = VAR_13;
  VAR_44 = VAR_15;
  VAR_45 = 16;
  VAR_46 = 16;
 }

 VAR_31 = VAR_32;

 if ( VAR_29.gametype >= VAR_4 ) {



  VAR_35 += VAR_44/2;

  if ( VAR_26.teamScores[0] >= VAR_26.teamScores[1] ) {
   VAR_38 = FUNC_8( VAR_35, VAR_24, VAR_40, VAR_43, VAR_44 );
   FUNC_4( 0, VAR_35 - VAR_45, 640, VAR_38 * VAR_44 + VAR_46, 0.33f, VAR_24 );
   VAR_35 += (VAR_38 * VAR_44) + VAR_0;
   VAR_43 -= VAR_38;
   VAR_39 = FUNC_8( VAR_35, VAR_22, VAR_40, VAR_43, VAR_44 );
   FUNC_4( 0, VAR_35 - VAR_45, 640, VAR_39 * VAR_44 + VAR_46, 0.33f, VAR_22 );
   VAR_35 += (VAR_39 * VAR_44) + VAR_0;
   VAR_43 -= VAR_39;
  } else {
   VAR_38 = FUNC_8( VAR_35, VAR_22, VAR_40, VAR_43, VAR_44 );
   FUNC_4( 0, VAR_35 - VAR_45, 640, VAR_38 * VAR_44 + VAR_46, 0.33f, VAR_22 );
   VAR_35 += (VAR_38 * VAR_44) + VAR_0;
   VAR_43 -= VAR_38;
   VAR_39 = FUNC_8( VAR_35, VAR_24, VAR_40, VAR_43, VAR_44 );
   FUNC_4( 0, VAR_35 - VAR_45, 640, VAR_39 * VAR_44 + VAR_46, 0.33f, VAR_24 );
   VAR_35 += (VAR_39 * VAR_44) + VAR_0;
   VAR_43 -= VAR_39;
  }
  VAR_38 = FUNC_8( VAR_35, VAR_25, VAR_40, VAR_43, VAR_44 );
  VAR_35 += (VAR_38 * VAR_44) + VAR_0;

 } else {



  VAR_38 = FUNC_8( VAR_35, VAR_23, VAR_40, VAR_43, VAR_44 );
  VAR_35 += (VAR_38 * VAR_44) + VAR_0;
  VAR_39 = FUNC_8( VAR_35, VAR_25, VAR_40, VAR_43 - VAR_38, VAR_44 );
  VAR_35 += (VAR_39 * VAR_44) + VAR_0;
 }

 if (!VAR_31) {

  for ( VAR_37 = 0 ; VAR_37 < VAR_26.numScores ; VAR_37++ ) {
   if ( VAR_26.scores[VAR_37].client == VAR_26.snap->ps.clientNum ) {
    FUNC_1( VAR_35, &VAR_26.scores[VAR_37], VAR_41, VAR_40, VAR_44 == VAR_15 );
    break;
   }
  }
 }


 if ( ++VAR_26.deferredPlayerLoading > 10 ) {
  FUNC_6();
 }

 return VAR_33;
}
