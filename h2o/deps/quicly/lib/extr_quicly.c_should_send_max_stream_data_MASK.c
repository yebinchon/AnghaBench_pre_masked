
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int window; } ;
struct TYPE_7__ {scalar_t__ eos; int data_off; } ;
struct TYPE_6__ {int max_stream_data_sender; } ;
struct TYPE_9__ {TYPE_3__ _recv_aux; TYPE_2__ recvstate; TYPE_1__ _send_aux; } ;
typedef TYPE_4__ quicly_stream_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int ,int) ;

__attribute__((used)) static int FUNC_1(quicly_stream_t *VAR_1)
{
    if (VAR_1->recvstate.eos != VAR_0)
        return 0;
    return FUNC_0(&VAR_1->_send_aux.max_stream_data_sender, VAR_1->recvstate.data_off,
                                            VAR_1->_recv_aux.window, 512);
}
