
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ws_ctx; int * sock; } ;
typedef TYPE_1__ h2o_websocket_conn_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

void FUNC_4(h2o_websocket_conn_t *VAR_0)
{
    if (VAR_0->sock != ((void*)0))
        FUNC_2(VAR_0->sock);
    FUNC_1(VAR_0);
    FUNC_3(VAR_0->ws_ctx);
    FUNC_0(VAR_0);
}
