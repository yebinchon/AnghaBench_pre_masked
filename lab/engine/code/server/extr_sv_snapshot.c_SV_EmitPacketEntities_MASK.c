
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int msg_t ;
struct TYPE_11__ {int number; } ;
typedef TYPE_2__ entityState_t ;
struct TYPE_12__ {int num_entities; int first_entity; } ;
typedef TYPE_3__ clientSnapshot_t ;
struct TYPE_14__ {TYPE_1__* svEntities; } ;
struct TYPE_13__ {int numSnapshotEntities; TYPE_2__* snapshotEntities; } ;
struct TYPE_10__ {TYPE_2__ baseline; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,scalar_t__,int ) ;
 int FUNC_1 (int *,TYPE_2__*,TYPE_2__*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_5__ VAR_4 ;
 TYPE_4__ VAR_5 ;

__attribute__((used)) static void FUNC_2( clientSnapshot_t *VAR_6, clientSnapshot_t *VAR_7, msg_t *VAR_8 ) {
 entityState_t *VAR_9, *VAR_10;
 int VAR_11, VAR_12;
 int VAR_13, VAR_14;
 int VAR_15;


 if ( !VAR_6 ) {
  VAR_15 = 0;
 } else {
  VAR_15 = VAR_6->num_entities;
 }

 VAR_10 = ((void*)0);
 VAR_9 = ((void*)0);
 VAR_12 = 0;
 VAR_11 = 0;
 while ( VAR_12 < VAR_7->num_entities || VAR_11 < VAR_15 ) {
  if ( VAR_12 >= VAR_7->num_entities ) {
   VAR_14 = 9999;
  } else {
   VAR_10 = &VAR_5.snapshotEntities[(VAR_7->first_entity+VAR_12) % VAR_5.numSnapshotEntities];
   VAR_14 = VAR_10->number;
  }

  if ( VAR_11 >= VAR_15 ) {
   VAR_13 = 9999;
  } else {
   VAR_9 = &VAR_5.snapshotEntities[(VAR_6->first_entity+VAR_11) % VAR_5.numSnapshotEntities];
   VAR_13 = VAR_9->number;
  }

  if ( VAR_14 == VAR_13 ) {



   FUNC_1 (VAR_8, VAR_9, VAR_10, VAR_2 );
   VAR_11++;
   VAR_12++;
   continue;
  }

  if ( VAR_14 < VAR_13 ) {

   FUNC_1 (VAR_8, &VAR_4.svEntities[VAR_14].baseline, VAR_10, VAR_3 );
   VAR_12++;
   continue;
  }

  if ( VAR_14 > VAR_13 ) {

   FUNC_1 (VAR_8, VAR_9, ((void*)0), VAR_3 );
   VAR_11++;
   continue;
  }
 }

 FUNC_0( VAR_8, (VAR_1-1), VAR_0 );
}
