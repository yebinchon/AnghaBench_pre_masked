
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct TYPE_17__ {int len; int base; } ;
struct TYPE_13__ {int * base; } ;
struct TYPE_18__ {int query_at; TYPE_4__ path; TYPE_12__ authority; int method; TYPE_3__* scheme; } ;
struct TYPE_19__ {int query_at; TYPE_5__ input; int norm_indexes; int pool; int path_normalized; TYPE_4__ path; TYPE_12__ authority; int method; TYPE_3__* scheme; TYPE_1__* conn; int processed_at; } ;
typedef TYPE_6__ h2o_req_t ;
struct TYPE_15__ {TYPE_12__ hostport; } ;
struct TYPE_20__ {TYPE_2__ authority; } ;
typedef TYPE_7__ h2o_hostconf_t ;
typedef int h2o_context_t ;
struct TYPE_16__ {int default_port; } ;
struct TYPE_14__ {TYPE_7__** hosts; int * ctx; } ;


 TYPE_7__* FUNC_0 (TYPE_7__**,TYPE_12__,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ,int ,int *,int *) ;

h2o_hostconf_t *FUNC_3(h2o_req_t *VAR_0)
{
    h2o_context_t *VAR_1 = VAR_0->conn->ctx;
    h2o_hostconf_t *VAR_2;

    VAR_0->processed_at = FUNC_1(VAR_1, &VAR_0->pool);


    if (VAR_0->input.authority.base != ((void*)0)) {
        if (VAR_0->conn->hosts[1] == ((void*)0) ||
            (VAR_2 = FUNC_0(VAR_0->conn->hosts, VAR_0->input.authority, VAR_0->input.scheme->default_port)) == ((void*)0))
            VAR_2 = *VAR_0->conn->hosts;
    } else {

        VAR_2 = *VAR_0->conn->hosts;
        VAR_0->input.authority = VAR_2->authority.hostport;
    }

    VAR_0->scheme = VAR_0->input.scheme;
    VAR_0->method = VAR_0->input.method;
    VAR_0->authority = VAR_0->input.authority;
    VAR_0->path = VAR_0->input.path;
    VAR_0->path_normalized =
        FUNC_2(&VAR_0->pool, VAR_0->input.path.base, VAR_0->input.path.len, &VAR_0->query_at, &VAR_0->norm_indexes);
    VAR_0->input.query_at = VAR_0->query_at;

    return VAR_2;
}
