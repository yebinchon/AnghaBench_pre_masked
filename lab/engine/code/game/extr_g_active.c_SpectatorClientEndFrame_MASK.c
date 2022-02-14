
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_11__ {TYPE_5__* client; } ;
typedef TYPE_4__ gentity_t ;
struct TYPE_10__ {int eFlags; int pm_flags; } ;
struct TYPE_9__ {scalar_t__ spectatorState; int spectatorClient; scalar_t__ sessionTeam; } ;
struct TYPE_8__ {scalar_t__ connected; } ;
struct TYPE_12__ {TYPE_3__ ps; TYPE_2__ sess; TYPE_1__ pers; } ;
typedef TYPE_5__ gclient_t ;
struct TYPE_13__ {int follow1; int follow2; TYPE_5__* clients; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 TYPE_6__ VAR_9 ;

void FUNC_1( gentity_t *VAR_10 ) {
 gclient_t *VAR_11;


 if ( VAR_10->client->sess.spectatorState == VAR_5 ) {
  int VAR_12, VAR_13;

  VAR_12 = VAR_10->client->sess.spectatorClient;


  if ( VAR_12 == -1 ) {
   VAR_12 = VAR_9.follow1;
  } else if ( VAR_12 == -2 ) {
   VAR_12 = VAR_9.follow2;
  }
  if ( VAR_12 >= 0 ) {
   VAR_11 = &VAR_9.clients[ VAR_12 ];
   if ( VAR_11->pers.connected == VAR_0 && VAR_11->sess.sessionTeam != VAR_8 ) {
    VAR_13 = (VAR_11->ps.eFlags & ~(VAR_2 | VAR_1)) | (VAR_10->client->ps.eFlags & (VAR_2 | VAR_1));
    VAR_10->client->ps = VAR_11->ps;
    VAR_10->client->ps.pm_flags |= VAR_3;
    VAR_10->client->ps.eFlags = VAR_13;
    return;
   }
  }

  if ( VAR_10->client->ps.pm_flags & VAR_3 ) {

   if ( VAR_10->client->sess.spectatorClient >= 0 ) {
    VAR_10->client->sess.spectatorState = VAR_6;
   }

   FUNC_0( VAR_10->client - VAR_9.clients );
  }
 }

 if ( VAR_10->client->sess.spectatorState == VAR_7 ) {
  VAR_10->client->ps.pm_flags |= VAR_4;
 } else {
  VAR_10->client->ps.pm_flags &= ~VAR_4;
 }
}
