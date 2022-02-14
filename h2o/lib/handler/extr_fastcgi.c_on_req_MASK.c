
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_12__ ;
typedef struct TYPE_13__ TYPE_10__ ;


struct TYPE_16__ {int receiving; int sending; } ;
struct TYPE_15__ {int stop; int proceed; } ;
struct st_fcgi_generator_t {int connect_req; int timeout; TYPE_10__* handler; TYPE_2__ resp; scalar_t__ sent_headers; int * sock; TYPE_9__* req; TYPE_1__ super; } ;
struct TYPE_23__ {TYPE_8__* conn; int pool; } ;
typedef TYPE_9__ h2o_req_t ;
typedef int h2o_handler_t ;
struct TYPE_19__ {TYPE_4__** entries; } ;
struct TYPE_14__ {TYPE_5__ targets; } ;
struct TYPE_17__ {int io_timeout; } ;
struct TYPE_13__ {TYPE_12__ sockpool; TYPE_3__ config; } ;
typedef TYPE_10__ h2o_fastcgi_handler_t ;
struct TYPE_22__ {TYPE_7__* ctx; } ;
struct TYPE_20__ {int hostinfo_getaddr; } ;
struct TYPE_21__ {TYPE_6__ receivers; int loop; } ;
struct TYPE_18__ {int url; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int ) ;
 struct st_fcgi_generator_t* FUNC_3 (int *,int,void (*) (void*)) ;
 int VAR_3 ;
 int FUNC_4 (int *,TYPE_12__*,int *,int ,int *,int ,int ,struct st_fcgi_generator_t*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ,int *) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_7(h2o_handler_t *VAR_6, h2o_req_t *VAR_7)
{
    h2o_fastcgi_handler_t *VAR_8 = (void *)VAR_6;
    struct st_fcgi_generator_t *VAR_9;

    VAR_9 = FUNC_3(&VAR_7->pool, sizeof(*VAR_9), (void (*)(void *))VAR_0);
    VAR_9->super.proceed = VAR_1;
    VAR_9->super.stop = VAR_2;
    VAR_9->handler = VAR_8;
    VAR_9->req = VAR_7;
    VAR_9->sock = ((void*)0);
    VAR_9->sent_headers = 0;
    FUNC_1(&VAR_9->resp.sending, &VAR_3);
    FUNC_0(&VAR_9->resp.receiving, &VAR_3);
    FUNC_5(&VAR_9->timeout, VAR_5);
    FUNC_6(VAR_7->conn->ctx->loop, VAR_9->handler->config.io_timeout, &VAR_9->timeout);

    FUNC_4(&VAR_9->connect_req, &VAR_8->sockpool, &VAR_8->sockpool.targets.entries[0]->url,
                           VAR_7->conn->ctx->loop, &VAR_7->conn->ctx->receivers.hostinfo_getaddr, FUNC_2(((void*)0), 0), VAR_4,
                           VAR_9);

    return 0;
}
