
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct rp_generator_t {int req_done; scalar_t__ res_done; TYPE_2__* src_req; TYPE_3__* client; } ;
typedef int h2o_iovec_t ;
struct TYPE_7__ {int (* write_req ) (TYPE_3__*,int ,int) ;} ;
typedef TYPE_3__ h2o_httpclient_t ;
struct TYPE_5__ {int * cb; } ;
struct TYPE_6__ {TYPE_1__ write_req; } ;


 int FUNC_0 (struct rp_generator_t*) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_0, h2o_iovec_t VAR_1, int VAR_2)
{
    struct rp_generator_t *VAR_3 = VAR_0;
    h2o_httpclient_t *VAR_4 = VAR_3->client;

    if (VAR_4 == ((void*)0)) {
        return -1;
    }

    if (VAR_2) {
        VAR_3->src_req->write_req.cb = ((void*)0);
        VAR_3->req_done = 1;
        if (VAR_3->res_done)
            FUNC_0(VAR_3);
    }

    return VAR_4->write_req(VAR_4, VAR_1, VAR_2);
}
