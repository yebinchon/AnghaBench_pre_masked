
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int entityEventSequence; int eventSequence; int* events; int externalEvent; int clientNum; int origin; } ;
typedef TYPE_2__ playerState_t ;
struct TYPE_8__ {int singleClient; int svFlags; } ;
struct TYPE_11__ {int number; int otherEntityNum; int eFlags; scalar_t__ eType; } ;
struct TYPE_10__ {TYPE_1__ r; TYPE_7__ s; } ;
typedef TYPE_3__ gentity_t ;


 int FUNC_0 (TYPE_2__*,TYPE_7__*,int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_3__* FUNC_1 (int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_2( playerState_t *VAR_5 ) {
 gentity_t *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;


 if ( VAR_5->entityEventSequence < VAR_5->eventSequence ) {


  VAR_8 = VAR_5->entityEventSequence & (VAR_2-1);
  VAR_7 = VAR_5->events[ VAR_8 ] | ( ( VAR_5->entityEventSequence & 3 ) << 8 );

  VAR_9 = VAR_5->externalEvent;
  VAR_5->externalEvent = 0;

  VAR_6 = FUNC_1( VAR_5->origin, VAR_7 );
  VAR_10 = VAR_6->s.number;
  FUNC_0( VAR_5, &VAR_6->s, VAR_4 );
  VAR_6->s.number = VAR_10;
  VAR_6->s.eType = VAR_1 + VAR_7;
  VAR_6->s.eFlags |= VAR_0;
  VAR_6->s.otherEntityNum = VAR_5->clientNum;

  VAR_6->r.svFlags |= VAR_3;
  VAR_6->r.singleClient = VAR_5->clientNum;

  VAR_5->externalEvent = VAR_9;
 }
}
