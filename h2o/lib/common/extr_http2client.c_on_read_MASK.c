
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* ctx; } ;
struct TYPE_6__ {int defer_timeout; } ;
struct st_h2o_http2client_conn_t {int io_timeout; TYPE_3__ super; TYPE_1__ output; } ;
struct TYPE_9__ {struct st_h2o_http2client_conn_t* data; } ;
typedef TYPE_4__ h2o_socket_t ;
struct TYPE_7__ {int io_timeout; int loop; } ;


 int FUNC_0 (struct st_h2o_http2client_conn_t*,int ) ;
 int FUNC_1 (struct st_h2o_http2client_conn_t*) ;
 int FUNC_2 (struct st_h2o_http2client_conn_t*) ;
 int VAR_0 ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int ,int ,int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (struct st_h2o_http2client_conn_t*) ;

__attribute__((used)) static void FUNC_7(h2o_socket_t *VAR_1, const char *VAR_2)
{
    struct st_h2o_http2client_conn_t *VAR_3 = VAR_1->data;

    FUNC_5(&VAR_3->io_timeout);

    if (VAR_2 != ((void*)0)) {
        FUNC_0(VAR_3, VAR_0);
        FUNC_1(VAR_3);
        return;
    }

    if (FUNC_6(VAR_3) != 0)
        return;


    if (FUNC_3(&VAR_3->output.defer_timeout)) {
        FUNC_5(&VAR_3->output.defer_timeout);
        FUNC_2(VAR_3);
    }

    if (!FUNC_3(&VAR_3->io_timeout))
        FUNC_4(VAR_3->super.ctx->loop, VAR_3->super.ctx->io_timeout, &VAR_3->io_timeout);
}
