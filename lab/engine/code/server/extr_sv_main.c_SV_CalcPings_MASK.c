
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {int ping; } ;
typedef TYPE_4__ playerState_t ;
struct TYPE_13__ {scalar_t__ state; int ping; TYPE_3__* frames; TYPE_2__* gentity; } ;
typedef TYPE_5__ client_t ;
struct TYPE_15__ {int integer; } ;
struct TYPE_14__ {TYPE_5__* clients; } ;
struct TYPE_11__ {scalar_t__ messageAcked; int messageSent; } ;
struct TYPE_9__ {int svFlags; } ;
struct TYPE_10__ {TYPE_1__ r; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_4__* FUNC_0 (int) ;
 TYPE_7__* VAR_3 ;
 TYPE_6__ VAR_4 ;

__attribute__((used)) static void FUNC_1( void ) {
 int VAR_5, VAR_6;
 client_t *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;
 playerState_t *VAR_11;

 for (VAR_5=0 ; VAR_5 < VAR_3->integer ; VAR_5++) {
  VAR_7 = &VAR_4.clients[VAR_5];
  if ( VAR_7->state != VAR_0 ) {
   VAR_7->ping = 999;
   continue;
  }
  if ( !VAR_7->gentity ) {
   VAR_7->ping = 999;
   continue;
  }
  if ( VAR_7->gentity->r.svFlags & VAR_2 ) {
   VAR_7->ping = 0;
   continue;
  }

  VAR_8 = 0;
  VAR_9 = 0;
  for ( VAR_6 = 0 ; VAR_6 < VAR_1 ; VAR_6++ ) {
   if ( VAR_7->frames[VAR_6].messageAcked <= 0 ) {
    continue;
   }
   VAR_10 = VAR_7->frames[VAR_6].messageAcked - VAR_7->frames[VAR_6].messageSent;
   VAR_9++;
   VAR_8 += VAR_10;
  }
  if (!VAR_9) {
   VAR_7->ping = 999;
  } else {
   VAR_7->ping = VAR_8/VAR_9;
   if ( VAR_7->ping > 999 ) {
    VAR_7->ping = 999;
   }
  }


  VAR_11 = FUNC_0( VAR_5 );
  VAR_11->ping = VAR_7->ping;
 }
}
