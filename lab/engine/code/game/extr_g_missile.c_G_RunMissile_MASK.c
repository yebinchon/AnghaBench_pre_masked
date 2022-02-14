
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_8__ ;
typedef struct TYPE_24__ TYPE_7__ ;
typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_11__ ;


typedef int vec3_t ;
struct TYPE_24__ {int fraction; int surfaceFlags; int entityNum; scalar_t__ startsolid; int endpos; scalar_t__ allsolid; } ;
typedef TYPE_7__ trace_t ;
struct TYPE_23__ {int ownerNum; int currentOrigin; int maxs; int mins; } ;
struct TYPE_22__ {scalar_t__ weapon; scalar_t__ eType; int pos; } ;
struct TYPE_25__ {int count; TYPE_6__ r; int clipmask; TYPE_5__ s; TYPE_4__* parent; TYPE_2__* target_ent; } ;
typedef TYPE_8__ gentity_t ;
struct TYPE_21__ {TYPE_3__* client; } ;
struct TYPE_20__ {TYPE_8__* hook; } ;
struct TYPE_18__ {int number; } ;
struct TYPE_19__ {TYPE_1__ s; } ;
struct TYPE_17__ {int time; } ;


 int FUNC_0 (int *,int ,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_8__*) ;
 int FUNC_2 (TYPE_8__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_8__*) ;
 int VAR_2 ;
 int FUNC_4 (int ,int ) ;
 scalar_t__ VAR_3 ;
 TYPE_11__ VAR_4 ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_7__*,int ,int ,int ,int ,int,int ) ;

void FUNC_7( gentity_t *VAR_5 ) {
 vec3_t VAR_6;
 trace_t VAR_7;
 int VAR_8;


 FUNC_0( &VAR_5->s.pos, VAR_4.time, VAR_6 );


 if ( VAR_5->target_ent ) {
  VAR_8 = VAR_5->target_ent->s.number;
 }






 else {

  VAR_8 = VAR_5->r.ownerNum;
 }

 FUNC_6( &VAR_7, VAR_5->r.currentOrigin, VAR_5->r.mins, VAR_5->r.maxs, VAR_6, VAR_8, VAR_5->clipmask );

 if ( VAR_7.startsolid || VAR_7.allsolid ) {

  FUNC_6( &VAR_7, VAR_5->r.currentOrigin, VAR_5->r.mins, VAR_5->r.maxs, VAR_5->r.currentOrigin, VAR_8, VAR_5->clipmask );
  VAR_7.fraction = 0;
 }
 else {
  FUNC_4( VAR_7.endpos, VAR_5->r.currentOrigin );
 }

 FUNC_5( VAR_5 );

 if ( VAR_7.fraction != 1 ) {

  if ( VAR_7.surfaceFlags & VAR_2 ) {

   if (VAR_5->parent && VAR_5->parent->client && VAR_5->parent->client->hook == VAR_5) {
    VAR_5->parent->client->hook = ((void*)0);
   }
   FUNC_1( VAR_5 );
   return;
  }
  FUNC_2( VAR_5, &VAR_7 );
  if ( VAR_5->s.eType != VAR_1 ) {
   return;
  }
 }
 FUNC_3( VAR_5 );
}
