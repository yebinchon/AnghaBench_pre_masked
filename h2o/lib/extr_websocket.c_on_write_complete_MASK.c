
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ cnt; } ;
struct TYPE_9__ {TYPE_1__ _write_buf; } ;
typedef TYPE_2__ h2o_websocket_conn_t ;
struct TYPE_10__ {TYPE_2__* data; } ;
typedef TYPE_3__ h2o_socket_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(h2o_socket_t *VAR_0, const char *VAR_1)
{
    h2o_websocket_conn_t *VAR_2 = VAR_0->data;

    if (VAR_1 != ((void*)0)) {
        FUNC_3(VAR_2);
        return;
    }
    FUNC_0(VAR_2->_write_buf.cnt > 0);
    FUNC_1(VAR_2);
    VAR_2->_write_buf.cnt = 0;

    FUNC_2(VAR_2);
}
