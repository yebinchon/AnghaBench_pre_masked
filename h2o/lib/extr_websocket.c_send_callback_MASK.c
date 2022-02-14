
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int wslay_event_context_ptr ;
typedef int uint8_t ;
typedef int ssize_t ;
struct TYPE_4__ {int cnt; TYPE_3__* bufs; } ;
struct TYPE_5__ {TYPE_1__ _write_buf; int ws_ctx; int sock; } ;
typedef TYPE_2__ h2o_websocket_conn_t ;
struct TYPE_6__ {size_t len; int base; } ;
typedef TYPE_3__ h2o_iovec_t ;


 int VAR_0 ;
 int FUNC_0 (size_t) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int const*,size_t) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static ssize_t FUNC_4(wslay_event_context_ptr VAR_1, const uint8_t *VAR_2, size_t VAR_3, int VAR_4, void *VAR_5)
{
    h2o_websocket_conn_t *VAR_6 = VAR_5;
    h2o_iovec_t *VAR_7;


    if (FUNC_1(VAR_6->sock) ||
        VAR_6->_write_buf.cnt == sizeof(VAR_6->_write_buf.bufs) / sizeof(VAR_6->_write_buf.bufs[0])) {
        FUNC_3(VAR_6->ws_ctx, VAR_0);
        return -1;
    }

    VAR_7 = &VAR_6->_write_buf.bufs[VAR_6->_write_buf.cnt];


    VAR_7->base = FUNC_0(VAR_3);
    VAR_7->len = VAR_3;
    FUNC_2(VAR_7->base, VAR_2, VAR_3);
    ++VAR_6->_write_buf.cnt;
    return VAR_3;
}
