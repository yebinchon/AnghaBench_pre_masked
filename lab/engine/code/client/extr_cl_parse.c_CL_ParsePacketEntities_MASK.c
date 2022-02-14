
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {scalar_t__ readcount; scalar_t__ cursize; } ;
typedef TYPE_1__ msg_t ;
struct TYPE_14__ {int number; } ;
typedef TYPE_2__ entityState_t ;
struct TYPE_15__ {int parseEntitiesNum; int numEntities; } ;
typedef TYPE_3__ clSnapshot_t ;
struct TYPE_17__ {int parseEntitiesNum; TYPE_2__* parseEntities; TYPE_2__* entityBaselines; } ;
struct TYPE_16__ {int integer; } ;


 int FUNC_0 (TYPE_1__*,TYPE_3__*,int,TYPE_2__*,int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,scalar_t__,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_1__*,int ) ;
 TYPE_5__ VAR_4 ;
 TYPE_4__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

void FUNC_4( msg_t *VAR_8, clSnapshot_t *VAR_9, clSnapshot_t *VAR_10) {
 int VAR_11;
 entityState_t *VAR_12;
 int VAR_13, VAR_14;

 VAR_10->parseEntitiesNum = VAR_4.parseEntitiesNum;
 VAR_10->numEntities = 0;


 VAR_13 = 0;
 VAR_12 = ((void*)0);
 if (!VAR_9) {
  VAR_14 = 99999;
 } else {
  if ( VAR_13 >= VAR_9->numEntities ) {
   VAR_14 = 99999;
  } else {
   VAR_12 = &VAR_4.parseEntities[
    (VAR_9->parseEntitiesNum + VAR_13) & (VAR_3-1)];
   VAR_14 = VAR_12->number;
  }
 }

 while ( 1 ) {

  VAR_11 = FUNC_3( VAR_8, VAR_1 );

  if ( VAR_11 == (VAR_2-1) ) {
   break;
  }

  if ( VAR_8->readcount > VAR_8->cursize ) {
   FUNC_1 (VAR_0,"CL_ParsePacketEntities: end of message");
  }

  while ( VAR_14 < VAR_11 ) {

   if ( VAR_5->integer == 3 ) {
    FUNC_2 ("%3i:  unchanged: %i\n", VAR_8->readcount, VAR_14);
   }
   FUNC_0( VAR_8, VAR_10, VAR_14, VAR_12, VAR_7 );

   VAR_13++;

   if ( VAR_13 >= VAR_9->numEntities ) {
    VAR_14 = 99999;
   } else {
    VAR_12 = &VAR_4.parseEntities[
     (VAR_9->parseEntitiesNum + VAR_13) & (VAR_3-1)];
    VAR_14 = VAR_12->number;
   }
  }
  if (VAR_14 == VAR_11) {

   if ( VAR_5->integer == 3 ) {
    FUNC_2 ("%3i:  delta: %i\n", VAR_8->readcount, VAR_11);
   }
   FUNC_0( VAR_8, VAR_10, VAR_11, VAR_12, VAR_6 );

   VAR_13++;

   if ( VAR_13 >= VAR_9->numEntities ) {
    VAR_14 = 99999;
   } else {
    VAR_12 = &VAR_4.parseEntities[
     (VAR_9->parseEntitiesNum + VAR_13) & (VAR_3-1)];
    VAR_14 = VAR_12->number;
   }
   continue;
  }

  if ( VAR_14 > VAR_11 ) {

   if ( VAR_5->integer == 3 ) {
    FUNC_2 ("%3i:  baseline: %i\n", VAR_8->readcount, VAR_11);
   }
   FUNC_0( VAR_8, VAR_10, VAR_11, &VAR_4.entityBaselines[VAR_11], VAR_6 );
   continue;
  }

 }


 while ( VAR_14 != 99999 ) {

  if ( VAR_5->integer == 3 ) {
   FUNC_2 ("%3i:  unchanged: %i\n", VAR_8->readcount, VAR_14);
  }
  FUNC_0( VAR_8, VAR_10, VAR_14, VAR_12, VAR_7 );

  VAR_13++;

  if ( VAR_13 >= VAR_9->numEntities ) {
   VAR_14 = 99999;
  } else {
   VAR_12 = &VAR_4.parseEntities[
    (VAR_9->parseEntitiesNum + VAR_13) & (VAR_3-1)];
   VAR_14 = VAR_12->number;
  }
 }
}
