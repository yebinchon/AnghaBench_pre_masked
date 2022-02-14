
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ (* on_body ) (TYPE_6__*,int *) ;} ;
struct TYPE_11__ {int response_end_at; } ;
struct TYPE_15__ {int _timeout; TYPE_4__* ctx; TYPE_3__ _cb; TYPE_2__ timings; } ;
struct TYPE_10__ {int res; } ;
struct st_h2o_http1client_t {TYPE_6__ super; TYPE_1__ state; } ;
struct TYPE_14__ {scalar_t__ bytes_read; struct st_h2o_http1client_t* data; } ;
typedef TYPE_5__ h2o_socket_t ;
struct TYPE_13__ {int io_timeout; int loop; } ;


 int VAR_0 ;
 int FUNC_0 (struct st_h2o_http1client_t*) ;
 int FUNC_1 (struct st_h2o_http1client_t*) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ) ;
 int * VAR_1 ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (TYPE_6__*,int *) ;
 scalar_t__ FUNC_7 (TYPE_6__*,int *) ;

__attribute__((used)) static void FUNC_8(h2o_socket_t *VAR_2, const char *VAR_3)
{
    struct st_h2o_http1client_t *VAR_4 = VAR_2->data;

    FUNC_5(&VAR_4->super._timeout);

    if (VAR_3 != ((void*)0)) {
        VAR_4->state.res = VAR_0;
        VAR_4->super.timings.response_end_at = FUNC_3(VAR_4->super.ctx->loop);
        VAR_4->super._cb.on_body(&VAR_4->super, VAR_1);
        FUNC_1(VAR_4);
        return;
    }

    if (VAR_2->bytes_read != 0) {
        if (VAR_4->super._cb.on_body(&VAR_4->super, ((void*)0)) != 0) {
            FUNC_0(VAR_4);
            return;
        }
        FUNC_2(&VAR_4->super);
    }

    FUNC_4(VAR_4->super.ctx->loop, VAR_4->super.ctx->io_timeout, &VAR_4->super._timeout);
}
