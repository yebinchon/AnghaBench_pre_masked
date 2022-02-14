
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_15__ {int* endpos; int entityNum; scalar_t__ startsolid; } ;
typedef TYPE_4__ trace_t ;
struct TYPE_14__ {scalar_t__ contents; int maxs; int mins; } ;
struct TYPE_13__ {int* origin; int eFlags; int groundEntityNum; int number; scalar_t__ modelindex2; TYPE_1__* modelindex; int eType; } ;
struct TYPE_16__ {int spawnflags; int flags; int think; scalar_t__ nextthink; TYPE_3__ r; TYPE_2__ s; TYPE_1__* item; scalar_t__ targetname; int classname; int use; int touch; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_17__ {scalar_t__ time; } ;
struct TYPE_12__ {scalar_t__ giType; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (char*,int ,int ) ;
 int FUNC_2 (TYPE_5__*,int*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int ,int,int,int) ;
 int VAR_10 ;
 int FUNC_4 () ;
 TYPE_8__ VAR_11 ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (TYPE_4__*,int*,int ,int ,int ,int ,int ) ;
 int FUNC_7 (int*) ;

void FUNC_8( gentity_t *VAR_12 ) {
 trace_t VAR_13;
 vec3_t VAR_14;

 FUNC_3( VAR_12->r.mins, -VAR_4, -VAR_4, -VAR_4 );
 FUNC_3( VAR_12->r.maxs, VAR_4, VAR_4, VAR_4 );

 VAR_12->s.eType = VAR_2;
 VAR_12->s.modelindex = VAR_12->item - VAR_10;
 VAR_12->s.modelindex2 = 0;

 VAR_12->r.contents = VAR_0;
 VAR_12->touch = VAR_8;

 VAR_12->use = VAR_9;

 if ( VAR_12->spawnflags & 1 ) {

  FUNC_2( VAR_12, VAR_12->s.origin );
 } else {

  FUNC_3( VAR_14, VAR_12->s.origin[0], VAR_12->s.origin[1], VAR_12->s.origin[2] - 4096 );
  FUNC_6( &VAR_13, VAR_12->s.origin, VAR_12->r.mins, VAR_12->r.maxs, VAR_14, VAR_12->s.number, VAR_6 );
  if ( VAR_13.startsolid ) {
   FUNC_1 ("FinishSpawningItem: %s startsolid at %s\n", VAR_12->classname, FUNC_7(VAR_12->s.origin));
   FUNC_0( VAR_12 );
   return;
  }


  VAR_12->s.groundEntityNum = VAR_13.entityNum;

  FUNC_2( VAR_12, VAR_13.endpos );
 }


 if ( ( VAR_12->flags & VAR_3 ) || VAR_12->targetname ) {
  VAR_12->s.eFlags |= VAR_1;
  VAR_12->r.contents = 0;
  return;
 }


 if ( VAR_12->item->giType == VAR_5 ) {
  float VAR_15;

  VAR_15 = 45 + FUNC_4() * 15;
  VAR_12->s.eFlags |= VAR_1;
  VAR_12->r.contents = 0;
  VAR_12->nextthink = VAR_11.time + VAR_15 * 1000;
  VAR_12->think = VAR_7;
  return;
 }


 FUNC_5 (VAR_12);
}
