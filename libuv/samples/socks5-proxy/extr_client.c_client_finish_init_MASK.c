
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {int loop; int idle_timeout; } ;
typedef TYPE_2__ server_ctx ;
struct TYPE_8__ {int tcp; } ;
struct TYPE_10__ {int timer_handle; TYPE_1__ handle; int idle_timeout; void* wrstate; void* rdstate; scalar_t__ result; TYPE_4__* client; } ;
typedef TYPE_3__ conn ;
struct TYPE_11__ {TYPE_2__* sx; TYPE_3__ outgoing; TYPE_3__ incoming; int parser; int state; } ;
typedef TYPE_4__ client_ctx ;


 int FUNC_0 (int) ;
 void* VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,int *) ;
 scalar_t__ FUNC_4 (int ,int *) ;

void FUNC_5(server_ctx *VAR_2, client_ctx *VAR_3) {
  conn *VAR_4;
  conn *VAR_5;

  VAR_3->sx = VAR_2;
  VAR_3->state = VAR_1;
  FUNC_2(&VAR_3->parser);

  VAR_4 = &VAR_3->incoming;
  VAR_4->client = VAR_3;
  VAR_4->result = 0;
  VAR_4->rdstate = VAR_0;
  VAR_4->wrstate = VAR_0;
  VAR_4->idle_timeout = VAR_2->idle_timeout;
  FUNC_0(0 == FUNC_4(VAR_2->loop, &VAR_4->timer_handle));

  VAR_5 = &VAR_3->outgoing;
  VAR_5->client = VAR_3;
  VAR_5->result = 0;
  VAR_5->rdstate = VAR_0;
  VAR_5->wrstate = VAR_0;
  VAR_5->idle_timeout = VAR_2->idle_timeout;
  FUNC_0(0 == FUNC_3(VAR_3->sx->loop, &VAR_5->handle.tcp));
  FUNC_0(0 == FUNC_4(VAR_3->sx->loop, &VAR_5->timer_handle));


  FUNC_1(VAR_4);
}
