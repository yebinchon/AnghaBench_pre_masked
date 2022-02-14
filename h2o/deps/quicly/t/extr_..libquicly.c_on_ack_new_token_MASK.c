
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int quicly_sentmap_event_t ;
struct TYPE_11__ {scalar_t__ generation; scalar_t__ is_inflight; } ;
struct TYPE_12__ {TYPE_1__ new_token; } ;
struct TYPE_16__ {TYPE_2__ data; } ;
typedef TYPE_6__ quicly_sent_t ;
typedef int quicly_sent_packet_t ;
struct TYPE_15__ {int flows; } ;
struct TYPE_13__ {scalar_t__ num_inflight; scalar_t__ max_acked; scalar_t__ generation; } ;
struct TYPE_14__ {TYPE_3__ new_token; } ;
struct TYPE_17__ {TYPE_5__ pending; TYPE_4__ egress; } ;
typedef TYPE_7__ quicly_conn_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_7__*,int ,scalar_t__) ;

 int FUNC_1 () ;

__attribute__((used)) static int FUNC_2(quicly_conn_t *VAR_2, const quicly_sent_packet_t *VAR_3, quicly_sent_t *VAR_4,
                            quicly_sentmap_event_t VAR_5)
{
    if (VAR_4->data.new_token.is_inflight) {
        --VAR_2->egress.new_token.num_inflight;
        VAR_4->data.new_token.is_inflight = 0;
    }
    switch (VAR_5) {
    case 128:
        FUNC_0(VAR_0, VAR_2, FUNC_1(), VAR_4->data.new_token.generation);
        if (VAR_2->egress.new_token.max_acked < VAR_4->data.new_token.generation)
            VAR_2->egress.new_token.max_acked = VAR_4->data.new_token.generation;
        break;
    default:
        break;
    }

    if (VAR_2->egress.new_token.num_inflight == 0 && VAR_2->egress.new_token.max_acked < VAR_2->egress.new_token.generation)
        VAR_2->pending.flows |= VAR_1;

    return 0;
}
