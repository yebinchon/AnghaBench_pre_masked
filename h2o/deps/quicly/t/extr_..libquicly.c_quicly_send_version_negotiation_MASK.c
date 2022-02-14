
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint8_t ;
struct sockaddr {int dummy; } ;
struct TYPE_13__ {int len; int * base; } ;
struct TYPE_14__ {TYPE_2__ data; int src; int dest; } ;
typedef TYPE_3__ quicly_datagram_t ;
struct TYPE_15__ {TYPE_1__* tls; int max_packet_size; TYPE_7__* packet_allocator; } ;
typedef TYPE_4__ quicly_context_t ;
struct TYPE_16__ {int len; int base; } ;
typedef TYPE_5__ ptls_iovec_t ;
struct TYPE_17__ {TYPE_3__* (* alloc_packet ) (TYPE_7__*,int ) ;} ;
struct TYPE_12__ {int (* random_bytes ) (int *,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,int ) ;
 int * FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,struct sockaddr*) ;
 TYPE_3__* FUNC_3 (TYPE_7__*,int ) ;
 int FUNC_4 (int *,int) ;

quicly_datagram_t *FUNC_5(quicly_context_t *VAR_2, struct sockaddr *VAR_3, ptls_iovec_t VAR_4,
                                                   struct sockaddr *VAR_5, ptls_iovec_t VAR_6)
{
    quicly_datagram_t *VAR_7;
    uint8_t *VAR_8;

    if ((VAR_7 = VAR_2->packet_allocator->alloc_packet(VAR_2->packet_allocator, VAR_2->max_packet_size)) == ((void*)0))
        return ((void*)0);
    FUNC_2(&VAR_7->dest, VAR_3);
    FUNC_2(&VAR_7->src, VAR_5);
    VAR_8 = VAR_7->data.base;


    VAR_2->tls->random_bytes(VAR_8, 1);
    *VAR_8 |= VAR_0;
    ++VAR_8;

    VAR_8 = FUNC_1(VAR_8, 0);

    *VAR_8++ = VAR_4.len;
    if (VAR_4.len != 0) {
        FUNC_0(VAR_8, VAR_4.base, VAR_4.len);
        VAR_8 += VAR_4.len;
    }
    *VAR_8++ = VAR_6.len;
    if (VAR_6.len != 0) {
        FUNC_0(VAR_8, VAR_6.base, VAR_6.len);
        VAR_8 += VAR_6.len;
    }

    VAR_8 = FUNC_1(VAR_8, VAR_1);

    VAR_7->data.len = VAR_8 - VAR_7->data.base;

    return VAR_7;
}
