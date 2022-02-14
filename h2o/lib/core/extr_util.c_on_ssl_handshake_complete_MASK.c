
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;
typedef struct TYPE_17__ TYPE_15__ ;
typedef struct TYPE_16__ TYPE_11__ ;


struct timeval {int dummy; } ;
struct st_h2o_accept_data_t {int connected_at; TYPE_11__* ctx; } ;
typedef scalar_t__ int64_t ;
struct TYPE_20__ {struct st_h2o_accept_data_t* data; } ;
typedef TYPE_3__ h2o_socket_t ;
struct TYPE_21__ {scalar_t__ len; int base; } ;
typedef TYPE_4__ h2o_iovec_t ;
struct TYPE_18__ {int alpn_h1; int alpn_h2; int handshake_accum_time_full; int handshake_full; int handshake_accum_time_resume; int handshake_resume; int errors; } ;
struct TYPE_19__ {TYPE_1__ ssl; int loop; } ;
struct TYPE_17__ {int (* destroy ) (struct st_h2o_accept_data_t*) ;} ;
struct TYPE_16__ {TYPE_2__* ctx; } ;


 TYPE_15__ VAR_0 ;
 struct timeval FUNC_0 (int ) ;
 int FUNC_1 (TYPE_11__*,TYPE_3__*,int ) ;
 int FUNC_2 (TYPE_11__*,TYPE_3__*,int ) ;
 TYPE_4__* VAR_1 ;
 int FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 TYPE_4__ FUNC_5 (TYPE_3__*) ;
 scalar_t__ FUNC_6 (int *,struct timeval*) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__) ;
 int FUNC_8 (struct st_h2o_accept_data_t*) ;

__attribute__((used)) static void FUNC_9(h2o_socket_t *VAR_2, const char *VAR_3)
{
    struct st_h2o_accept_data_t *VAR_4 = VAR_2->data;
    VAR_2->data = ((void*)0);

    if (VAR_3 != ((void*)0)) {
        ++VAR_4->ctx->ctx->ssl.errors;
        FUNC_3(VAR_2);
        goto Exit;
    }


    struct timeval VAR_5 = FUNC_0(VAR_4->ctx->ctx->loop);
    int64_t VAR_6 = FUNC_6(&VAR_4->connected_at, &VAR_5);
    if (FUNC_4(VAR_2)) {
        ++VAR_4->ctx->ctx->ssl.handshake_resume;
        VAR_4->ctx->ctx->ssl.handshake_accum_time_resume += VAR_6;
    } else {
        ++VAR_4->ctx->ctx->ssl.handshake_full;
        VAR_4->ctx->ctx->ssl.handshake_accum_time_full += VAR_6;
    }

    h2o_iovec_t VAR_7 = FUNC_5(VAR_2);
    const h2o_iovec_t *VAR_8;
    for (VAR_8 = VAR_1; VAR_8->len != 0; ++VAR_8) {
        if (VAR_7.len == VAR_8->len && FUNC_7(VAR_7.base, VAR_8->base, VAR_7.len) == 0) {

            ++VAR_4->ctx->ctx->ssl.alpn_h2;
            FUNC_2(VAR_4->ctx, VAR_2, VAR_4->connected_at);
            goto Exit;
        }
    }

    if (VAR_7.len != 0)
        ++VAR_4->ctx->ctx->ssl.alpn_h1;
    FUNC_1(VAR_4->ctx, VAR_2, VAR_4->connected_at);

Exit:
    VAR_0.destroy(VAR_4);
}
