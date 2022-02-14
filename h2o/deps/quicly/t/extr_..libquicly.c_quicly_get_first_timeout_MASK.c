
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


struct TYPE_20__ {scalar_t__ at; } ;
struct TYPE_18__ {scalar_t__ alarm_at; } ;
struct TYPE_19__ {scalar_t__ send_ack_at; TYPE_6__ loss; } ;
struct TYPE_15__ {int validated; } ;
struct TYPE_16__ {TYPE_3__ address_validation; } ;
struct TYPE_17__ {TYPE_4__ peer; } ;
struct TYPE_13__ {int control; } ;
struct TYPE_14__ {scalar_t__ flows; TYPE_1__ streams; } ;
struct TYPE_21__ {TYPE_8__ idle_timeout; TYPE_7__ egress; TYPE_5__ super; TYPE_2__ pending; } ;
typedef TYPE_9__ quicly_conn_t ;
typedef scalar_t__ int64_t ;


 scalar_t__ FUNC_0 (TYPE_9__*,int ,int ) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_9__*) ;

int64_t FUNC_3(quicly_conn_t *VAR_0)
{
    if (FUNC_0(VAR_0, 0, 0) > 0) {
        if (VAR_0->pending.flows != 0)
            return 0;
        if (FUNC_1(&VAR_0->pending.streams.control))
            return 0;
        if (FUNC_2(VAR_0))
            return 0;
    } else if (!VAR_0->super.peer.address_validation.validated) {
        return VAR_0->idle_timeout.at;
    }

    int64_t VAR_1 = VAR_0->egress.loss.alarm_at;
    if (VAR_0->egress.send_ack_at < VAR_1)
        VAR_1 = VAR_0->egress.send_ack_at;
    if (VAR_0->idle_timeout.at < VAR_1)
        VAR_1 = VAR_0->idle_timeout.at;

    return VAR_1;
}
