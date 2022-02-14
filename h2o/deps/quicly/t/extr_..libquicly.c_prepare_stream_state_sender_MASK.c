
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {int stream_id; int conn; } ;
typedef TYPE_3__ quicly_stream_t ;
struct TYPE_7__ {int stream_id; } ;
struct TYPE_8__ {TYPE_1__ stream_state_sender; } ;
struct TYPE_10__ {TYPE_2__ data; } ;
typedef TYPE_4__ quicly_sent_t ;
typedef int quicly_sent_acked_cb ;
typedef int quicly_sender_state_t ;
typedef int quicly_send_context_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,size_t,TYPE_4__**,int ) ;

__attribute__((used)) static int FUNC_1(quicly_stream_t *VAR_1, quicly_sender_state_t *VAR_2, quicly_send_context_t *VAR_3,
                                       size_t VAR_4, quicly_sent_acked_cb VAR_5)
{
    quicly_sent_t *VAR_6;
    int VAR_7;

    if ((VAR_7 = FUNC_0(VAR_1->conn, VAR_3, VAR_4, &VAR_6, VAR_5)) != 0)
        return VAR_7;
    VAR_6->data.stream_state_sender.stream_id = VAR_1->stream_id;
    *VAR_2 = VAR_0;

    return 0;
}
