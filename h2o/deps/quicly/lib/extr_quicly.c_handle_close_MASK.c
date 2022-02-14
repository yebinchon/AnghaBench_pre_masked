
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_12__ {scalar_t__ state; TYPE_1__* ctx; } ;
struct TYPE_13__ {TYPE_2__ super; } ;
typedef TYPE_3__ quicly_conn_t ;
struct TYPE_14__ {int len; scalar_t__ base; } ;
typedef TYPE_4__ ptls_iovec_t ;
struct TYPE_15__ {int (* cb ) (TYPE_5__*,TYPE_3__*,int,int ,char const*,int ) ;} ;
struct TYPE_11__ {TYPE_5__* closed_by_peer; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_3__*,int,int ) ;
 int FUNC_1 (TYPE_3__*,int ,int) ;
 int FUNC_2 (TYPE_5__*,TYPE_3__*,int,int ,char const*,int ) ;

__attribute__((used)) static int FUNC_3(quicly_conn_t *VAR_2, int VAR_3, uint64_t VAR_4, ptls_iovec_t VAR_5)
{
    int VAR_6;

    if (VAR_2->super.state >= VAR_1)
        return 0;


    if ((VAR_6 = FUNC_1(VAR_2, 0, VAR_3 != VAR_0)) != 0)
        return VAR_6;
    if (VAR_2->super.ctx->closed_by_peer != ((void*)0))
        VAR_2->super.ctx->closed_by_peer->cb(VAR_2->super.ctx->closed_by_peer, VAR_2, VAR_3, VAR_4,
                                            (const char *)VAR_5.base, VAR_5.len);
    FUNC_0(VAR_2, VAR_3, 0);

    return 0;
}
