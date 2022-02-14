
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_7__ ;
typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int vec3_t ;
typedef int moverState_t ;
struct TYPE_9__ {int currentOrigin; } ;
struct TYPE_12__ {int trTime; double trDuration; void* trType; int trDelta; int trBase; } ;
struct TYPE_8__ {TYPE_7__ pos; } ;
struct TYPE_10__ {int moverState; TYPE_2__ r; TYPE_1__ s; int pos2; int pos1; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_11__ {int time; } ;


 int FUNC_0 (TYPE_7__*,int ,int ) ;




 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,float,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 TYPE_5__ VAR_2 ;
 int FUNC_4 (TYPE_3__*) ;

void FUNC_5( gentity_t *VAR_3, moverState_t VAR_4, int VAR_5 ) {
 vec3_t VAR_6;
 float VAR_7;

 VAR_3->moverState = VAR_4;

 VAR_3->s.pos.trTime = VAR_5;
 switch( VAR_4 ) {
 case 129:
  FUNC_1( VAR_3->pos1, VAR_3->s.pos.trBase );
  VAR_3->s.pos.trType = VAR_1;
  break;
 case 128:
  FUNC_1( VAR_3->pos2, VAR_3->s.pos.trBase );
  VAR_3->s.pos.trType = VAR_1;
  break;
 case 131:
  FUNC_1( VAR_3->pos1, VAR_3->s.pos.trBase );
  FUNC_3( VAR_3->pos2, VAR_3->pos1, VAR_6 );
  VAR_7 = 1000.0 / VAR_3->s.pos.trDuration;
  FUNC_2( VAR_6, VAR_7, VAR_3->s.pos.trDelta );
  VAR_3->s.pos.trType = VAR_0;
  break;
 case 130:
  FUNC_1( VAR_3->pos2, VAR_3->s.pos.trBase );
  FUNC_3( VAR_3->pos1, VAR_3->pos2, VAR_6 );
  VAR_7 = 1000.0 / VAR_3->s.pos.trDuration;
  FUNC_2( VAR_6, VAR_7, VAR_3->s.pos.trDelta );
  VAR_3->s.pos.trType = VAR_0;
  break;
 }
 FUNC_0( &VAR_3->s.pos, VAR_2.time, VAR_3->r.currentOrigin );
 FUNC_4( VAR_3 );
}
