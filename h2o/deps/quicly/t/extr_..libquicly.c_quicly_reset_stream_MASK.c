
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ sender_state; int error_code; } ;
struct TYPE_8__ {TYPE_1__ rst; } ;
struct TYPE_9__ {TYPE_2__ _send_aux; int sendstate; int stream_id; int conn; } ;
typedef TYPE_3__ quicly_stream_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_3__*) ;
 int FUNC_8 (TYPE_3__*) ;

void FUNC_9(quicly_stream_t *VAR_2, int VAR_3)
{
    FUNC_2(FUNC_6(FUNC_3(VAR_2->conn), VAR_2->stream_id));
    FUNC_2(FUNC_1(VAR_3));
    FUNC_2(VAR_2->_send_aux.rst.sender_state == VAR_0);
    FUNC_2(!FUNC_5(&VAR_2->sendstate));


    FUNC_4(&VAR_2->sendstate);


    VAR_2->_send_aux.rst.sender_state = VAR_1;
    VAR_2->_send_aux.rst.error_code = FUNC_0(VAR_3);


    FUNC_8(VAR_2);
    FUNC_7(VAR_2);
}
