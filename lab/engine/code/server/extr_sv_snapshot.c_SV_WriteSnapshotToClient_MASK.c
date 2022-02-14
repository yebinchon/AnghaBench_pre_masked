
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int msg_t ;
struct TYPE_10__ {size_t outgoingSequence; } ;
struct TYPE_11__ {scalar_t__ deltaMessage; scalar_t__ state; scalar_t__ rateDelayed; scalar_t__ oldServerTime; int name; TYPE_1__ netchan; TYPE_3__* frames; } ;
typedef TYPE_2__ client_t ;
struct TYPE_12__ {scalar_t__ first_entity; int areabytes; int ps; int areabits; } ;
typedef TYPE_3__ clientSnapshot_t ;
struct TYPE_15__ {scalar_t__ time; } ;
struct TYPE_14__ {int integer; } ;
struct TYPE_13__ {scalar_t__ nextSnapshotEntities; scalar_t__ numSnapshotEntities; int snapFlagServerBit; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *,int *,int *) ;
 int FUNC_4 (int *,scalar_t__) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (TYPE_3__*,TYPE_3__*,int *) ;
 TYPE_6__ VAR_5 ;
 TYPE_5__* VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_4__ VAR_9 ;

__attribute__((used)) static void FUNC_6( client_t *VAR_10, msg_t *VAR_11 ) {
 clientSnapshot_t *VAR_12, *VAR_13;
 int VAR_14;
 int VAR_15;
 int VAR_16;


 VAR_12 = &VAR_10->frames[ VAR_10->netchan.outgoingSequence & VAR_2 ];


 if ( VAR_10->deltaMessage <= 0 || VAR_10->state != VAR_0 ) {

  VAR_13 = ((void*)0);
  VAR_14 = 0;
 } else if ( VAR_10->netchan.outgoingSequence - VAR_10->deltaMessage
  >= (VAR_1 - 3) ) {

  FUNC_0 ("%s: Delta request from out of date packet.\n", VAR_10->name);
  VAR_13 = ((void*)0);
  VAR_14 = 0;
 } else {

  VAR_13 = &VAR_10->frames[ VAR_10->deltaMessage & VAR_2 ];
  VAR_14 = VAR_10->netchan.outgoingSequence - VAR_10->deltaMessage;


  if ( VAR_13->first_entity <= VAR_9.nextSnapshotEntities - VAR_9.numSnapshotEntities ) {
   FUNC_0 ("%s: Delta request from out of date entities.\n", VAR_10->name);
   VAR_13 = ((void*)0);
   VAR_14 = 0;
  }
 }

 FUNC_1 (VAR_11, VAR_8);







 if( VAR_10->oldServerTime ) {






  FUNC_4 (VAR_11, VAR_5.time + VAR_10->oldServerTime);
 } else {
  FUNC_4 (VAR_11, VAR_5.time);
 }


 FUNC_1 (VAR_11, VAR_14);

 VAR_16 = VAR_9.snapFlagServerBit;
 if ( VAR_10->rateDelayed ) {
  VAR_16 |= VAR_4;
 }
 if ( VAR_10->state != VAR_0 ) {
  VAR_16 |= VAR_3;
 }

 FUNC_1 (VAR_11, VAR_16);


 FUNC_1 (VAR_11, VAR_12->areabytes);
 FUNC_2 (VAR_11, VAR_12->areabits, VAR_12->areabytes);


 if ( VAR_13 ) {
  FUNC_3( VAR_11, &VAR_13->ps, &VAR_12->ps );
 } else {
  FUNC_3( VAR_11, ((void*)0), &VAR_12->ps );
 }


 FUNC_5 (VAR_13, VAR_12, VAR_11);


 if ( VAR_6->integer ) {
  for ( VAR_15 = 0 ; VAR_15 < VAR_6->integer ; VAR_15++ ) {
   FUNC_1 (VAR_11, VAR_7);
  }
 }
}
