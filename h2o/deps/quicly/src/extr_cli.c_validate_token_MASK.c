
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
struct sockaddr_in6 {int sin6_port; int sin6_addr; } ;
struct TYPE_15__ {int s_addr; } ;
struct sockaddr_in {int sin_port; TYPE_2__ sin_addr; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_20__ {scalar_t__ cidpair_hash; } ;
struct TYPE_18__ {int sin6_port; int sin6_addr; } ;
struct TYPE_16__ {int s_addr; } ;
struct TYPE_17__ {int sin_port; TYPE_3__ sin_addr; } ;
struct TYPE_14__ {int sa_family; } ;
struct TYPE_19__ {TYPE_5__ sin6; TYPE_4__ sin; TYPE_1__ sa; } ;
struct TYPE_21__ {scalar_t__ issued_at; TYPE_7__ retry; scalar_t__ is_retry; TYPE_6__ remote; } ;
typedef TYPE_8__ quicly_address_token_plaintext_t ;
typedef int ptls_iovec_t ;
typedef scalar_t__ int64_t ;
struct TYPE_13__ {TYPE_10__* now; } ;
struct TYPE_12__ {scalar_t__ (* cb ) (TYPE_10__*) ;} ;




 TYPE_11__ VAR_0 ;
 int FUNC_0 (int *,int *,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ,int ,scalar_t__*) ;
 scalar_t__ FUNC_2 (TYPE_10__*) ;

__attribute__((used)) static int FUNC_3(struct sockaddr *VAR_2, ptls_iovec_t VAR_3, ptls_iovec_t VAR_4,
                          quicly_address_token_plaintext_t *VAR_5)
{
    int64_t VAR_6;
    int VAR_7;

    if ((VAR_6 = VAR_0.now->cb(VAR_0.now) - VAR_5->issued_at) < 0)
        VAR_6 = 0;
    if (VAR_2->sa_family != VAR_5->remote.sa.sa_family)
        return 0;
    switch (VAR_2->sa_family) {
    case 129: {
        struct sockaddr_in *VAR_8 = (struct sockaddr_in *)VAR_2;
        if (VAR_8->sin_addr.s_addr != VAR_5->remote.sin.sin_addr.s_addr)
            return 0;
        VAR_7 = VAR_8->sin_port == VAR_5->remote.sin.sin_port;
    } break;
    case 128: {
        struct sockaddr_in6 *VAR_9 = (struct sockaddr_in6 *)VAR_2;
        if (FUNC_0(&VAR_9->sin6_addr, &VAR_5->remote.sin6.sin6_addr, sizeof(VAR_9->sin6_addr)) != 0)
            return 0;
        VAR_7 = VAR_9->sin6_port == VAR_5->remote.sin6.sin6_port;
    } break;
    default:
        return 0;
    }
    if (VAR_5->is_retry) {
        if (VAR_6 > 30000)
            return 0;
        if (!VAR_7)
            return 0;
        uint64_t VAR_10;
        if (FUNC_1(&VAR_1, VAR_3, VAR_4, &VAR_10) != 0)
            return 0;
        if (VAR_5->retry.cidpair_hash != VAR_10)
            return 0;
    } else {
        if (VAR_6 > 10 * 60 * 1000)
            return 0;
    }
    return 1;
}
