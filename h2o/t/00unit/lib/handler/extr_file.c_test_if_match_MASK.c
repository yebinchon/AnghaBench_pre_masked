
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_27__ TYPE_9__ ;
typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_15__ ;
typedef struct TYPE_17__ TYPE_14__ ;


typedef int ssize_t ;
struct TYPE_18__ {TYPE_2__* entries; } ;
struct TYPE_23__ {int status; TYPE_15__ headers; } ;
struct TYPE_22__ {void* path; void* method; } ;
struct TYPE_24__ {TYPE_5__ res; int headers; int pool; TYPE_4__ input; } ;
struct TYPE_26__ {TYPE_7__* body; TYPE_6__ req; } ;
typedef TYPE_8__ h2o_loopback_conn_t ;
struct TYPE_27__ {int base; int len; int * member_0; } ;
typedef TYPE_9__ h2o_iovec_t ;
struct TYPE_25__ {scalar_t__ size; } ;
struct TYPE_21__ {int hosts; } ;
struct TYPE_19__ {int len; int base; } ;
struct TYPE_20__ {TYPE_1__ value; } ;
struct TYPE_17__ {TYPE_3__* globalconf; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 TYPE_14__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int ,int *,int ,int ) ;
 int FUNC_3 (TYPE_15__*,int ,int) ;
 void* FUNC_4 (int ) ;
 TYPE_8__* FUNC_5 (TYPE_14__*,int ) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (TYPE_8__*) ;
 TYPE_9__ FUNC_8 (int *,int ,int ) ;
 int FUNC_9 (int) ;

__attribute__((used)) static void FUNC_10(void)
{
    h2o_iovec_t VAR_3 = {((void*)0)};

    {
        h2o_loopback_conn_t *VAR_4 = FUNC_5(&VAR_2, VAR_2.globalconf->hosts);
        ssize_t VAR_5;
        VAR_4->req.input.method = FUNC_4(FUNC_0("GET"));
        VAR_4->req.input.path = FUNC_4(FUNC_0("/"));
        FUNC_7(VAR_4);
        FUNC_9(VAR_4->req.res.status == 200);
        if ((VAR_5 = FUNC_3(&VAR_4->req.res.headers, VAR_0, -1)) == -1) {
            FUNC_9(0);
            return;
        }
        VAR_3 = FUNC_8(((void*)0), VAR_4->req.res.headers.entries[VAR_5].value.base,
                          VAR_4->req.res.headers.entries[VAR_5].value.len);
        FUNC_6(VAR_4);
    }

    {
        h2o_loopback_conn_t *VAR_6 = FUNC_5(&VAR_2, VAR_2.globalconf->hosts);
        VAR_6->req.input.method = FUNC_4(FUNC_0("GET"));
        VAR_6->req.input.path = FUNC_4(FUNC_0("/"));
        FUNC_2(&VAR_6->req.pool, &VAR_6->req.headers, VAR_1, ((void*)0), VAR_3.base, VAR_3.len);
        FUNC_7(VAR_6);
        FUNC_9(VAR_6->req.res.status == 304);
        FUNC_9(VAR_6->body->size == 0);
        FUNC_6(VAR_6);
    }

    FUNC_1(VAR_3.base);
}
