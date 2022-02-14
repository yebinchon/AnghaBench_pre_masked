
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_21__ {int cb; } ;
struct TYPE_18__ {TYPE_4__* ctx; } ;
struct TYPE_14__ {scalar_t__ blocked_by_server; } ;
struct TYPE_19__ {int * buf_in_flight; } ;
struct TYPE_20__ {TYPE_9__ _timeout_entry; TYPE_5__ super; TYPE_1__ num_streams; TYPE_12__* sock; TYPE_6__ _write; } ;
typedef TYPE_7__ h2o_http2_conn_t ;
struct TYPE_17__ {TYPE_3__* globalconf; int loop; } ;
struct TYPE_15__ {int idle_timeout; } ;
struct TYPE_16__ {TYPE_2__ http2; } ;
struct TYPE_13__ {int * ssl; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_12__*) ;
 int FUNC_2 (TYPE_9__*) ;
 int FUNC_3 (int ,int ,TYPE_9__*) ;
 int FUNC_4 (TYPE_9__*) ;
 int VAR_0 ;

__attribute__((used)) static void FUNC_5(h2o_http2_conn_t *VAR_1)
{

    if (VAR_1->_write.buf_in_flight != ((void*)0)) {
        FUNC_0(FUNC_2(&VAR_1->_timeout_entry));
        return;
    }

    FUNC_4(&VAR_1->_timeout_entry);


    if (VAR_1->sock->ssl != ((void*)0) && FUNC_1(VAR_1->sock))
        goto SetTimeout;


    if (VAR_1->num_streams.blocked_by_server != 0)
        return;

SetTimeout:
    VAR_1->_timeout_entry.cb = VAR_0;
    FUNC_3(VAR_1->super.ctx->loop, VAR_1->super.ctx->globalconf->http2.idle_timeout, &VAR_1->_timeout_entry);
}
