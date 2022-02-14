
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_9__ ;
typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_21__ {int should_rearm_on_send; scalar_t__ at; } ;
struct TYPE_19__ {TYPE_6__* conf; int rtt; } ;
struct TYPE_20__ {TYPE_7__ loss; } ;
struct TYPE_13__ {scalar_t__ idle_timeout; } ;
struct TYPE_14__ {TYPE_1__ transport_params; } ;
struct TYPE_17__ {TYPE_4__* ctx; TYPE_2__ peer; } ;
struct TYPE_12__ {TYPE_9__ idle_timeout; TYPE_8__ egress; TYPE_5__ super; int * handshake; int * initial; } ;
typedef TYPE_10__ quicly_conn_t ;
typedef scalar_t__ int64_t ;
struct TYPE_18__ {int min_pto; } ;
struct TYPE_15__ {scalar_t__ idle_timeout; int max_ack_delay; } ;
struct TYPE_16__ {TYPE_3__ transport_params; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;

__attribute__((used)) static void FUNC_1(quicly_conn_t *VAR_2, int VAR_3)
{
    if (!VAR_3 && !VAR_2->idle_timeout.should_rearm_on_send)
        return;

    int64_t VAR_4 = VAR_0;


    if (VAR_2->initial == ((void*)0) && VAR_2->handshake == ((void*)0) && VAR_2->super.peer.transport_params.idle_timeout != 0)
        VAR_4 = VAR_2->super.peer.transport_params.idle_timeout;
    if (VAR_2->super.ctx->transport_params.idle_timeout != 0 && VAR_2->super.ctx->transport_params.idle_timeout < VAR_4)
        VAR_4 = VAR_2->super.ctx->transport_params.idle_timeout;

    if (VAR_4 == VAR_0)
        return;

    uint32_t VAR_5 = 3 * FUNC_0(&VAR_2->egress.loss.rtt, VAR_2->super.ctx->transport_params.max_ack_delay,
                                                VAR_2->egress.loss.conf->min_pto);
    VAR_2->idle_timeout.at = VAR_1 + (VAR_4 > VAR_5 ? VAR_4 : VAR_5);
    VAR_2->idle_timeout.should_rearm_on_send = VAR_3;
}
