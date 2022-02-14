
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int quicly_datagram_t ;
struct TYPE_4__ {TYPE_1__* packet_allocator; } ;
struct TYPE_3__ {int (* free_packet ) (TYPE_1__*,int *) ;} ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;

void FUNC_1(quicly_datagram_t **VAR_1, size_t VAR_2)
{
    size_t VAR_3;
    for (VAR_3 = 0; VAR_3 != VAR_2; ++VAR_3)
        VAR_0.packet_allocator->free_packet(VAR_0.packet_allocator, VAR_1[VAR_3]);
}
