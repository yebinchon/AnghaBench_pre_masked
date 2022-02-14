
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int event; int eventParm; int number; } ;
struct TYPE_10__ {int eventTime; TYPE_3__ s; TYPE_2__* client; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_11__ {int time; } ;
struct TYPE_7__ {int externalEvent; int externalEventParm; int externalEventTime; } ;
struct TYPE_8__ {TYPE_1__ ps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 TYPE_5__ VAR_2 ;

void FUNC_1( gentity_t *VAR_3, int VAR_4, int VAR_5 ) {
 int VAR_6;

 if ( !VAR_4 ) {
  FUNC_0( "G_AddEvent: zero event added for entity %i\n", VAR_3->s.number );
  return;
 }


 if ( VAR_3->client ) {
  VAR_6 = VAR_3->client->ps.externalEvent & VAR_1;
  VAR_6 = ( VAR_6 + VAR_0 ) & VAR_1;
  VAR_3->client->ps.externalEvent = VAR_4 | VAR_6;
  VAR_3->client->ps.externalEventParm = VAR_5;
  VAR_3->client->ps.externalEventTime = VAR_2.time;
 } else {
  VAR_6 = VAR_3->s.event & VAR_1;
  VAR_6 = ( VAR_6 + VAR_0 ) & VAR_1;
  VAR_3->s.event = VAR_4 | VAR_6;
  VAR_3->s.eventParm = VAR_5;
 }
 VAR_3->eventTime = VAR_2.time;
}
