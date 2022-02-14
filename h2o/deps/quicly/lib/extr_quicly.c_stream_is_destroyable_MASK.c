
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sender_state; } ;
struct TYPE_6__ {TYPE_1__ rst; } ;
struct TYPE_7__ {TYPE_2__ _send_aux; int sendstate; int recvstate; } ;
typedef TYPE_3__ quicly_stream_t ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(quicly_stream_t *VAR_0)
{
    if (!FUNC_0(&VAR_0->recvstate))
        return 0;
    if (!FUNC_1(&VAR_0->sendstate))
        return 0;
    switch (VAR_0->_send_aux.rst.sender_state) {
    case 128:
    case 129:
        break;
    default:
        return 0;
    }
    return 1;
}
