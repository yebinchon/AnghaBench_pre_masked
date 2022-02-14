
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;


typedef int vec3_t ;
struct TYPE_21__ {int normal; } ;
struct TYPE_25__ {size_t entityNum; int contents; int surfaceFlags; TYPE_1__ plane; int endpos; } ;
typedef TYPE_5__ trace_t ;
struct TYPE_22__ {int number; int eventParm; int clientNum; int origin2; } ;
struct TYPE_26__ {TYPE_4__* client; TYPE_2__ s; scalar_t__ takedamage; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_23__ {int eFlags; int * persistant; } ;
struct TYPE_24__ {scalar_t__ invulnerabilityTime; int accurateCount; scalar_t__ rewardTime; int accuracy_hits; TYPE_3__ ps; } ;
struct TYPE_20__ {scalar_t__ time; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_6__*,TYPE_6__*,TYPE_6__*,int ,int ,int,int ,int ) ;
 scalar_t__ FUNC_3 (TYPE_6__*,int ,int ,int ,int ) ;
 TYPE_6__* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_6__*,TYPE_6__*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int,int ,int ) ;
 int VAR_16 ;
 TYPE_6__* VAR_17 ;
 TYPE_11__ VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (TYPE_5__*,int ,int *,int *,int ,int,int ) ;
 int FUNC_11 (TYPE_6__*) ;
 int VAR_22 ;

void FUNC_12 (gentity_t *VAR_23) {
 vec3_t VAR_24;



 trace_t VAR_25;
 gentity_t *VAR_26;
 gentity_t *VAR_27;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;
 int VAR_32;
 gentity_t *VAR_33[VAR_11];

 VAR_28 = 100 * VAR_21;

 FUNC_8 (VAR_19, 8192, VAR_16, VAR_24);


 VAR_31 = 0;
 VAR_30 = 0;
 VAR_32 = VAR_23->s.number;
 do {
  FUNC_10 (&VAR_25, VAR_19, ((void*)0), ((void*)0), VAR_24, VAR_32, VAR_10 );
  if ( VAR_25.entityNum >= VAR_7 ) {
   break;
  }
  VAR_27 = &VAR_17[ VAR_25.entityNum ];
  if ( VAR_27->takedamage ) {
    if( FUNC_5( VAR_27, VAR_23 ) ) {
     VAR_30++;
    }
    FUNC_2 (VAR_27, VAR_23, VAR_23, VAR_16, VAR_25.endpos, VAR_28, 0, VAR_12);

  }
  if ( VAR_25.contents & VAR_0 ) {
   break;
  }

  FUNC_11( VAR_27 );
  VAR_33[VAR_31] = VAR_27;
  VAR_31++;
 } while ( VAR_31 < VAR_11 );


 for ( VAR_29 = 0 ; VAR_29 < VAR_31 ; VAR_29++ ) {
  FUNC_9( VAR_33[VAR_29] );
 }




 FUNC_6( VAR_25.endpos, VAR_19 );


 VAR_26 = FUNC_4( VAR_25.endpos, VAR_9 );


 VAR_26->s.clientNum = VAR_23->s.clientNum;

 FUNC_7( VAR_19, VAR_26->s.origin2 );

 FUNC_8( VAR_26->s.origin2, 4, VAR_20, VAR_26->s.origin2 );
 FUNC_8( VAR_26->s.origin2, -1, VAR_22, VAR_26->s.origin2 );


 if ( VAR_25.surfaceFlags & VAR_15 ) {
  VAR_26->s.eventParm = 255;
 } else {
  VAR_26->s.eventParm = FUNC_0( VAR_25.plane.normal );
 }
 VAR_26->s.clientNum = VAR_23->s.clientNum;


 if ( VAR_30 == 0 ) {

  VAR_23->client->accurateCount = 0;
 } else {

  VAR_23->client->accurateCount += VAR_30;
  if ( VAR_23->client->accurateCount >= 2 ) {
   VAR_23->client->accurateCount -= 2;
   VAR_23->client->ps.persistant[VAR_13]++;

   VAR_23->client->ps.eFlags &= ~(VAR_6 | VAR_4 | VAR_5 | VAR_1 | VAR_3 | VAR_2 );
   VAR_23->client->ps.eFlags |= VAR_6;
   VAR_23->client->rewardTime = VAR_18.time + VAR_14;
  }
  VAR_23->client->accuracy_hits++;
 }

}
