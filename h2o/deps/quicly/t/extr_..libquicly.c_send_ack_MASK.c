
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
struct TYPE_15__ {scalar_t__ num_ranges; int * ranges; } ;
struct st_quicly_pn_space_t {scalar_t__ largest_pn_received_at; scalar_t__ unacked_count; TYPE_10__ ack_queue; } ;
struct TYPE_17__ {int range; } ;
struct TYPE_18__ {TYPE_2__ ack; } ;
struct TYPE_19__ {TYPE_3__ data; } ;
typedef TYPE_4__ quicly_sent_t ;
struct TYPE_20__ {int * dst; int dst_end; } ;
typedef TYPE_5__ quicly_send_context_t ;
struct TYPE_16__ {int sentmap; } ;
struct TYPE_21__ {TYPE_1__ egress; } ;
typedef TYPE_6__ quicly_conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (TYPE_6__*,TYPE_5__*,int ) ;
 int FUNC_1 (TYPE_6__*,TYPE_5__*,int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (int *,int ,TYPE_10__*,scalar_t__) ;
 TYPE_4__* FUNC_3 (int *,int ) ;

__attribute__((used)) static int FUNC_4(quicly_conn_t *VAR_5, struct st_quicly_pn_space_t *VAR_6, quicly_send_context_t *VAR_7)
{
    uint64_t VAR_8;
    int VAR_9;

    if (VAR_6->ack_queue.num_ranges == 0)
        return 0;


    if (VAR_6->largest_pn_received_at < VAR_3) {


        VAR_8 = ((VAR_3 - VAR_6->largest_pn_received_at) * 1000) >> VAR_2;
    } else {
        VAR_8 = 0;
    }


Emit:
    if ((VAR_9 = FUNC_0(VAR_5, VAR_7, VAR_1)) != 0)
        return VAR_9;
    uint8_t *VAR_10 = FUNC_2(VAR_7->dst, VAR_7->dst_end, &VAR_6->ack_queue, VAR_8);
    if (VAR_10 == ((void*)0)) {

        if ((VAR_9 = FUNC_1(VAR_5, VAR_7, 0)) != 0)
            return VAR_9;
        goto Emit;
    }
    VAR_7->dst = VAR_10;

    {
        size_t VAR_11;
        for (VAR_11 = 0; VAR_11 != VAR_6->ack_queue.num_ranges; ++VAR_11) {
            quicly_sent_t *VAR_12;
            if ((VAR_12 = FUNC_3(&VAR_5->egress.sentmap, VAR_4)) == ((void*)0))
                return VAR_0;
            VAR_12->data.ack.range = VAR_6->ack_queue.ranges[VAR_11];
        }
    }

    VAR_6->unacked_count = 0;

    return VAR_9;
}
