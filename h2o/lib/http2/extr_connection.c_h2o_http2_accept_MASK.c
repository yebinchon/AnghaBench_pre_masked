
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct timeval {int dummy; } ;
struct TYPE_13__ {TYPE_1__* input; TYPE_3__* data; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_14__ {int sock; int http2_origin_frame; } ;
typedef TYPE_3__ h2o_http2_conn_t ;
struct TYPE_15__ {int http2_origin_frame; int hosts; int ctx; } ;
typedef TYPE_4__ h2o_accept_ctx_t ;
struct TYPE_12__ {scalar_t__ size; } ;


 TYPE_3__* FUNC_0 (int ,int ,TYPE_2__*,struct timeval) ;
 int FUNC_1 (int ,int (*) (TYPE_2__*,int )) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (TYPE_3__*) ;

void FUNC_4(h2o_accept_ctx_t *VAR_0, h2o_socket_t *VAR_1, struct timeval VAR_2)
{
    h2o_http2_conn_t *VAR_3 = FUNC_0(VAR_0->ctx, VAR_0->hosts, VAR_1, VAR_2);
    VAR_3->http2_origin_frame = VAR_0->http2_origin_frame;
    VAR_1->data = VAR_3;
    FUNC_1(VAR_3->sock, FUNC_2);
    FUNC_3(VAR_3);
    if (VAR_1->input->size != 0)
        FUNC_2(VAR_1, 0);
}
