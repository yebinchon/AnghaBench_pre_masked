
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_8__ ;
typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_16__ {TYPE_5__* client; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_18__ {scalar_t__ integer; } ;
struct TYPE_17__ {int time; } ;
struct TYPE_13__ {int lasthurtcarrier; } ;
struct TYPE_14__ {TYPE_3__ teamState; } ;
struct TYPE_12__ {scalar_t__ sessionTeam; } ;
struct TYPE_11__ {scalar_t__ generic1; scalar_t__* powerups; } ;
struct TYPE_15__ {TYPE_4__ pers; TYPE_2__ sess; TYPE_1__ ps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_8__ VAR_5 ;
 TYPE_7__ VAR_6 ;

void FUNC_0(gentity_t *VAR_7, gentity_t *VAR_8)
{
 int VAR_9;

 if (!VAR_7->client || !VAR_8->client)
  return;

 if (VAR_7->client->sess.sessionTeam == VAR_4)
  VAR_9 = VAR_1;
 else
  VAR_9 = VAR_3;
 if (VAR_7->client->ps.powerups[VAR_9] &&
  VAR_7->client->sess.sessionTeam != VAR_8->client->sess.sessionTeam)
  VAR_8->client->pers.teamState.lasthurtcarrier = VAR_6.time;


 if (VAR_7->client->ps.generic1 &&
  VAR_7->client->sess.sessionTeam != VAR_8->client->sess.sessionTeam)
  VAR_8->client->pers.teamState.lasthurtcarrier = VAR_6.time;
}
