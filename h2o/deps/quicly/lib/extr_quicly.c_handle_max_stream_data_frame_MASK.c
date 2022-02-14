
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct st_quicly_handle_payload_state_t {int end; int src; } ;
struct TYPE_8__ {scalar_t__ sender_state; } ;
struct TYPE_9__ {scalar_t__ max_stream_data; TYPE_1__ rst; } ;
struct TYPE_10__ {TYPE_2__ _send_aux; } ;
typedef TYPE_3__ quicly_stream_t ;
struct TYPE_11__ {scalar_t__ max_stream_data; int stream_id; } ;
typedef TYPE_4__ quicly_max_stream_data_frame_t ;
typedef int quicly_conn_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int *,int ,int ,scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 () ;
 int FUNC_2 (int *,int ,TYPE_4__*) ;
 TYPE_3__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_7(quicly_conn_t *VAR_3, struct st_quicly_handle_payload_state_t *VAR_4)
{
    quicly_max_stream_data_frame_t VAR_5;
    quicly_stream_t *VAR_6;
    int VAR_7;

    if ((VAR_7 = FUNC_2(&VAR_4->src, VAR_4->end, &VAR_5)) != 0)
        return VAR_7;

    FUNC_0(VAR_0, VAR_3, FUNC_1(), VAR_5.stream_id, VAR_5.max_stream_data);

    if (!FUNC_5(FUNC_4(VAR_3), VAR_5.stream_id))
        return VAR_2;

    if ((VAR_6 = FUNC_3(VAR_3, VAR_5.stream_id)) == ((void*)0))
        return 0;

    if (VAR_5.max_stream_data < VAR_6->_send_aux.max_stream_data)
        return 0;
    VAR_6->_send_aux.max_stream_data = VAR_5.max_stream_data;

    if (VAR_6->_send_aux.rst.sender_state == VAR_1)
        FUNC_6(VAR_6);

    return 0;
}
