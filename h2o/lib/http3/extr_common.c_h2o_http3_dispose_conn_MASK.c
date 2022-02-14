
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int khiter_t ;
struct TYPE_7__ {int * enc; int * dec; } ;
struct TYPE_8__ {int _timeout; int * quic; TYPE_5__* ctx; TYPE_1__ qpack; } ;
typedef TYPE_2__ h2o_http3_conn_t ;
struct TYPE_10__ {int conns_by_id; } ;
struct TYPE_9__ {int master_id; } ;


 int FUNC_0 (TYPE_5__*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int *) ;
 TYPE_3__* FUNC_8 (int *) ;

void FUNC_9(h2o_http3_conn_t *VAR_0)
{
    if (VAR_0->qpack.dec != ((void*)0))
        FUNC_1(VAR_0->qpack.dec);
    if (VAR_0->qpack.enc != ((void*)0))
        FUNC_2(VAR_0->qpack.enc);
    if (VAR_0->quic != ((void*)0)) {
        khiter_t VAR_1;

        if ((VAR_1 = FUNC_6(VAR_0->ctx->conns_by_id, FUNC_8(VAR_0->quic)->master_id)) !=
            FUNC_5(VAR_0->ctx->conns_by_id))
            FUNC_4(VAR_0->ctx->conns_by_id, VAR_1);
        FUNC_0(VAR_0->ctx, VAR_0);
        FUNC_7(VAR_0->quic);
    }
    FUNC_3(&VAR_0->_timeout);
}
