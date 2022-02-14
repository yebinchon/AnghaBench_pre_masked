
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_9__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct sockaddr {int dummy; } ;
struct TYPE_13__ {scalar_t__ cidpair_hash; } ;
struct TYPE_12__ {int sa; } ;
struct TYPE_14__ {scalar_t__ issued_at; TYPE_4__ retry; scalar_t__ is_retry; TYPE_3__ remote; } ;
typedef TYPE_5__ quicly_address_token_plaintext_t ;
typedef int ptls_iovec_t ;
typedef scalar_t__ int64_t ;
struct TYPE_11__ {TYPE_1__* quic; } ;
struct TYPE_15__ {TYPE_2__ super; } ;
typedef TYPE_6__ h2o_http3_server_ctx_t ;
struct TYPE_16__ {scalar_t__ (* cb ) (TYPE_9__*) ;} ;
struct TYPE_10__ {TYPE_9__* now; } ;


 scalar_t__ FUNC_0 (struct sockaddr*,int *,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int *,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_9__*) ;

__attribute__((used)) static int FUNC_3(h2o_http3_server_ctx_t *VAR_1, struct sockaddr *VAR_2, ptls_iovec_t VAR_3, ptls_iovec_t VAR_4,
                          quicly_address_token_plaintext_t *VAR_5)
{
    int64_t VAR_6;

    if ((VAR_6 = VAR_1->super.quic->now->cb(VAR_1->super.quic->now) - VAR_5->issued_at) < 0)
        VAR_6 = 0;
    if (FUNC_0(VAR_2, &VAR_5->remote.sa, VAR_5->is_retry) != 0)
        return 0;
    if (VAR_5->is_retry) {
        if (VAR_6 > 30 * 1000)
            return 0;
        uint64_t VAR_7;
        if (FUNC_1(&VAR_0, VAR_3, VAR_4, &VAR_7) != 0)
            return 0;
        if (VAR_5->retry.cidpair_hash != VAR_7)
            return 0;
    } else {
        if (VAR_6 > 10 * 60 * 1000)
            return 0;
    }

    return 1;
}
