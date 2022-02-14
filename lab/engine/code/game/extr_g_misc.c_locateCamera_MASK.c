
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_8__ {int frame; int powerups; int eventParm; int angles; int origin; int origin2; int clientNum; int number; } ;
struct TYPE_7__ {int ownerNum; } ;
struct TYPE_9__ {int spawnflags; TYPE_2__ s; int target; TYPE_1__ r; } ;
typedef TYPE_3__ gentity_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*) ;
 TYPE_3__* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;

void FUNC_8( gentity_t *VAR_0 ) {
 vec3_t VAR_1;
 gentity_t *VAR_2;
 gentity_t *VAR_3;

 VAR_3 = FUNC_2( VAR_0->target );
 if ( !VAR_3 ) {
  FUNC_3( "Couldn't find target for misc_partal_surface\n" );
  FUNC_1( VAR_0 );
  return;
 }
 VAR_0->r.ownerNum = VAR_3->s.number;


 if ( VAR_3->spawnflags & 1 ) {
  VAR_0->s.frame = 25;
 } else if ( VAR_3->spawnflags & 2 ) {
  VAR_0->s.frame = 75;
 }


 if ( VAR_3->spawnflags & 4 ) {

  VAR_0->s.powerups = 0;
 }
 else {
  VAR_0->s.powerups = 1;
 }


 VAR_0->s.clientNum = VAR_3->s.clientNum;

 FUNC_5( VAR_3->s.origin, VAR_0->s.origin2 );


 VAR_2 = FUNC_2( VAR_3->target );
 if ( VAR_2 ) {
  FUNC_7( VAR_2->s.origin, VAR_3->s.origin, VAR_1 );
  FUNC_6( VAR_1 );
 } else {
  FUNC_4( VAR_3->s.angles, VAR_1 );
 }

 VAR_0->s.eventParm = FUNC_0( VAR_1 );
}
