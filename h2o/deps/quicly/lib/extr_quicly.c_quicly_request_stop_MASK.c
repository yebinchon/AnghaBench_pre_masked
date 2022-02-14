
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ sender_state; int error_code; } ;
struct TYPE_8__ {TYPE_3__ stop_sending; } ;
struct TYPE_7__ {scalar_t__ eos; } ;
struct TYPE_10__ {TYPE_2__ _send_aux; TYPE_1__ recvstate; int stream_id; int conn; } ;
typedef TYPE_4__ quicly_stream_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (TYPE_4__*) ;

void FUNC_6(quicly_stream_t *VAR_3, int VAR_4)
{
    FUNC_2(FUNC_4(FUNC_3(VAR_3->conn), VAR_3->stream_id));
    FUNC_2(FUNC_1(VAR_4));


    if (VAR_3->recvstate.eos == VAR_2 && VAR_3->_send_aux.stop_sending.sender_state == VAR_0) {
        VAR_3->_send_aux.stop_sending.sender_state = VAR_1;
        VAR_3->_send_aux.stop_sending.error_code = FUNC_0(VAR_4);
        FUNC_5(VAR_3);
    }
}
