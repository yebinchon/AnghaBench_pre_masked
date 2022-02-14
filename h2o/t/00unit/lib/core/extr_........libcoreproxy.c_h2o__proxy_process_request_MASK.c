
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct rp_generator_t {int client; } ;
typedef int h2o_url_t ;
struct TYPE_12__ {int pool; int authority; int scheme; TYPE_3__* conn; TYPE_5__* overrides; } ;
typedef TYPE_4__ h2o_req_t ;
struct TYPE_13__ {int proxy_preserve_host; int * connpool; } ;
typedef TYPE_5__ h2o_req_overrides_t ;
typedef int h2o_httpclient_ctx_t ;
typedef int h2o_httpclient_connection_pool_t ;
struct TYPE_11__ {TYPE_2__* ctx; } ;
struct TYPE_9__ {int connpool; } ;
struct TYPE_10__ {TYPE_1__ proxy; } ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int *,int *,struct rp_generator_t*,int *,int *,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ,int ) ;
 int VAR_0 ;
 struct rp_generator_t* FUNC_5 (TYPE_4__*) ;

void FUNC_6(h2o_req_t *VAR_1)
{
    h2o_req_overrides_t *VAR_2 = VAR_1->overrides;
    h2o_httpclient_ctx_t *VAR_3 = FUNC_1(VAR_1);
    h2o_url_t VAR_4, *VAR_5 = &VAR_4;

    h2o_httpclient_connection_pool_t *VAR_6 = &VAR_1->conn->ctx->proxy.connpool;
    if (VAR_2 != ((void*)0) && VAR_2->connpool != ((void*)0)) {
        VAR_6 = VAR_2->connpool;
        if (!VAR_2->proxy_preserve_host)
            VAR_5 = ((void*)0);
    }
    if (VAR_5 == &VAR_4)
        FUNC_4(&VAR_4, VAR_1->scheme, VAR_1->authority, FUNC_3(FUNC_0("/")));

    struct rp_generator_t *VAR_7 = FUNC_5(VAR_1);
    FUNC_2(&VAR_7->client, &VAR_1->pool, VAR_7, VAR_3, VAR_6, VAR_5, VAR_0);
}
