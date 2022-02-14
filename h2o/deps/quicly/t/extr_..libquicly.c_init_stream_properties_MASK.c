
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_12__ {int window; } ;
struct TYPE_10__ {int default_scheduler; int control; } ;
struct TYPE_9__ {scalar_t__ error_code; void* sender_state; } ;
struct TYPE_8__ {scalar_t__ error_code; void* sender_state; } ;
struct TYPE_11__ {TYPE_3__ pending_link; int max_stream_data_sender; TYPE_2__ rst; TYPE_1__ stop_sending; int max_stream_data; } ;
struct TYPE_13__ {TYPE_5__ _recv_aux; TYPE_4__ _send_aux; scalar_t__ streams_blocked; int recvstate; int stream_id; int sendstate; int conn; } ;
typedef TYPE_6__ quicly_stream_t ;


 void* VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int,int ) ;
 scalar_t__ FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(quicly_stream_t *VAR_1, uint32_t VAR_2,
                                   uint64_t VAR_3)
{
    int VAR_4 = FUNC_0(VAR_1->conn);

    if (FUNC_8(VAR_4, VAR_1->stream_id)) {
        FUNC_5(&VAR_1->sendstate);
    } else {
        FUNC_6(&VAR_1->sendstate);
    }
    if (FUNC_7(VAR_4, VAR_1->stream_id)) {
        FUNC_3(&VAR_1->recvstate);
    } else {
        FUNC_4(&VAR_1->recvstate);
    }
    VAR_1->streams_blocked = 0;

    VAR_1->_send_aux.max_stream_data = VAR_3;
    VAR_1->_send_aux.stop_sending.sender_state = VAR_0;
    VAR_1->_send_aux.stop_sending.error_code = 0;
    VAR_1->_send_aux.rst.sender_state = VAR_0;
    VAR_1->_send_aux.rst.error_code = 0;
    FUNC_2(&VAR_1->_send_aux.max_stream_data_sender, VAR_2);
    FUNC_1(&VAR_1->_send_aux.pending_link.control);
    FUNC_1(&VAR_1->_send_aux.pending_link.default_scheduler);

    VAR_1->_recv_aux.window = VAR_2;
}
