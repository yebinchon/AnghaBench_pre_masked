
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct st_ssl_status_ctx_t {int mutex; int handshake_accum_time_resume; int handshake_accum_time_full; int handshake_resume; int handshake_full; int alpn_h2; int alpn_h1; } ;
struct TYPE_4__ {scalar_t__ handshake_accum_time_resume; scalar_t__ handshake_accum_time_full; scalar_t__ handshake_resume; scalar_t__ handshake_full; scalar_t__ alpn_h2; scalar_t__ alpn_h1; } ;
struct TYPE_5__ {TYPE_1__ ssl; } ;
typedef TYPE_2__ h2o_context_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, h2o_context_t *VAR_1)
{
    struct st_ssl_status_ctx_t *VAR_2 = VAR_0;

    FUNC_0(&VAR_2->mutex);

    VAR_2->alpn_h1 += VAR_1->ssl.alpn_h1;
    VAR_2->alpn_h2 += VAR_1->ssl.alpn_h2;
    VAR_2->handshake_full += VAR_1->ssl.handshake_full;
    VAR_2->handshake_resume += VAR_1->ssl.handshake_resume;
    VAR_2->handshake_accum_time_full += VAR_1->ssl.handshake_accum_time_full;
    VAR_2->handshake_accum_time_resume += VAR_1->ssl.handshake_accum_time_resume;

    FUNC_1(&VAR_2->mutex);
}
