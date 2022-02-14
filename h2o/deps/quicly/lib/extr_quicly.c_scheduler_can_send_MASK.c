
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* ctx; } ;
struct TYPE_9__ {scalar_t__ sent; scalar_t__ permitted; } ;
struct TYPE_10__ {TYPE_1__ max_data; } ;
struct TYPE_13__ {TYPE_3__ super; TYPE_2__ egress; int * application; } ;
typedef TYPE_5__ quicly_conn_t ;
struct TYPE_14__ {int (* can_send ) (TYPE_6__*,TYPE_5__*,int) ;} ;
struct TYPE_12__ {TYPE_6__* stream_scheduler; } ;


 int FUNC_0 (TYPE_6__*,TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_1(quicly_conn_t *VAR_0)
{

    if (VAR_0->application == ((void*)0))
        return 0;
    int VAR_1 = !(VAR_0->egress.max_data.sent < VAR_0->egress.max_data.permitted);
    return VAR_0->super.ctx->stream_scheduler->can_send(VAR_0->super.ctx->stream_scheduler, VAR_0, VAR_1);
}
