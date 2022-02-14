
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_32__ TYPE_9__ ;
typedef struct TYPE_31__ TYPE_8__ ;
typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_17__ ;
typedef struct TYPE_22__ TYPE_14__ ;
typedef struct TYPE_21__ TYPE_11__ ;


typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct st_quicly_handle_payload_state_t {scalar_t__ frame_type; int epoch; int end; int src; } ;
typedef int quicly_sentmap_iter_t ;
struct TYPE_30__ {scalar_t__ packet_number; scalar_t__ ack_epoch; int ack_eliciting; scalar_t__ bytes_in_flight; int sent_at; } ;
typedef TYPE_7__ quicly_sent_packet_t ;
struct TYPE_22__ {int rtt; } ;
struct TYPE_21__ {scalar_t__ bytes_in_flight; } ;
struct TYPE_23__ {int cwnd; } ;
struct TYPE_29__ {TYPE_14__ loss; TYPE_11__ sentmap; TYPE_17__ cc; } ;
struct TYPE_26__ {int ack_received; } ;
struct TYPE_27__ {TYPE_3__ num_packets; } ;
struct TYPE_24__ {int send_probe; } ;
struct TYPE_25__ {TYPE_1__ address_validation; } ;
struct TYPE_28__ {TYPE_4__ stats; TYPE_2__ peer; } ;
struct TYPE_31__ {TYPE_6__ egress; TYPE_5__ super; } ;
typedef TYPE_8__ quicly_conn_t ;
struct TYPE_32__ {scalar_t__ smallest_acknowledged; size_t num_gaps; scalar_t__* ack_block_lengths; scalar_t__* gaps; int largest_acknowledged; int ack_delay; } ;
typedef TYPE_9__ quicly_ack_frame_t ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;


 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,TYPE_8__*,int ,scalar_t__,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (TYPE_8__*,int *) ;
 int VAR_11 ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_17__*,int ,int ,int ) ;
 int FUNC_4 (int *,int ,TYPE_9__*,int) ;
 int FUNC_5 (TYPE_14__*,int ,int ) ;
 int FUNC_6 (TYPE_14__*,scalar_t__,int ,int ,int ,int) ;
 TYPE_7__* FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_11__*,int *,int ,TYPE_8__*) ;
 int FUNC_10 (TYPE_8__*) ;

__attribute__((used)) static int FUNC_11(quicly_conn_t *VAR_12, struct st_quicly_handle_payload_state_t *VAR_13)
{
    quicly_ack_frame_t VAR_14;
    quicly_sentmap_iter_t VAR_15;
    struct {
        uint64_t packet_number;
        int64_t sent_at;
    } VAR_16 = {VAR_9, VAR_1};
    size_t VAR_17 = 0;
    int VAR_18 = 0, VAR_19;

    if ((VAR_19 = FUNC_4(&VAR_13->src, VAR_13->end, &VAR_14, VAR_13->frame_type == VAR_3)) != 0)
        return VAR_19;

    uint64_t VAR_20 = VAR_14.smallest_acknowledged;

    switch (VAR_13->epoch) {
    case 129:
        return VAR_5;
    case 128:
        VAR_12->super.peer.address_validation.send_probe = 0;
        break;
    default:
        break;
    }

    FUNC_1(VAR_12, &VAR_15);

    size_t VAR_21 = VAR_14.num_gaps;
    while (1) {
        uint64_t VAR_22 = VAR_14.ack_block_lengths[VAR_21];
        if (VAR_22 != 0) {
            FUNC_0(VAR_7, VAR_12, FUNC_2(), VAR_20, VAR_20 + VAR_22 - 1);
            while (FUNC_7(&VAR_15)->packet_number < VAR_20)
                FUNC_8(&VAR_15);
            do {
                const quicly_sent_packet_t *VAR_23;
                if ((VAR_23 = FUNC_7(&VAR_15))->packet_number == VAR_20) {
                    ++VAR_12->super.stats.num_packets.ack_received;
                    if (VAR_13->epoch == VAR_23->ack_epoch) {
                        VAR_16.packet_number = VAR_20;
                        VAR_16.sent_at = VAR_23->sent_at;
                        VAR_18 |= VAR_23->ack_eliciting;
                        FUNC_0(VAR_2, VAR_12, FUNC_2(), VAR_20, 1);
                        if (VAR_23->bytes_in_flight != 0) {
                            VAR_17 += VAR_23->bytes_in_flight;
                        }
                        if ((VAR_19 = FUNC_9(&VAR_12->egress.sentmap, &VAR_15, VAR_4, VAR_12)) != 0)
                            return VAR_19;
                    } else {
                        FUNC_8(&VAR_15);
                    }
                }
                ++VAR_20;
            } while (--VAR_22 != 0);
        }
        if (VAR_21-- == 0)
            break;
        VAR_20 += VAR_14.gaps[VAR_21];
    }

    FUNC_0(VAR_8, VAR_12, FUNC_2(), VAR_14.ack_delay);



    FUNC_6(&VAR_12->egress.loss, VAR_16.packet_number, VAR_11, VAR_16.sent_at,
                                VAR_14.ack_delay, VAR_18);


    if (VAR_17 > 0) {
        FUNC_3(&VAR_12->egress.cc, (uint32_t)VAR_17, VAR_14.largest_acknowledged,
                           (uint32_t)(VAR_12->egress.sentmap.bytes_in_flight + VAR_17));
        FUNC_0(VAR_6, VAR_12, FUNC_2(), &VAR_12->egress.loss.rtt, VAR_12->egress.cc.cwnd,
                     VAR_12->egress.sentmap.bytes_in_flight);
    }

    FUNC_0(VAR_0, VAR_12, FUNC_2(), VAR_14.largest_acknowledged, VAR_17, VAR_12->egress.cc.cwnd,
                 VAR_12->egress.sentmap.bytes_in_flight);


    FUNC_5(&VAR_12->egress.loss, VAR_14.largest_acknowledged, VAR_10);
    FUNC_10(VAR_12);

    return 0;
}
