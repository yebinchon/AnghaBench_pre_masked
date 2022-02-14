
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_13__ ;
typedef struct TYPE_15__ TYPE_12__ ;


typedef int ssize_t ;
struct TYPE_16__ {TYPE_2__* entries; } ;
struct TYPE_22__ {int status; TYPE_13__ headers; } ;
struct TYPE_20__ {void* path; void* method; } ;
struct TYPE_23__ {TYPE_6__ res; int headers; int pool; TYPE_4__ input; } ;
struct TYPE_24__ {TYPE_7__ req; TYPE_5__* body; } ;
typedef TYPE_8__ h2o_loopback_conn_t ;
struct TYPE_21__ {scalar_t__ size; } ;
struct TYPE_19__ {int hosts; } ;
struct TYPE_17__ {int len; int base; } ;
struct TYPE_18__ {TYPE_1__ value; } ;
struct TYPE_15__ {TYPE_3__* globalconf; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_12__ VAR_4 ;
 int FUNC_1 (int *,int *,int ,int *,char*,...) ;
 int FUNC_2 (TYPE_13__*,int ,int) ;
 void* FUNC_3 (int ) ;
 TYPE_8__* FUNC_4 (TYPE_12__*,int ) ;
 int FUNC_5 (TYPE_8__*) ;
 int FUNC_6 (TYPE_8__*) ;
 int FUNC_7 (char*,int ,int) ;
 int FUNC_8 (int) ;

__attribute__((used)) static void FUNC_9(void)
{
    char VAR_5[VAR_0 + 1];

    {
        h2o_loopback_conn_t *VAR_6 = FUNC_4(&VAR_4, VAR_4.globalconf->hosts);
        ssize_t VAR_7;
        VAR_6->req.input.method = FUNC_3(FUNC_0("GET"));
        VAR_6->req.input.path = FUNC_3(FUNC_0("/"));
        FUNC_6(VAR_6);
        FUNC_8(VAR_6->req.res.status == 200);
        if ((VAR_7 = FUNC_2(&VAR_6->req.res.headers, VAR_3, -1)) == -1) {
            FUNC_8(0);
            return;
        }
        FUNC_8(VAR_6->req.res.headers.entries[VAR_7].value.len == VAR_0);
        FUNC_7(VAR_5, VAR_6->req.res.headers.entries[VAR_7].value.base, VAR_0);
        VAR_5[VAR_0] = '\0';
        FUNC_5(VAR_6);
    }

    {
        h2o_loopback_conn_t *VAR_8 = FUNC_4(&VAR_4, VAR_4.globalconf->hosts);
        VAR_8->req.input.method = FUNC_3(FUNC_0("GET"));
        VAR_8->req.input.path = FUNC_3(FUNC_0("/"));
        FUNC_1(&VAR_8->req.pool, &VAR_8->req.headers, VAR_2, ((void*)0), VAR_5, VAR_0);
        FUNC_6(VAR_8);
        FUNC_8(VAR_8->req.res.status == 304);
        FUNC_8(VAR_8->body->size == 0);
        FUNC_8(FUNC_2(&VAR_8->req.res.headers, VAR_1, -1) != -1);
        FUNC_5(VAR_8);
    }

    {
        h2o_loopback_conn_t *VAR_9 = FUNC_4(&VAR_4, VAR_4.globalconf->hosts);
        VAR_9->req.input.method = FUNC_3(FUNC_0("GET"));
        VAR_9->req.input.path = FUNC_3(FUNC_0("/"));
        FUNC_1(&VAR_9->req.pool, &VAR_9->req.headers, VAR_2, ((void*)0),
                       FUNC_0("Sun, 06 Nov 1994 08:49:37 GMT"));
        FUNC_6(VAR_9);
        FUNC_8(VAR_9->req.res.status == 200);
        FUNC_5(VAR_9);
    }

    {
        h2o_loopback_conn_t *VAR_10 = FUNC_4(&VAR_4, VAR_4.globalconf->hosts);
        VAR_10->req.input.method = FUNC_3(FUNC_0("GET"));
        VAR_10->req.input.path = FUNC_3(FUNC_0("/"));
        FUNC_1(&VAR_10->req.pool, &VAR_10->req.headers, VAR_2, ((void*)0),
                       FUNC_0("Wed, 18 May 2033 12:33:20 GMT"));
        FUNC_6(VAR_10);
        FUNC_8(VAR_10->req.res.status == 304);
        FUNC_8(VAR_10->body->size == 0);
        FUNC_8(FUNC_2(&VAR_10->req.res.headers, VAR_1, -1) != -1);
        FUNC_5(VAR_10);
    }
}
