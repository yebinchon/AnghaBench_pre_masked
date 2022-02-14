
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_46__ TYPE_9__ ;
typedef struct TYPE_45__ TYPE_8__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_37__ ;
typedef struct TYPE_39__ TYPE_2__ ;
typedef struct TYPE_38__ TYPE_1__ ;


typedef int trace_t ;
typedef scalar_t__ qboolean ;
struct TYPE_43__ {scalar_t__ contents; int svFlags; int singleClient; } ;
struct TYPE_42__ {int trBase; } ;
struct TYPE_40__ {int eFlags; int number; int modelindex; int eventParm; TYPE_4__ pos; } ;
struct TYPE_44__ {int health; int wait; int random; int flags; scalar_t__ think; scalar_t__ nextthink; TYPE_5__ r; TYPE_37__ s; void* freeAfterEvent; void* unlinkAfterEvent; int speed; TYPE_3__* item; TYPE_2__* client; int id; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_46__ {int integer; } ;
struct TYPE_45__ {scalar_t__ time; } ;
struct TYPE_41__ {int giType; int classname; } ;
struct TYPE_38__ {scalar_t__ predictItemPickup; } ;
struct TYPE_39__ {int ps; TYPE_1__ pers; } ;


 int FUNC_0 (int ,TYPE_37__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_6__*,int ,int ) ;
 int FUNC_2 (TYPE_6__*,int ,int ) ;
 int FUNC_3 (char*,int ,int ) ;
 TYPE_6__* FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_6 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_10 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_11 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_12 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_13 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_14 (TYPE_6__*,TYPE_6__*) ;
 int FUNC_15 (TYPE_6__*,TYPE_6__*) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_16 () ;
 int FUNC_17 (int ,int*,int *) ;
 TYPE_9__ VAR_8 ;
 TYPE_8__ VAR_9 ;
 scalar_t__ VAR_10 ;
 void* VAR_11 ;
 int FUNC_18 (TYPE_6__*) ;

void FUNC_19 (gentity_t *VAR_12, gentity_t *VAR_13, trace_t *VAR_14) {
 int VAR_15;
 qboolean VAR_16;

 if (!VAR_13->client)
  return;
 if (VAR_13->health < 1)
  return;


 if ( !FUNC_0( VAR_8.integer, &VAR_12->s, &VAR_13->client->ps ) ) {
  return;
 }

 FUNC_3( "Item: %i %s\n", VAR_13->s.number, VAR_12->item->classname );

 VAR_16 = VAR_13->client->pers.predictItemPickup;

 VAR_15 = -1;
 if (!VAR_12->id || !FUNC_17(VAR_12->id, &VAR_15, &VAR_13->client->ps )) {

  switch( VAR_12->item->giType ) {
  case 128:
   VAR_15 = FUNC_15(VAR_12, VAR_13);

   break;
  case 137:
   VAR_15 = FUNC_6(VAR_12, VAR_13);

   break;
  case 136:
   VAR_15 = FUNC_7(VAR_12, VAR_13);
   break;
  case 134:
   VAR_15 = FUNC_9(VAR_12, VAR_13);
   break;
  case 131:
   VAR_15 = FUNC_12(VAR_12, VAR_13);
   VAR_16 = VAR_10;
   break;





  case 129:
   VAR_15 = FUNC_14(VAR_12, VAR_13);
   break;
  case 133:
   VAR_15 = FUNC_10(VAR_12, VAR_13);
   break;
  case 130:
   VAR_15 = FUNC_13(VAR_12, VAR_13);
   break;
  case 135:
   VAR_15 = FUNC_8(VAR_12, VAR_13);
   break;
  default:
   return;
  }
 }

 if ( !VAR_15 ) {
  return;
 }


 if (VAR_16) {
  FUNC_2( VAR_13, VAR_2, VAR_12->s.modelindex );
 } else {
  FUNC_1( VAR_13, VAR_2, VAR_12->s.modelindex );
 }


 if ( VAR_12->item->giType == 131 || VAR_12->item->giType == 129) {

  if (!VAR_12->speed) {
   gentity_t *VAR_17;

   VAR_17 = FUNC_4( VAR_12->s.pos.trBase, VAR_1 );
   VAR_17->s.eventParm = VAR_12->s.modelindex;
   VAR_17->r.svFlags |= VAR_5;
  } else {
   gentity_t *VAR_18;

   VAR_18 = FUNC_4( VAR_12->s.pos.trBase, VAR_1 );
   VAR_18->s.eventParm = VAR_12->s.modelindex;

   VAR_18->r.svFlags |= VAR_7;
   VAR_18->r.singleClient = VAR_13->s.number;
  }
 }


 FUNC_5 (VAR_12, VAR_13);


 if ( VAR_12->wait == -1 ) {
  VAR_12->r.svFlags |= VAR_6;
  VAR_12->s.eFlags |= VAR_0;
  VAR_12->r.contents = 0;
  VAR_12->unlinkAfterEvent = VAR_11;
  return;
 }


 if ( VAR_12->wait ) {
  VAR_15 = VAR_12->wait;
 }


 if ( VAR_12->random ) {
  VAR_15 += FUNC_16() * VAR_12->random;
  if ( VAR_15 < 1 ) {
   VAR_15 = 1;
  }
 }


 if ( VAR_12->flags & VAR_3 ) {
  VAR_12->freeAfterEvent = VAR_11;
 }




 VAR_12->r.svFlags |= VAR_6;
 VAR_12->s.eFlags |= VAR_0;
 VAR_12->r.contents = 0;





 if ( VAR_15 <= 0 ) {
  VAR_12->nextthink = 0;
  VAR_12->think = 0;
 } else {
  VAR_12->nextthink = VAR_9.time + VAR_15 * 1000;
  VAR_12->think = VAR_4;
 }
 FUNC_18( VAR_12 );
}
