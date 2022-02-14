
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {int maxclients; TYPE_3__* clients; } ;
struct TYPE_6__ {int sessionTeam; scalar_t__ teamLeader; } ;
struct TYPE_5__ {scalar_t__ connected; } ;
struct TYPE_7__ {TYPE_2__ sess; TYPE_1__ pers; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;

int FUNC_0( int VAR_2 ) {
 int VAR_3;

 for ( VAR_3 = 0 ; VAR_3 < VAR_1.maxclients ; VAR_3++ ) {
  if ( VAR_1.clients[VAR_3].pers.connected == VAR_0 ) {
   continue;
  }
  if ( VAR_1.clients[VAR_3].sess.sessionTeam == VAR_2 ) {
   if ( VAR_1.clients[VAR_3].sess.teamLeader )
    return VAR_3;
  }
 }

 return -1;
}
