
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* ranges; } ;
struct TYPE_12__ {scalar_t__ data_off; TYPE_1__ received; } ;
struct TYPE_10__ {TYPE_5__ recvstate; } ;
typedef TYPE_3__ quicly_stream_t ;
typedef int ptls_iovec_t ;
struct TYPE_11__ {size_t off; int base; } ;
typedef TYPE_4__ ptls_buffer_t ;
struct TYPE_9__ {scalar_t__ end; } ;


 int FUNC_0 (int ,size_t) ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;

ptls_iovec_t FUNC_2(quicly_stream_t *VAR_0, ptls_buffer_t *VAR_1)
{
    size_t VAR_2;

    if (FUNC_1(&VAR_0->recvstate)) {
        VAR_2 = VAR_1->off;
    } else if (VAR_0->recvstate.data_off < VAR_0->recvstate.received.ranges[0].end) {
        VAR_2 = VAR_0->recvstate.received.ranges[0].end - VAR_0->recvstate.data_off;
    } else {
        VAR_2 = 0;
    }

    return FUNC_0(VAR_1->base, VAR_2);
}
