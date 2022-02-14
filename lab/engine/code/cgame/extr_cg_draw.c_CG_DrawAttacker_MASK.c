
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int* vec3_t ;
struct TYPE_7__ {scalar_t__* stats; int* persistant; } ;
struct TYPE_12__ {int attackerTime; int time; TYPE_3__* snap; TYPE_1__ predictedPlayerState; } ;
struct TYPE_11__ {TYPE_4__* clientinfo; } ;
struct TYPE_10__ {int infoValid; } ;
struct TYPE_8__ {int clientNum; } ;
struct TYPE_9__ {TYPE_2__ ps; } ;


 int VAR_0 ;
 float VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,float,char const*,double) ;
 int FUNC_2 (int,float,float,float,int,int*) ;
 scalar_t__ VAR_3 ;
 double VAR_4 ;
 char* FUNC_3 (char const*,char*) ;
 int VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 int FUNC_4 (char const*) ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 TYPE_6__ VAR_11 ;
 TYPE_5__ VAR_12 ;

__attribute__((used)) static float FUNC_5( float VAR_13 ) {
 int VAR_14;
 float VAR_15;
 vec3_t VAR_16;
 const char *VAR_17;
 const char *VAR_18;
 int VAR_19;

 if ( VAR_11.predictedPlayerState.stats[VAR_9] <= 0 ) {
  return VAR_13;
 }

 if ( !VAR_11.attackerTime ) {
  return VAR_13;
 }

 VAR_19 = VAR_11.predictedPlayerState.persistant[VAR_6];
 if ( VAR_19 < 0 || VAR_19 >= VAR_5 || VAR_19 == VAR_11.snap->ps.clientNum ) {
  return VAR_13;
 }

 if ( !VAR_12.clientinfo[VAR_19].infoValid ) {
  VAR_11.attackerTime = 0;
  return VAR_13;
 }

 VAR_14 = VAR_11.time - VAR_11.attackerTime;
 if ( VAR_14 > VAR_0 ) {
  VAR_11.attackerTime = 0;
  return VAR_13;
 }

 VAR_15 = VAR_4 * 1.25;

 VAR_16[VAR_7] = 0;
 VAR_16[VAR_10] = 180;
 VAR_16[VAR_8] = 0;
 FUNC_2( 640 - VAR_15, VAR_13, VAR_15, VAR_15, VAR_19, VAR_16 );

 VAR_17 = FUNC_0( VAR_3 + VAR_19 );
 VAR_18 = FUNC_3( VAR_17, "n" );
 VAR_13 += VAR_15;
 FUNC_1( 640 - ( FUNC_4( VAR_18 ) * VAR_2), VAR_13, VAR_18, 0.5 );

 return VAR_13 + VAR_1 + 2;
}
