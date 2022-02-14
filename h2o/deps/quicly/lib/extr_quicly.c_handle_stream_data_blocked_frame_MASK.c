
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct st_quicly_handle_payload_state_t {int end; int src; } ;
struct TYPE_8__ {int max_stream_data_sender; } ;
struct TYPE_9__ {TYPE_1__ _send_aux; } ;
typedef TYPE_2__ quicly_stream_t ;
struct TYPE_10__ {int stream_id; int offset; } ;
typedef TYPE_3__ quicly_stream_data_blocked_frame_t ;
typedef int quicly_conn_t ;


 int FUNC_0 (int ,int *,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,TYPE_3__*) ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_2__*) ;
 scalar_t__ FUNC_8 (TYPE_2__*) ;

__attribute__((used)) static int FUNC_9(quicly_conn_t *VAR_2, struct st_quicly_handle_payload_state_t *VAR_3)
{
    quicly_stream_data_blocked_frame_t VAR_4;
    quicly_stream_t *VAR_5;
    int VAR_6;

    if ((VAR_6 = FUNC_2(&VAR_3->src, VAR_3->end, &VAR_4)) != 0)
        return VAR_6;

    FUNC_0(VAR_1, VAR_2, FUNC_1(), VAR_4.stream_id, VAR_4.offset);

    if (!FUNC_6(FUNC_4(VAR_2), VAR_4.stream_id))
        return VAR_0;

    if ((VAR_5 = FUNC_3(VAR_2, VAR_4.stream_id)) != ((void*)0)) {
        FUNC_5(&VAR_5->_send_aux.max_stream_data_sender);
        if (FUNC_8(VAR_5))
            FUNC_7(VAR_5);
    }

    return 0;
}
