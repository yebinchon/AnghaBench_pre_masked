
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {TYPE_4__* ctx; } ;
struct TYPE_8__ {int bytes_consumed; int sender; } ;
struct TYPE_9__ {TYPE_1__ max_data; } ;
struct TYPE_13__ {TYPE_5__ super; TYPE_2__ ingress; } ;
typedef TYPE_6__ quicly_conn_t ;
struct TYPE_10__ {scalar_t__ max_data; } ;
struct TYPE_11__ {TYPE_3__ transport_params; } ;


 int FUNC_0 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(quicly_conn_t *VAR_0)
{
    return FUNC_0(&VAR_0->ingress.max_data.sender, VAR_0->ingress.max_data.bytes_consumed,
                                            (uint32_t)VAR_0->super.ctx->transport_params.max_data, 512);
}
