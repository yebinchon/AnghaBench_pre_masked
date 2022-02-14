
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


struct sockaddr {int dummy; } ;
struct TYPE_13__ {int* base; int len; } ;
struct TYPE_14__ {TYPE_2__ data; int src; int dest; } ;
typedef TYPE_3__ quicly_datagram_t ;
struct TYPE_15__ {TYPE_5__* packet_allocator; TYPE_7__* cid_encryptor; TYPE_1__* tls; } ;
typedef TYPE_4__ quicly_context_t ;
struct TYPE_17__ {int (* generate_stateless_reset_token ) (TYPE_7__*,int*,void const*) ;} ;
struct TYPE_16__ {int (* free_packet ) (TYPE_5__*,TYPE_3__*) ;TYPE_3__* (* alloc_packet ) (TYPE_5__*,int) ;} ;
struct TYPE_12__ {int (* random_bytes ) (int*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct sockaddr*) ;
 TYPE_3__* FUNC_1 (TYPE_5__*,int) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (TYPE_7__*,int*,void const*) ;
 int FUNC_4 (TYPE_5__*,TYPE_3__*) ;

quicly_datagram_t *FUNC_5(quicly_context_t *VAR_4, struct sockaddr *VAR_5, struct sockaddr *VAR_6,
                                               const void *VAR_7)
{
    quicly_datagram_t *VAR_8;


    if ((VAR_8 = VAR_4->packet_allocator->alloc_packet(VAR_4->packet_allocator, VAR_2)) == ((void*)0))
        return ((void*)0);
    FUNC_0(&VAR_8->dest, VAR_5);
    FUNC_0(&VAR_8->src, VAR_6);


    VAR_4->tls->random_bytes(VAR_8->data.base, VAR_2 - VAR_3);
    VAR_8->data.base[0] = VAR_1 | (VAR_8->data.base[0] & ~VAR_0);
    if (!VAR_4->cid_encryptor->generate_stateless_reset_token(
            VAR_4->cid_encryptor, VAR_8->data.base + VAR_2 - VAR_3,
            VAR_7)) {
        VAR_4->packet_allocator->free_packet(VAR_4->packet_allocator, VAR_8);
        return ((void*)0);
    }
    VAR_8->data.len = VAR_2;

    return VAR_8;
}
