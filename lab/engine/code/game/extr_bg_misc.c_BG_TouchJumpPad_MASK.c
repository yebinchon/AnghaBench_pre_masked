
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int * vec3_t ;
struct TYPE_6__ {scalar_t__ pm_type; scalar_t__ jumppad_ent; int velocity; int pmove_framecount; int jumppad_frame; scalar_t__* powerups; } ;
typedef TYPE_1__ playerState_t ;
struct TYPE_7__ {scalar_t__ number; int origin2; } ;
typedef TYPE_2__ entityState_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,TYPE_1__*) ;
 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;
 int FUNC_2 (int ,int ) ;
 float FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;

void FUNC_5( playerState_t *VAR_4, entityState_t *VAR_5 ) {
 vec3_t VAR_6;
 float VAR_7;
 int VAR_8;


 if ( VAR_4->pm_type != VAR_2 ) {
  return;
 }


 if ( VAR_4->powerups[VAR_3] ) {
  return;
 }



 if ( VAR_4->jumppad_ent != VAR_5->number ) {

  FUNC_4( VAR_5->origin2, VAR_6);
  VAR_7 = FUNC_3( FUNC_0( VAR_6[VAR_1] ) );
  if( VAR_7 < 45 ) {
   VAR_8 = 0;
  } else {
   VAR_8 = 1;
  }
  FUNC_1( VAR_0, VAR_8, VAR_4 );
 }

 VAR_4->jumppad_ent = VAR_5->number;
 VAR_4->jumppad_frame = VAR_4->pmove_framecount;

 FUNC_2( VAR_5->origin2, VAR_4->velocity );
}
