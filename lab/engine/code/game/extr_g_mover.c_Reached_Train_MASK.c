
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int vec3_t ;
struct TYPE_10__ {float trDuration; int trType; } ;
struct TYPE_11__ {TYPE_2__ pos; int loopSound; int origin; } ;
struct TYPE_9__ {int svFlags; } ;
struct TYPE_12__ {float speed; int wait; TYPE_3__ s; int think; scalar_t__ nextthink; int soundLoop; TYPE_1__ r; int pos1; int pos2; struct TYPE_12__* nextTrain; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_13__ {scalar_t__ time; } ;


 int FUNC_0 (TYPE_4__*,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_4__*,int ,scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ) ;
 float FUNC_3 (int ) ;
 int FUNC_4 (int ,int ,int ) ;
 TYPE_5__ VAR_4 ;

void FUNC_5( gentity_t *VAR_5 ) {
 gentity_t *VAR_6;
 float VAR_7;
 vec3_t VAR_8;
 float VAR_9;


 VAR_6 = VAR_5->nextTrain;
 if ( !VAR_6 || !VAR_6->nextTrain ) {
  return;
 }


 FUNC_0( VAR_6, ((void*)0) );


 VAR_5->nextTrain = VAR_6->nextTrain;
 FUNC_2( VAR_6->s.origin, VAR_5->pos1 );
 FUNC_2( VAR_6->nextTrain->s.origin, VAR_5->pos2 );


 if ( VAR_6->speed ) {
  VAR_7 = VAR_6->speed;
 } else {

  VAR_7 = VAR_5->speed;
 }
 if ( VAR_7 < 1 ) {
  VAR_7 = 1;
 }


 FUNC_4( VAR_5->pos2, VAR_5->pos1, VAR_8 );
 VAR_9 = FUNC_3( VAR_8 );

 VAR_5->s.pos.trDuration = VAR_9 * 1000 / VAR_7;


 VAR_5->r.svFlags &= ~VAR_1;


 if(VAR_5->s.pos.trDuration<1) {
  VAR_5->s.pos.trDuration=1;


  VAR_5->r.svFlags |= VAR_1;
 }


 VAR_5->s.loopSound = VAR_6->soundLoop;


 FUNC_1( VAR_5, VAR_0, VAR_4.time );


 if ( VAR_6->wait ) {
  VAR_5->nextthink = VAR_4.time + VAR_6->wait * 1000;
  VAR_5->think = VAR_3;
  VAR_5->s.pos.trType = VAR_2;
 }
}
