
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;


typedef scalar_t__* vec3_t ;
typedef int qboolean ;
struct TYPE_33__ {scalar_t__* origin; scalar_t__* angles; TYPE_8__* ent; int deltayaw; } ;
typedef TYPE_7__ pushed_t ;
struct TYPE_28__ {scalar_t__ trType; scalar_t__* trBase; } ;
struct TYPE_27__ {scalar_t__ trType; scalar_t__* trBase; } ;
struct TYPE_32__ {scalar_t__ eType; scalar_t__ groundEntityNum; scalar_t__ number; TYPE_2__ apos; TYPE_1__ pos; scalar_t__ loopSound; } ;
struct TYPE_31__ {scalar_t__* currentAngles; scalar_t__* currentOrigin; scalar_t__* absmin; scalar_t__* absmax; int maxs; int mins; } ;
struct TYPE_34__ {TYPE_4__* client; TYPE_6__ s; TYPE_5__ r; int physicsObject; int * activator; struct TYPE_34__* enemy; int classname; } ;
typedef TYPE_8__ gentity_t ;
struct TYPE_29__ {scalar_t__* origin; int * delta_angles; } ;
struct TYPE_30__ {TYPE_3__ ps; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_8__*,int ,int ) ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*,TYPE_8__*,TYPE_8__*,int *,int *,int,int ,int ) ;
 int FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_8__*) ;
 scalar_t__ FUNC_6 (TYPE_8__*,TYPE_8__*,scalar_t__*,scalar_t__*) ;
 int FUNC_7 (TYPE_8__*,TYPE_8__*,scalar_t__*,scalar_t__*) ;
 int VAR_4 ;
 int VAR_5 ;
 float FUNC_8 (int ,int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_9 (scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_10 (scalar_t__*,scalar_t__*) ;
 size_t VAR_7 ;
 TYPE_8__* VAR_8 ;
 TYPE_7__* VAR_9 ;
 TYPE_7__* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_11 (int ,char*) ;
 int FUNC_12 (scalar_t__*,scalar_t__*,int*,int) ;
 int FUNC_13 (TYPE_8__*) ;
 int FUNC_14 (TYPE_8__*) ;

qboolean FUNC_15( gentity_t *VAR_13, vec3_t VAR_14, vec3_t VAR_15, gentity_t **VAR_16 ) {
 int VAR_17, VAR_18;
 gentity_t *VAR_19;
 vec3_t VAR_20, VAR_21;
 pushed_t *VAR_22;
 int VAR_23[VAR_4];
 int VAR_24;
 vec3_t VAR_25, VAR_26;

 *VAR_16 = ((void*)0);




 if ( VAR_13->r.currentAngles[0] || VAR_13->r.currentAngles[1] || VAR_13->r.currentAngles[2]
  || VAR_15[0] || VAR_15[1] || VAR_15[2] ) {
  float VAR_27;

  VAR_27 = FUNC_8( VAR_13->r.mins, VAR_13->r.maxs );
  for ( VAR_17 = 0 ; VAR_17 < 3 ; VAR_17++ ) {
   VAR_20[VAR_17] = VAR_13->r.currentOrigin[VAR_17] + VAR_14[VAR_17] - VAR_27;
   VAR_21[VAR_17] = VAR_13->r.currentOrigin[VAR_17] + VAR_14[VAR_17] + VAR_27;
   VAR_25[VAR_17] = VAR_20[VAR_17] - VAR_14[VAR_17];
   VAR_26[VAR_17] = VAR_21[VAR_17] - VAR_14[VAR_17];
  }
 } else {
  for (VAR_17=0 ; VAR_17<3 ; VAR_17++) {
   VAR_20[VAR_17] = VAR_13->r.absmin[VAR_17] + VAR_14[VAR_17];
   VAR_21[VAR_17] = VAR_13->r.absmax[VAR_17] + VAR_14[VAR_17];
  }

  FUNC_10( VAR_13->r.absmin, VAR_25 );
  FUNC_10( VAR_13->r.absmax, VAR_26 );
  for (VAR_17=0 ; VAR_17<3 ; VAR_17++) {
   if ( VAR_14[VAR_17] > 0 ) {
    VAR_26[VAR_17] += VAR_14[VAR_17];
   } else {
    VAR_25[VAR_17] += VAR_14[VAR_17];
   }
  }
 }


 FUNC_14( VAR_13 );

 VAR_24 = FUNC_12( VAR_25, VAR_26, VAR_23, VAR_4 );


 FUNC_9( VAR_13->r.currentOrigin, VAR_14, VAR_13->r.currentOrigin );
 FUNC_9( VAR_13->r.currentAngles, VAR_15, VAR_13->r.currentAngles );
 FUNC_13( VAR_13 );


 for ( VAR_18 = 0 ; VAR_18 < VAR_24 ; VAR_18++ ) {
  VAR_19 = &VAR_8[ VAR_23[ VAR_18 ] ];
  if ( VAR_19->s.eType != VAR_0 && VAR_19->s.eType != VAR_2 && !VAR_19->physicsObject ) {
   continue;
  }


  if ( VAR_19->s.groundEntityNum != VAR_13->s.number ) {

   if ( VAR_19->r.absmin[0] >= VAR_21[0]
   || VAR_19->r.absmin[1] >= VAR_21[1]
   || VAR_19->r.absmin[2] >= VAR_21[2]
   || VAR_19->r.absmax[0] <= VAR_20[0]
   || VAR_19->r.absmax[1] <= VAR_20[1]
   || VAR_19->r.absmax[2] <= VAR_20[2] ) {
    continue;
   }


   if (!FUNC_5 (VAR_19)) {
    continue;
   }
  }


  if ( FUNC_6( VAR_19, VAR_13, VAR_14, VAR_15 ) ) {
   continue;
  }




  if ( VAR_13->s.pos.trType == VAR_6 || VAR_13->s.apos.trType == VAR_6 ) {
   FUNC_2( VAR_19, VAR_13, VAR_13, ((void*)0), ((void*)0), 99999, 0, VAR_5 );
   continue;
  }



  *VAR_16 = VAR_19;




  for ( VAR_22=VAR_10-1 ; VAR_22>=VAR_9 ; VAR_22-- ) {
   FUNC_10 (VAR_22->origin, VAR_22->ent->s.pos.trBase);
   FUNC_10 (VAR_22->angles, VAR_22->ent->s.apos.trBase);
   if ( VAR_22->ent->client ) {
    VAR_22->ent->client->ps.delta_angles[VAR_7] = VAR_22->deltayaw;
    FUNC_10 (VAR_22->origin, VAR_22->ent->client->ps.origin);
   }
   FUNC_13 (VAR_22->ent);
  }
  return VAR_11;
 }

 return VAR_12;
}
