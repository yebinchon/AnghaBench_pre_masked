
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t data_off; } ;
struct TYPE_7__ {scalar_t__ stream_id; TYPE_1__ recvstate; } ;
typedef TYPE_2__ quicly_stream_t ;


 int FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;

void FUNC_2(quicly_stream_t *VAR_0, size_t VAR_1)
{
    VAR_0->recvstate.data_off += VAR_1;
    if (VAR_0->stream_id >= 0) {
        if (FUNC_1(VAR_0))
            FUNC_0(VAR_0);
    }
}
