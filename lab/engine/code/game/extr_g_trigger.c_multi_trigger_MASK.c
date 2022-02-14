
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {int spawnflags; int wait; int random; int think; scalar_t__ nextthink; scalar_t__ touch; struct TYPE_11__* activator; TYPE_2__* client; } ;
typedef TYPE_3__ gentity_t ;
struct TYPE_12__ {scalar_t__ time; } ;
struct TYPE_9__ {scalar_t__ sessionTeam; } ;
struct TYPE_10__ {TYPE_1__ sess; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,TYPE_3__*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 () ;
 TYPE_6__ VAR_4 ;
 int VAR_5 ;

void FUNC_2( gentity_t *VAR_6, gentity_t *VAR_7 ) {
 VAR_6->activator = VAR_7;
 if ( VAR_6->nextthink ) {
  return;
 }

 if ( VAR_7->client ) {
  if ( ( VAR_6->spawnflags & 1 ) &&
   VAR_7->client->sess.sessionTeam != VAR_3 ) {
   return;
  }
  if ( ( VAR_6->spawnflags & 2 ) &&
   VAR_7->client->sess.sessionTeam != VAR_2 ) {
   return;
  }
 }

 FUNC_0 (VAR_6, VAR_6->activator);

 if ( VAR_6->wait > 0 ) {
  VAR_6->think = VAR_5;
  VAR_6->nextthink = VAR_4.time + ( VAR_6->wait + VAR_6->random * FUNC_1() ) * 1000;
 } else {


  VAR_6->touch = 0;
  VAR_6->nextthink = VAR_4.time + VAR_0;
  VAR_6->think = VAR_1;
 }
}
