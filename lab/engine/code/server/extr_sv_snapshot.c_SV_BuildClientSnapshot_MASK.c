
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_9__ ;
typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_17__ {scalar_t__ snapshotCounter; } ;
typedef TYPE_2__ svEntity_t ;
struct TYPE_18__ {int numSnapshotEntities; int * snapshotEntities; } ;
typedef TYPE_3__ snapshotEntityNumbers_t ;
struct TYPE_19__ {int s; } ;
typedef TYPE_4__ sharedEntity_t ;
struct TYPE_20__ {int clientNum; scalar_t__ viewheight; int origin; } ;
typedef TYPE_5__ playerState_t ;
typedef int entityState_t ;
struct TYPE_16__ {size_t outgoingSequence; } ;
struct TYPE_21__ {scalar_t__ state; TYPE_4__* gentity; TYPE_1__ netchan; TYPE_7__* frames; } ;
typedef TYPE_6__ client_t ;
struct TYPE_22__ {size_t first_entity; scalar_t__ num_entities; scalar_t__ areabits; TYPE_5__ ps; } ;
typedef TYPE_7__ clientSnapshot_t ;
struct TYPE_24__ {scalar_t__ snapshotCounter; TYPE_2__* svEntities; } ;
struct TYPE_23__ {int clients; size_t nextSnapshotEntities; size_t numSnapshotEntities; int * snapshotEntities; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 int FUNC_2 (int *,TYPE_7__*,TYPE_3__*,int ) ;
 TYPE_5__* FUNC_3 (TYPE_6__*) ;
 TYPE_4__* FUNC_4 (int ) ;
 int VAR_6 ;
 int FUNC_5 (int ,int *) ;
 int VAR_7 ;
 int FUNC_6 (int *,int,int,int ) ;
 TYPE_9__ VAR_8 ;
 TYPE_8__ VAR_9 ;

__attribute__((used)) static void FUNC_7( client_t *VAR_10 ) {
 vec3_t VAR_11;
 clientSnapshot_t *VAR_12;
 snapshotEntityNumbers_t VAR_13;
 int VAR_14;
 sharedEntity_t *VAR_15;
 entityState_t *VAR_16;
 svEntity_t *VAR_17;
 sharedEntity_t *VAR_18;
 int VAR_19;
 playerState_t *VAR_20;


 VAR_8.snapshotCounter++;


 VAR_12 = &VAR_10->frames[ VAR_10->netchan.outgoingSequence & VAR_5 ];


 VAR_13.numSnapshotEntities = 0;
 FUNC_1( VAR_12->areabits, 0, sizeof( VAR_12->areabits ) );


 VAR_12->num_entities = 0;

 VAR_18 = VAR_10->gentity;
 if ( !VAR_18 || VAR_10->state == VAR_0 ) {
  return;
 }


 VAR_20 = FUNC_3( VAR_10 - VAR_9.clients );
 VAR_12->ps = *VAR_20;



 VAR_19 = VAR_12->ps.clientNum;
 if ( VAR_19 < 0 || VAR_19 >= VAR_3 ) {
  FUNC_0( VAR_1, "SV_SvEntityForGentity: bad gEnt" );
 }
 VAR_17 = &VAR_8.svEntities[ VAR_19 ];

 VAR_17->snapshotCounter = VAR_8.snapshotCounter;


 FUNC_5( VAR_20->origin, VAR_11 );
 VAR_11[2] += VAR_20->viewheight;



 FUNC_2( VAR_11, VAR_12, &VAR_13, VAR_7 );





 FUNC_6( VAR_13.snapshotEntities, VAR_13.numSnapshotEntities,
  sizeof( VAR_13.snapshotEntities[0] ), VAR_6 );



 for ( VAR_14 = 0 ; VAR_14 < VAR_4/4 ; VAR_14++ ) {
  ((int *)VAR_12->areabits)[VAR_14] = ((int *)VAR_12->areabits)[VAR_14] ^ -1;
 }


 VAR_12->num_entities = 0;
 VAR_12->first_entity = VAR_9.nextSnapshotEntities;
 for ( VAR_14 = 0 ; VAR_14 < VAR_13.numSnapshotEntities ; VAR_14++ ) {
  VAR_15 = FUNC_4(VAR_13.snapshotEntities[VAR_14]);
  VAR_16 = &VAR_9.snapshotEntities[VAR_9.nextSnapshotEntities % VAR_9.numSnapshotEntities];
  *VAR_16 = VAR_15->s;
  VAR_9.nextSnapshotEntities++;

  if ( VAR_9.nextSnapshotEntities >= 0x7FFFFFFE ) {
   FUNC_0(VAR_2, "svs.nextSnapshotEntities wrapped");
  }
  VAR_12->num_entities++;
 }
}
