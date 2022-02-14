
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ contents; } ;
struct TYPE_13__ {scalar_t__ event; scalar_t__ loopSound; scalar_t__ modelindex; int eType; scalar_t__ eFlags; int origin; } ;
struct TYPE_15__ {TYPE_5__ r; TYPE_4__ s; TYPE_3__* client; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_16__ {int intermission_angle; int intermission_origin; } ;
struct TYPE_11__ {scalar_t__ eFlags; int powerups; int pm_type; int viewangles; int origin; } ;
struct TYPE_10__ {scalar_t__ spectatorState; } ;
struct TYPE_12__ {TYPE_2__ ps; TYPE_1__ sess; } ;


 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (TYPE_6__*) ;
 int FUNC_2 (int ,int ) ;
 TYPE_7__ VAR_3 ;
 int FUNC_3 (int ,int ,int) ;

void FUNC_4( gentity_t *VAR_4 ) {

 if ( VAR_4->client->sess.spectatorState == VAR_2 ) {
  FUNC_1( VAR_4 );
 }

 FUNC_0();

 FUNC_2( VAR_3.intermission_origin, VAR_4->s.origin );
 FUNC_2( VAR_3.intermission_origin, VAR_4->client->ps.origin );
 FUNC_2 (VAR_3.intermission_angle, VAR_4->client->ps.viewangles);
 VAR_4->client->ps.pm_type = VAR_1;


 FUNC_3( VAR_4->client->ps.powerups, 0, sizeof(VAR_4->client->ps.powerups) );

 VAR_4->client->ps.eFlags = 0;
 VAR_4->s.eFlags = 0;
 VAR_4->s.eType = VAR_0;
 VAR_4->s.modelindex = 0;
 VAR_4->s.loopSound = 0;
 VAR_4->s.event = 0;
 VAR_4->r.contents = 0;
}
