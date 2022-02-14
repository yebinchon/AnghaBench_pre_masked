
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ sender_state; } ;
struct TYPE_13__ {TYPE_3__ stop_sending; } ;
struct TYPE_14__ {TYPE_4__ _send_aux; } ;
typedef TYPE_5__ quicly_stream_t ;
typedef scalar_t__ quicly_sentmap_event_t ;
struct TYPE_10__ {int stream_id; } ;
struct TYPE_11__ {TYPE_1__ stream_state_sender; } ;
struct TYPE_15__ {TYPE_2__ data; } ;
typedef TYPE_6__ quicly_sent_t ;
typedef int quicly_sent_packet_t ;
typedef int quicly_conn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (scalar_t__*,int) ;
 TYPE_5__* FUNC_1 (int *,int ) ;
 int FUNC_2 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_3(quicly_conn_t *VAR_3, const quicly_sent_packet_t *VAR_4, quicly_sent_t *VAR_5,
                               quicly_sentmap_event_t VAR_6)
{
    if (VAR_6 != VAR_2) {
        quicly_stream_t *VAR_7;
        if ((VAR_7 = FUNC_1(VAR_3, VAR_5->data.stream_state_sender.stream_id)) != ((void*)0)) {
            FUNC_0(&VAR_7->_send_aux.stop_sending.sender_state, VAR_6 == VAR_1);
            if (VAR_7->_send_aux.stop_sending.sender_state != VAR_0)
                FUNC_2(VAR_7);
        }
    }

    return 0;
}
