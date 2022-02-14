
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


struct TYPE_10__ {int svFlags; } ;
struct TYPE_14__ {TYPE_4__* client; TYPE_1__ r; } ;
typedef TYPE_5__ gentity_t ;
struct TYPE_16__ {int integer; } ;
struct TYPE_15__ {int time; } ;
struct TYPE_11__ {int serverTime; } ;
struct TYPE_12__ {TYPE_2__ cmd; } ;
struct TYPE_13__ {TYPE_3__ pers; } ;


 int FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 TYPE_7__ VAR_1 ;
 TYPE_6__ VAR_2 ;

void FUNC_1( gentity_t *VAR_3 ) {
 if ( !(VAR_3->r.svFlags & VAR_0) && !VAR_1.integer ) {
  return;
 }
 VAR_3->client->pers.cmd.serverTime = VAR_2.time;
 FUNC_0( VAR_3 );
}
