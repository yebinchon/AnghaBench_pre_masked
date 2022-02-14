
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_8__ ;
typedef struct TYPE_22__ TYPE_7__ ;
typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_12__ ;


struct TYPE_22__ {scalar_t__ member_1; int member_0; } ;
typedef TYPE_7__ h2o_iovec_t ;
struct TYPE_20__ {scalar_t__ open; } ;
struct TYPE_19__ {scalar_t__ open; } ;
struct TYPE_21__ {TYPE_5__ push; TYPE_4__ pull; } ;
struct TYPE_18__ {TYPE_2__* ctx; } ;
struct TYPE_16__ {TYPE_12__* buf; TYPE_12__* buf_in_flight; } ;
struct TYPE_23__ {int state; TYPE_6__ num_streams; int _timeout_entry; TYPE_3__ super; TYPE_1__ _write; int sock; int scheduler; } ;
typedef TYPE_8__ h2o_http2_conn_t ;
struct TYPE_17__ {int loop; } ;
struct TYPE_15__ {scalar_t__ size; int bytes; } ;





 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_8__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_12__**,int *) ;
 scalar_t__ FUNC_3 (TYPE_8__*) ;
 int FUNC_4 (int *,int ,TYPE_8__*) ;
 int VAR_2 ;
 int FUNC_5 (int ,TYPE_7__*,int,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int FUNC_7 (int *) ;
 int VAR_3 ;

void FUNC_8(h2o_http2_conn_t *VAR_4)
{
    FUNC_0(VAR_4->_write.buf_in_flight == ((void*)0));


    if (VAR_4->state < 129 && FUNC_3(VAR_4) > 0)
        FUNC_4(&VAR_4->scheduler, VAR_1, VAR_4);

    if (VAR_4->_write.buf->size != 0) {

        h2o_iovec_t VAR_5 = {VAR_4->_write.buf->bytes, VAR_4->_write.buf->size};
        FUNC_5(VAR_4->sock, &VAR_5, 1, VAR_3);
        VAR_4->_write.buf_in_flight = VAR_4->_write.buf;
        FUNC_2(&VAR_4->_write.buf, &VAR_2);
        FUNC_7(&VAR_4->_timeout_entry);
        FUNC_6(VAR_4->super.ctx->loop, VAR_0, &VAR_4->_timeout_entry);
    }


    switch (VAR_4->state) {
    case 128:
        break;
    case 130:
        if (VAR_4->num_streams.pull.open + VAR_4->num_streams.push.open != 0)
            break;
        VAR_4->state = 129;

    case 129:
        FUNC_1(VAR_4);
        break;
    }
}
