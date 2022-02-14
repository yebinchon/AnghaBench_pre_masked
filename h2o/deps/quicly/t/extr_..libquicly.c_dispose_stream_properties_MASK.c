
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int default_scheduler; int control; } ;
struct TYPE_6__ {TYPE_1__ pending_link; int max_stream_data_sender; } ;
struct TYPE_7__ {TYPE_2__ _send_aux; int recvstate; int sendstate; } ;
typedef TYPE_3__ quicly_stream_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(quicly_stream_t *VAR_0)
{
    FUNC_3(&VAR_0->sendstate);
    FUNC_2(&VAR_0->recvstate);
    FUNC_1(&VAR_0->_send_aux.max_stream_data_sender);
    FUNC_0(&VAR_0->_send_aux.pending_link.control);
    FUNC_0(&VAR_0->_send_aux.pending_link.default_scheduler);
}
