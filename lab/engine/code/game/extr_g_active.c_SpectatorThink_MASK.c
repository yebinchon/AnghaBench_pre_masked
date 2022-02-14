
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_18__ {int buttons; } ;
typedef TYPE_4__ usercmd_t ;
struct TYPE_19__ {int tracemask; int pointcontents; int trace; TYPE_4__ cmd; TYPE_2__* ps; } ;
typedef TYPE_5__ pmove_t ;
typedef int pm ;
struct TYPE_17__ {int origin; } ;
struct TYPE_20__ {TYPE_3__ s; TYPE_7__* client; } ;
typedef TYPE_6__ gentity_t ;
struct TYPE_16__ {int pm_flags; int speed; int origin; int pm_type; } ;
struct TYPE_15__ {scalar_t__ spectatorState; } ;
struct TYPE_21__ {int oldbuttons; int buttons; TYPE_2__ ps; scalar_t__ noclip; TYPE_1__ sess; } ;
typedef TYPE_7__ gclient_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_6__*,int) ;
 int FUNC_1 (TYPE_6__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (TYPE_5__*,int ,int) ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_5 (TYPE_6__*) ;

void FUNC_6( gentity_t *VAR_11, usercmd_t *VAR_12 ) {
 pmove_t VAR_13;
 gclient_t *VAR_14;

 VAR_14 = VAR_11->client;

 if ( VAR_14->sess.spectatorState != VAR_7 || !( VAR_14->ps.pm_flags & VAR_3 ) ) {
  if ( VAR_14->sess.spectatorState == VAR_8 ) {
   if ( VAR_14->noclip ) {
    VAR_14->ps.pm_type = VAR_5;
   } else {
    VAR_14->ps.pm_type = VAR_6;
   }
  } else {
   VAR_14->ps.pm_type = VAR_4;
  }

  VAR_14->ps.speed = 400;


  FUNC_4 (&VAR_13, 0, sizeof(VAR_13));
  VAR_13.ps = &VAR_14->ps;
  VAR_13.cmd = *VAR_12;
  VAR_13.tracemask = VAR_2 & ~VAR_1;
  VAR_13.trace = VAR_10;
  VAR_13.pointcontents = VAR_9;


  FUNC_2 (&VAR_13);

  FUNC_3( VAR_14->ps.origin, VAR_11->s.origin );

  FUNC_1( VAR_11 );
  FUNC_5( VAR_11 );
 }

 VAR_14->oldbuttons = VAR_14->buttons;
 VAR_14->buttons = VAR_12->buttons;


 if ( ( VAR_14->buttons & VAR_0 ) && ! ( VAR_14->oldbuttons & VAR_0 ) ) {
  FUNC_0( VAR_11, 1 );
 }
}
