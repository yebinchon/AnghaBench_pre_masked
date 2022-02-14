
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sessionTeam; scalar_t__ spectatorNum; } ;
struct TYPE_6__ {scalar_t__ connected; } ;
struct TYPE_8__ {TYPE_2__ sess; TYPE_1__ pers; } ;
typedef TYPE_3__ gclient_t ;
struct TYPE_9__ {int maxclients; TYPE_3__* clients; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_4__ VAR_2 ;

void FUNC_0(gclient_t *VAR_3)
{
 int VAR_4;
 gclient_t *VAR_5;

 for(VAR_4 = 0; VAR_4 < VAR_2.maxclients; VAR_4++)
 {
  VAR_5 = &VAR_2.clients[VAR_4];

  if(VAR_5->pers.connected != VAR_0)
  {
   if(VAR_5 == VAR_3)
    VAR_5->sess.spectatorNum = 0;
   else if(VAR_5->sess.sessionTeam == VAR_1)
    VAR_5->sess.spectatorNum++;
  }
 }
}
