
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_12__ {scalar_t__ num_ranges; } ;
struct TYPE_13__ {TYPE_1__ pending; } ;
struct TYPE_18__ {int stream_id; TYPE_6__* conn; scalar_t__ streams_blocked; TYPE_2__ sendstate; } ;
typedef TYPE_7__ quicly_stream_t ;
struct TYPE_19__ {int (* update_state ) (TYPE_8__*,TYPE_7__*) ;} ;
typedef TYPE_8__ quicly_stream_scheduler_t ;
struct TYPE_16__ {TYPE_4__* ctx; } ;
struct TYPE_14__ {int flows; } ;
struct TYPE_17__ {TYPE_5__ super; TYPE_3__ pending; } ;
struct TYPE_15__ {TYPE_8__* stream_scheduler; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_8__*,TYPE_7__*) ;

__attribute__((used)) static void FUNC_2(quicly_stream_t *VAR_0)
{
    if (VAR_0->stream_id < 0) {
        FUNC_0(-4 <= VAR_0->stream_id);
        uint8_t VAR_1 = 1 << -(1 + VAR_0->stream_id);
        if (VAR_0->sendstate.pending.num_ranges != 0) {
            VAR_0->conn->pending.flows |= VAR_1;
        } else {
            VAR_0->conn->pending.flows &= ~VAR_1;
        }
        return;
    }


    if (VAR_0->streams_blocked)
        return;

    quicly_stream_scheduler_t *VAR_2 = VAR_0->conn->super.ctx->stream_scheduler;
    VAR_2->update_state(VAR_2, VAR_0);
}
