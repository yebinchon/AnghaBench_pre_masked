
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int * vec3_t ;
typedef int qboolean ;
struct TYPE_19__ {int * trBase; } ;
struct TYPE_16__ {int * trBase; } ;
struct TYPE_20__ {int eFlags; scalar_t__ groundEntityNum; scalar_t__ number; TYPE_5__ apos; TYPE_2__ pos; } ;
struct TYPE_15__ {int * currentOrigin; } ;
struct TYPE_21__ {TYPE_6__ s; TYPE_4__* client; TYPE_1__ r; } ;
typedef TYPE_7__ gentity_t ;
struct TYPE_22__ {int * angles; int * origin; int deltayaw; TYPE_7__* ent; } ;
struct TYPE_17__ {int * origin; int * delta_angles; } ;
struct TYPE_18__ {TYPE_3__ ps; } ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int *,int **) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int *,int **) ;
 TYPE_7__* FUNC_4 (TYPE_7__*) ;
 int FUNC_5 (int **,int **) ;
 size_t VAR_2 ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *,int *) ;
 size_t VAR_3 ;
 TYPE_9__* VAR_4 ;
 TYPE_9__* VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_9 (TYPE_7__*) ;

qboolean FUNC_10( gentity_t *VAR_8, gentity_t *VAR_9, vec3_t VAR_10, vec3_t VAR_11 ) {
 vec3_t VAR_12[3], VAR_13[3];
 vec3_t VAR_14, VAR_15, VAR_16;
 gentity_t *VAR_17;



 if ( ( VAR_9->s.eFlags & VAR_0 ) &&
  VAR_8->s.groundEntityNum != VAR_9->s.number ) {
  return VAR_6;
 }


 if (VAR_5 > &VAR_4[VAR_2]) {
  FUNC_2( "pushed_p > &pushed[MAX_GENTITIES]" );
 }
 VAR_5->ent = VAR_8;
 FUNC_7 (VAR_8->s.pos.trBase, VAR_5->origin);
 FUNC_7 (VAR_8->s.apos.trBase, VAR_5->angles);
 if ( VAR_8->client ) {
  VAR_5->deltayaw = VAR_8->client->ps.delta_angles[VAR_3];
  FUNC_7 (VAR_8->client->ps.origin, VAR_5->origin);
 }
 VAR_5++;



 FUNC_1( VAR_11, VAR_13 );
 FUNC_5( VAR_13, VAR_12 );
 if ( VAR_8->client ) {
  FUNC_8 (VAR_8->client->ps.origin, VAR_9->r.currentOrigin, VAR_14);
 }
 else {
  FUNC_8 (VAR_8->s.pos.trBase, VAR_9->r.currentOrigin, VAR_14);
 }
 FUNC_7( VAR_14, VAR_15 );
 FUNC_3( VAR_15, VAR_12 );
 FUNC_8 (VAR_15, VAR_14, VAR_16);

 FUNC_6 (VAR_8->s.pos.trBase, VAR_10, VAR_8->s.pos.trBase);
 FUNC_6 (VAR_8->s.pos.trBase, VAR_16, VAR_8->s.pos.trBase);
 if ( VAR_8->client ) {
  FUNC_6 (VAR_8->client->ps.origin, VAR_10, VAR_8->client->ps.origin);
  FUNC_6 (VAR_8->client->ps.origin, VAR_16, VAR_8->client->ps.origin);

  VAR_8->client->ps.delta_angles[VAR_3] += FUNC_0(VAR_11[VAR_3]);
 }


 if ( VAR_8->s.groundEntityNum != VAR_9->s.number ) {
  VAR_8->s.groundEntityNum = VAR_1;
 }

 VAR_17 = FUNC_4( VAR_8 );
 if (!VAR_17) {

  if ( VAR_8->client ) {
   FUNC_7( VAR_8->client->ps.origin, VAR_8->r.currentOrigin );
  } else {
   FUNC_7( VAR_8->s.pos.trBase, VAR_8->r.currentOrigin );
  }
  FUNC_9 (VAR_8);
  return VAR_7;
 }




 FUNC_7( (VAR_5-1)->origin, VAR_8->s.pos.trBase);
 if ( VAR_8->client ) {
  FUNC_7( (VAR_5-1)->origin, VAR_8->client->ps.origin);
 }
 FUNC_7( (VAR_5-1)->angles, VAR_8->s.apos.trBase );
 VAR_17 = FUNC_4 (VAR_8);
 if ( !VAR_17 ) {
  VAR_8->s.groundEntityNum = VAR_1;
  VAR_5--;
  return VAR_7;
 }


 return VAR_6;
}
