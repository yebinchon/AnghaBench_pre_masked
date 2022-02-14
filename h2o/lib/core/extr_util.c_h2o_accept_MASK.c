
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_12__ ;


struct timeval {int dummy; } ;
struct TYPE_15__ {int data; } ;
typedef TYPE_2__ h2o_socket_t ;
struct TYPE_16__ {int * ssl_ctx; scalar_t__ expect_proxy_line; TYPE_1__* ctx; } ;
typedef TYPE_3__ h2o_accept_ctx_t ;
struct TYPE_14__ {int loop; } ;
struct TYPE_13__ {int (* create ) (TYPE_3__*,TYPE_2__*,struct timeval) ;} ;


 TYPE_12__ VAR_0 ;
 struct timeval FUNC_0 (int ) ;
 int FUNC_1 (TYPE_3__*,TYPE_2__*,struct timeval) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (TYPE_2__*,int *,int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (TYPE_3__*,TYPE_2__*,struct timeval) ;

void FUNC_6(h2o_accept_ctx_t *VAR_3, h2o_socket_t *VAR_4)
{
    struct timeval VAR_5 = FUNC_0(VAR_3->ctx->loop);

    if (VAR_3->expect_proxy_line || VAR_3->ssl_ctx != ((void*)0)) {
        VAR_4->data = VAR_0.create(VAR_3, VAR_4, VAR_5);
        if (VAR_3->expect_proxy_line) {
            FUNC_3(VAR_4, VAR_1);
        } else {
            FUNC_4(VAR_4, VAR_3->ssl_ctx, ((void*)0), FUNC_2(((void*)0), 0), VAR_2);
        }
    } else {
        FUNC_1(VAR_3, VAR_4, VAR_5);
    }
}
