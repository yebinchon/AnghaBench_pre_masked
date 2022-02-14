
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int svFlags; } ;
struct TYPE_12__ {TYPE_4__* client; TYPE_2__ r; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_10__ {int* stats; int viewangles; TYPE_5__* clientNum; int pm_flags; void** persistant; } ;
struct TYPE_8__ {int spectatorState; void* sessionTeam; } ;
struct TYPE_11__ {TYPE_3__ ps; TYPE_1__ sess; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 void* VAR_5 ;
 int VAR_6 ;

void FUNC_1( gentity_t *VAR_7 ) {
 VAR_7->client->ps.persistant[ VAR_0 ] = VAR_5;
 VAR_7->client->sess.sessionTeam = VAR_5;
 VAR_7->client->sess.spectatorState = VAR_2;
 VAR_7->client->ps.pm_flags &= ~VAR_1;
 VAR_7->r.svFlags &= ~VAR_4;
 VAR_7->client->ps.clientNum = VAR_7 - VAR_6;

 FUNC_0( VAR_7, VAR_7->client->ps.viewangles );


 if ( VAR_7->client->ps.stats[VAR_3] <= 0 ) {
  VAR_7->client->ps.stats[VAR_3] = 1;
 }
}
