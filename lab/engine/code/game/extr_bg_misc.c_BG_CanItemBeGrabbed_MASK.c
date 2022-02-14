
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int qboolean ;
struct TYPE_8__ {int* ammo; size_t* stats; int * powerups; int * persistant; } ;
typedef TYPE_1__ playerState_t ;
struct TYPE_9__ {int giType; size_t giTag; int quantity; } ;
typedef TYPE_2__ gitem_t ;
struct TYPE_10__ {int modelindex; int generic1; int modelindex2; scalar_t__ id; } ;
typedef TYPE_3__ entityState_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
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
 TYPE_2__* VAR_17 ;
 int VAR_18 ;
 int FUNC_2 (scalar_t__,TYPE_1__ const*) ;
 int VAR_19 ;
 int VAR_20 ;

qboolean FUNC_3( int VAR_21, const entityState_t *VAR_22, const playerState_t *VAR_23 ) {
 gitem_t *VAR_24;



 qboolean VAR_25 = VAR_20;

 if ( VAR_22->modelindex < 1 || VAR_22->modelindex >= VAR_18 ) {
  FUNC_0( VAR_0, "BG_CanItemBeGrabbed: index out of range" );
 }

 VAR_24 = &VAR_17[VAR_22->modelindex];



 if ( VAR_22->id ) {
  VAR_25 = FUNC_2( VAR_22->id, VAR_23 );
 }

 switch( VAR_24->giType ) {
 case 128:
  return VAR_25;

 case 138:
  if ( VAR_23->ammo[ VAR_24->giTag ] >= 200 ) {
   return VAR_19;
  }
  return VAR_25;

 case 137:
  if ( VAR_23->stats[VAR_10] >= VAR_23->stats[VAR_13] * 2 ) {
   return VAR_19;
  }

  return VAR_25;

 case 134:







  if ( VAR_24->quantity == 5 || VAR_24->quantity == 100 ) {
   if ( VAR_23->stats[VAR_11] >= VAR_23->stats[VAR_13] * 2 ) {
    return VAR_19;
   }
   return VAR_25;
  }

  if ( VAR_23->stats[VAR_11] >= VAR_23->stats[VAR_13] ) {
   return VAR_19;
  }
  return VAR_25;

 case 131:
  return VAR_25;
 case 129:
  if( VAR_21 == VAR_2 ) {



   if (VAR_23->persistant[VAR_4] == VAR_16) {
    if (VAR_24->giTag == VAR_5 ||
     (VAR_24->giTag == VAR_8 && VAR_22->modelindex2) ||
     (VAR_24->giTag == VAR_8 && VAR_23->powerups[VAR_5]) )
     return VAR_25;
   } else if (VAR_23->persistant[VAR_4] == VAR_15) {
    if (VAR_24->giTag == VAR_8 ||
     (VAR_24->giTag == VAR_5 && VAR_22->modelindex2) ||
     (VAR_24->giTag == VAR_5 && VAR_23->powerups[VAR_8]) )
     return VAR_25;
   }
  }






  return VAR_19;

 case 133:

  if ( VAR_23->stats[VAR_12] ) {
   return VAR_19;
  }
  return VAR_25;

 case 130:
  return VAR_25;

 case 135:
  return VAR_25;

 case 136:
  FUNC_0( VAR_0, "BG_CanItemBeGrabbed: IT_BAD" );
 default:


  FUNC_1("BG_CanItemBeGrabbed: unknown enum %d\n", VAR_24->giType );


  break;
 }

 return VAR_19;
}
