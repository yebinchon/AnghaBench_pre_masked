
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ team_t ;
struct TYPE_8__ {int maxclients; TYPE_3__* clients; } ;
struct TYPE_6__ {scalar_t__ sessionTeam; } ;
struct TYPE_5__ {scalar_t__ connected; } ;
struct TYPE_7__ {TYPE_2__ sess; TYPE_1__ pers; } ;


 scalar_t__ VAR_0 ;
 TYPE_4__ VAR_1 ;

int FUNC_0( int VAR_2, team_t VAR_3 ) {
 int VAR_4;
 int VAR_5 = 0;

 for ( VAR_4 = 0 ; VAR_4 < VAR_1.maxclients ; VAR_4++ ) {
  if ( VAR_4 == VAR_2 ) {
   continue;
  }
  if ( VAR_1.clients[VAR_4].pers.connected == VAR_0 ) {
   continue;
  }
  if ( VAR_1.clients[VAR_4].sess.sessionTeam == VAR_3 ) {
   VAR_5++;
  }
 }

 return VAR_5;
}
