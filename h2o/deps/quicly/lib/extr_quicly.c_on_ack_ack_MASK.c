
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_9__ ;
typedef struct TYPE_22__ TYPE_8__ ;
typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_14__ {scalar_t__ num_ranges; } ;
struct st_quicly_pn_space_t {scalar_t__ unacked_count; int largest_pn_received_at; TYPE_10__ ack_queue; } ;
typedef scalar_t__ quicly_sentmap_event_t ;
struct TYPE_18__ {int end; int start; } ;
struct TYPE_19__ {TYPE_4__ range; } ;
struct TYPE_20__ {TYPE_5__ ack; } ;
struct TYPE_21__ {TYPE_6__ data; } ;
typedef TYPE_7__ quicly_sent_t ;
struct TYPE_22__ {int ack_epoch; } ;
typedef TYPE_8__ quicly_sent_packet_t ;
struct TYPE_23__ {TYPE_3__* application; TYPE_2__* handshake; TYPE_1__* initial; } ;
typedef TYPE_9__ quicly_conn_t ;
struct TYPE_17__ {struct st_quicly_pn_space_t super; } ;
struct TYPE_16__ {struct st_quicly_pn_space_t super; } ;
struct TYPE_15__ {struct st_quicly_pn_space_t super; } ;


 int VAR_0 ;



 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_10__*,int ,int ) ;

__attribute__((used)) static int FUNC_2(quicly_conn_t *VAR_2, const quicly_sent_packet_t *VAR_3, quicly_sent_t *VAR_4, quicly_sentmap_event_t VAR_5)
{


    if (VAR_5 == VAR_1) {

        struct st_quicly_pn_space_t *VAR_6;
        switch (VAR_3->ack_epoch) {
        case 128:
            VAR_6 = &VAR_2->initial->super;
            break;
        case 129:
            VAR_6 = &VAR_2->handshake->super;
            break;
        case 130:
            VAR_6 = &VAR_2->application->super;
            break;
        default:
            FUNC_0(!"FIXME");
        }
        if (VAR_6 != ((void*)0)) {
            FUNC_1(&VAR_6->ack_queue, VAR_4->data.ack.range.start, VAR_4->data.ack.range.end);
            if (VAR_6->ack_queue.num_ranges == 0) {
                VAR_6->largest_pn_received_at = VAR_0;
                VAR_6->unacked_count = 0;
            }
        }
    }

    return 0;
}
