
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {int len; int * base; } ;
struct TYPE_15__ {TYPE_5__ upgrade; } ;
struct TYPE_14__ {int connected_at; TYPE_4__* ctx; } ;
struct st_h2o_http1_conn_t {TYPE_7__ req; TYPE_6__ super; TYPE_1__* sock; } ;
struct TYPE_12__ {TYPE_3__* globalconf; } ;
struct TYPE_10__ {scalar_t__ upgrade_to_http2; } ;
struct TYPE_11__ {TYPE_2__ http1; } ;
struct TYPE_9__ {int * ssl; } ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (TYPE_7__*,int ) ;
 scalar_t__ FUNC_2 (int *,int,int ) ;
 int FUNC_3 (TYPE_7__*) ;
 scalar_t__ FUNC_4 (int *,int ) ;

__attribute__((used)) static void FUNC_5(struct st_h2o_http1_conn_t *VAR_0)
{
    if (VAR_0->sock->ssl == ((void*)0) && VAR_0->req.upgrade.base != ((void*)0) && VAR_0->super.ctx->globalconf->http1.upgrade_to_http2 &&
        VAR_0->req.upgrade.len >= 3 && FUNC_2(VAR_0->req.upgrade.base, 3, FUNC_0("h2c")) &&
        (VAR_0->req.upgrade.len == 3 ||
         (VAR_0->req.upgrade.len == 6 && (FUNC_4(VAR_0->req.upgrade.base + 3, FUNC_0("-14")) == 0 ||
                                         FUNC_4(VAR_0->req.upgrade.base + 3, FUNC_0("-16")) == 0)))) {
        if (FUNC_1(&VAR_0->req, VAR_0->super.connected_at) == 0) {
            return;
        }
    }
    FUNC_3(&VAR_0->req);
}
