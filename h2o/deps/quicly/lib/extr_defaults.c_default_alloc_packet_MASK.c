
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef int quicly_packet_allocator_t ;
struct TYPE_5__ {int * base; } ;
struct TYPE_6__ {TYPE_1__ data; } ;
typedef TYPE_2__ quicly_datagram_t ;


 TYPE_2__* FUNC_0 (int) ;

__attribute__((used)) static quicly_datagram_t *FUNC_1(quicly_packet_allocator_t *VAR_0, size_t VAR_1)
{
    quicly_datagram_t *VAR_2;

    if ((VAR_2 = FUNC_0(sizeof(*VAR_2) + VAR_1)) == ((void*)0))
        return ((void*)0);
    VAR_2->data.base = (uint8_t *)VAR_2 + sizeof(*VAR_2);

    return VAR_2;
}
