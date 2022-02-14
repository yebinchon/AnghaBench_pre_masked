
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int client; } ;
typedef TYPE_3__ bot_state_t ;
struct TYPE_9__ {TYPE_2__* clients; } ;
struct TYPE_6__ {scalar_t__ sessionTeam; } ;
struct TYPE_7__ {TYPE_1__ sess; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_0(bot_state_t *VAR_6, int VAR_7) {

 if (VAR_6->client < 0 || VAR_6->client >= VAR_1) {
  return VAR_4;
 }

 if (VAR_7 < 0 || VAR_7 >= VAR_1) {
  return VAR_4;
 }

 if (VAR_2 >= VAR_0) {
  if (VAR_3.clients[VAR_6->client].sess.sessionTeam == VAR_3.clients[VAR_7].sess.sessionTeam) return VAR_5;
 }

 return VAR_4;
}
