
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int maxclients; TYPE_2__* clients; } ;
struct TYPE_4__ {int sessionTeam; } ;
struct TYPE_5__ {TYPE_1__ sess; } ;


 TYPE_3__ VAR_0 ;
 int FUNC_0 (int,char*) ;

void FUNC_1(int VAR_1, char *VAR_2) {
 int VAR_3;

 for ( VAR_3 = 0 ; VAR_3 < VAR_0.maxclients ; VAR_3++ ) {
  if (VAR_0.clients[VAR_3].sess.sessionTeam != VAR_1)
   continue;
  FUNC_0( VAR_3, VAR_2 );
 }
}
