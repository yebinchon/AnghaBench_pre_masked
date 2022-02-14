
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wslay_event_context_ptr ;
struct wslay_event_on_msg_recv_arg {int dummy; } ;
struct TYPE_3__ {int (* cb ) (TYPE_1__*,struct wslay_event_on_msg_recv_arg const*) ;} ;
typedef TYPE_1__ h2o_websocket_conn_t ;


 int FUNC_0 (TYPE_1__*,struct wslay_event_on_msg_recv_arg const*) ;

__attribute__((used)) static void FUNC_1(wslay_event_context_ptr VAR_0, const struct wslay_event_on_msg_recv_arg *VAR_1, void *VAR_2)
{
    h2o_websocket_conn_t *VAR_3 = VAR_2;
    (*VAR_3->cb)(VAR_3, VAR_1);
}
