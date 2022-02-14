
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct wslay_event_on_msg_recv_arg {int msg_length; int msg; int opcode; } ;
struct wslay_event_msg {int member_2; int member_1; int member_0; } ;
struct TYPE_4__ {int ws_ctx; } ;
typedef TYPE_1__ h2o_websocket_conn_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,struct wslay_event_msg*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(h2o_websocket_conn_t *VAR_0, const struct wslay_event_on_msg_recv_arg *VAR_1)
{
    if (VAR_1 == ((void*)0)) {
        FUNC_0(VAR_0);
        return;
    }

    if (!FUNC_2(VAR_1->opcode)) {
        struct wslay_event_msg VAR_2 = {VAR_1->opcode, VAR_1->msg, VAR_1->msg_length};
        FUNC_1(VAR_0->ws_ctx, &VAR_2);
    }
}
