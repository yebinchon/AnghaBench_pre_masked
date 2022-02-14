
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_17__ {int * quic; } ;
struct TYPE_10__ {int base; } ;
struct TYPE_11__ {TYPE_1__ host; } ;
struct TYPE_12__ {TYPE_2__ origin_url; } ;
struct TYPE_16__ {scalar_t__ cb; } ;
struct st_h2o_http3client_conn_t {TYPE_8__ super; TYPE_5__* ctx; int handshake_properties; TYPE_3__ server; TYPE_7__ timeout; int * getaddr_req; } ;
struct sockaddr {int dummy; } ;
typedef int socklen_t ;
typedef int quicly_conn_t ;
struct TYPE_15__ {int master_id; } ;
struct TYPE_14__ {TYPE_4__* http3; } ;
struct TYPE_13__ {TYPE_6__ next_cid; int quic; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct st_h2o_http3client_conn_t*) ;
 int FUNC_2 (TYPE_8__*) ;
 int FUNC_3 (TYPE_8__*,int *) ;
 int FUNC_4 (TYPE_7__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int **,int ,int ,struct sockaddr*,int *,TYPE_6__*,int ,int *,int *) ;

__attribute__((used)) static void FUNC_7(struct st_h2o_http3client_conn_t *VAR_1, struct sockaddr *VAR_2, socklen_t VAR_3)
{
    quicly_conn_t *VAR_4;
    int VAR_5;

    FUNC_0(VAR_1->super.quic == ((void*)0));
    FUNC_0(VAR_1->getaddr_req == ((void*)0));
    FUNC_0(FUNC_4(&VAR_1->timeout));
    FUNC_0(VAR_1->timeout.cb == VAR_0);


    if ((VAR_5 = FUNC_6(&VAR_4, VAR_1->ctx->http3->quic, VAR_1->server.origin_url.host.base, VAR_2, ((void*)0),
                              &VAR_1->ctx->http3->next_cid, FUNC_5(((void*)0), 0), &VAR_1->handshake_properties, ((void*)0))) != 0) {
        VAR_1->super.quic = ((void*)0);
        goto Fail;
    }
    ++VAR_1->ctx->http3->next_cid.master_id;
    if ((VAR_5 = FUNC_3(&VAR_1->super, VAR_4)) != 0)
        goto Fail;

    FUNC_2(&VAR_1->super);

    return;
Fail:
    FUNC_1(VAR_1);
}
