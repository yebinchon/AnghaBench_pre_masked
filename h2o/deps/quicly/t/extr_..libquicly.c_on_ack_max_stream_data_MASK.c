
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


struct TYPE_14__ {int max_stream_data_sender; } ;
struct TYPE_15__ {TYPE_4__ _send_aux; } ;
typedef TYPE_5__ quicly_stream_t ;
typedef int quicly_sentmap_event_t ;
struct TYPE_11__ {int args; } ;
struct TYPE_12__ {int stream_id; } ;
struct TYPE_13__ {TYPE_1__ max_stream_data; TYPE_2__ stream; } ;
struct TYPE_16__ {TYPE_3__ data; } ;
typedef TYPE_6__ quicly_sent_t ;
typedef int quicly_sent_packet_t ;
typedef int quicly_conn_t ;



 int VAR_0 ;

 TYPE_5__* FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_5(quicly_conn_t *VAR_1, const quicly_sent_packet_t *VAR_2, quicly_sent_t *VAR_3,
                                  quicly_sentmap_event_t VAR_4)
{
    quicly_stream_t *VAR_5;

    if (VAR_4 == VAR_0)
        return 0;


    if ((VAR_5 = FUNC_0(VAR_1, VAR_3->data.stream.stream_id)) != ((void*)0)) {
        switch (VAR_4) {
        case 129:
            FUNC_1(&VAR_5->_send_aux.max_stream_data_sender, &VAR_3->data.max_stream_data.args);
            break;
        case 128:
            FUNC_2(&VAR_5->_send_aux.max_stream_data_sender, &VAR_3->data.max_stream_data.args);
            if (FUNC_4(VAR_5))
                FUNC_3(VAR_5);
            break;
        default:
            break;
        }
    }

    return 0;
}
