
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ bytes_written; } ;
struct st_h2o_http3client_req_t {TYPE_2__* conn; TYPE_4__* quic; TYPE_1__ proceed_req; } ;
struct TYPE_11__ {scalar_t__ len; } ;
typedef TYPE_3__ h2o_iovec_t ;
typedef int h2o_httpclient_t ;
struct TYPE_13__ {scalar_t__ size_inflight; } ;
struct TYPE_12__ {TYPE_5__ sendstate; } ;
struct TYPE_10__ {int super; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (struct st_h2o_http3client_req_t*,TYPE_3__) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*,scalar_t__) ;
 int FUNC_5 (TYPE_4__*,int) ;

__attribute__((used)) static int FUNC_6(h2o_httpclient_t *VAR_0, h2o_iovec_t VAR_1, int VAR_2)
{
    struct st_h2o_http3client_req_t *VAR_3 = (void *)VAR_0;

    FUNC_0(VAR_3->quic != ((void*)0) && FUNC_3(&VAR_3->quic->sendstate));
    FUNC_0(VAR_3->proceed_req.bytes_written == 0);

    size_t VAR_4 = FUNC_1(VAR_3, VAR_1);



    if (VAR_2)
        FUNC_4(&VAR_3->quic->sendstate, VAR_3->quic->sendstate.size_inflight + VAR_4);

    VAR_3->proceed_req.bytes_written = VAR_1.len;
    FUNC_5(VAR_3->quic, 1);
    FUNC_2(&VAR_3->conn->super);
    return 0;
}
