
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_17__ {int normal; } ;
struct TYPE_20__ {int surfaceFlags; size_t entityNum; int endpos; TYPE_1__ plane; } ;
typedef TYPE_4__ trace_t ;
struct TYPE_19__ {int number; int eventParm; int otherEntityNum; } ;
struct TYPE_21__ {TYPE_3__ s; TYPE_2__* client; scalar_t__ takedamage; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_22__ {scalar_t__ time; } ;
struct TYPE_18__ {scalar_t__ invulnerabilityTime; int accuracy_hits; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_5__*,TYPE_5__*,TYPE_5__*,int ,int ,int,int ,int) ;
 scalar_t__ FUNC_3 (TYPE_5__*,int ,int ,int ,int ) ;
 TYPE_5__* FUNC_4 (int ,int ) ;
 scalar_t__ FUNC_5 (TYPE_5__*,TYPE_5__*) ;
 int VAR_3 ;
 float VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,float,int ,int ) ;
 float FUNC_9 (float) ;
 float FUNC_10 () ;
 int VAR_6 ;
 TYPE_5__* VAR_7 ;
 TYPE_7__ VAR_8 ;
 int VAR_9 ;
 float FUNC_11 () ;
 int VAR_10 ;
 int VAR_11 ;
 float FUNC_12 (float) ;
 int FUNC_13 (TYPE_4__*,int ,int *,int *,int ,int,int ) ;
 int VAR_12 ;

void FUNC_14 (gentity_t *VAR_13, float VAR_14, int VAR_15, int VAR_16 ) {
 trace_t VAR_17;
 vec3_t VAR_18;



 float VAR_19;
 float VAR_20;
 gentity_t *VAR_21;
 gentity_t *VAR_22;
 int VAR_23, VAR_24;

 VAR_15 *= VAR_11;

 VAR_19 = FUNC_11() * VAR_4 * 2.0f;
 VAR_20 = FUNC_12(VAR_19) * FUNC_10() * VAR_14 * 16;
 VAR_19 = FUNC_9(VAR_19) * FUNC_10() * VAR_14 * 16;
 FUNC_8 (VAR_9, 8192*16, VAR_6, VAR_18);
 FUNC_8 (VAR_18, VAR_19, VAR_10, VAR_18);
 FUNC_8 (VAR_18, VAR_20, VAR_12, VAR_18);

 VAR_24 = VAR_13->s.number;
 for (VAR_23 = 0; VAR_23 < 10; VAR_23++) {

  FUNC_13 (&VAR_17, VAR_9, ((void*)0), ((void*)0), VAR_18, VAR_24, VAR_3);
  if ( VAR_17.surfaceFlags & VAR_5 ) {
   return;
  }

  VAR_22 = &VAR_7[ VAR_17.entityNum ];


  FUNC_6( VAR_17.endpos, VAR_9 );


  if ( VAR_22->takedamage && VAR_22->client ) {
   VAR_21 = FUNC_4( VAR_17.endpos, VAR_1 );
   VAR_21->s.eventParm = VAR_22->s.number;
   if( FUNC_5( VAR_22, VAR_13 ) ) {
    VAR_13->client->accuracy_hits++;
   }
  } else {
   VAR_21 = FUNC_4( VAR_17.endpos, VAR_2 );
   VAR_21->s.eventParm = FUNC_0( VAR_17.plane.normal );
  }
  VAR_21->s.otherEntityNum = VAR_13->s.number;

  if ( VAR_22->takedamage) {
    FUNC_2( VAR_22, VAR_13, VAR_13, VAR_6, VAR_17.endpos,
     VAR_15, 0, VAR_16);



  }
  break;
 }
}
