
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_13__ {int sender_state; } ;
struct TYPE_14__ {TYPE_3__ rst; } ;
struct TYPE_15__ {TYPE_4__ _send_aux; } ;
typedef TYPE_5__ quicly_stream_t ;
typedef scalar_t__ quicly_sentmap_event_t ;
struct TYPE_11__ {int stream_id; } ;
struct TYPE_12__ {TYPE_1__ stream_state_sender; } ;
struct TYPE_16__ {TYPE_2__ data; } ;
typedef TYPE_6__ quicly_sent_t ;
typedef int quicly_sent_packet_t ;
typedef int quicly_conn_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int FUNC_1 (int *,int) ;
 TYPE_5__* FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_4(quicly_conn_t *VAR_2, const quicly_sent_packet_t *VAR_3, quicly_sent_t *VAR_4,
                             quicly_sentmap_event_t VAR_5)
{
    if (VAR_5 != VAR_1) {
        quicly_stream_t *VAR_6;
        if ((VAR_6 = FUNC_2(VAR_2, VAR_4->data.stream_state_sender.stream_id)) != ((void*)0)) {
            FUNC_1(&VAR_6->_send_aux.rst.sender_state, VAR_5 == VAR_0);
            if (FUNC_3(VAR_6))
                FUNC_0(VAR_6, 0);
        }
    }

    return 0;
}
