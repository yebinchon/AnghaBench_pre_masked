
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {size_t client; } ;
typedef TYPE_3__ bot_state_t ;
struct TYPE_9__ {TYPE_2__* clients; } ;
struct TYPE_6__ {scalar_t__ sessionTeam; } ;
struct TYPE_7__ {TYPE_1__ sess; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_4__ VAR_4 ;
 int VAR_5 ;

int FUNC_0(bot_state_t *VAR_6) {

 if (VAR_6->client < 0 || VAR_6->client >= VAR_0) {
  return VAR_5;
 }

    if (VAR_4.clients[VAR_6->client].sess.sessionTeam == VAR_3) {
  return VAR_3;
 } else if (VAR_4.clients[VAR_6->client].sess.sessionTeam == VAR_1) {
  return VAR_1;
 }

 return VAR_2;
}
