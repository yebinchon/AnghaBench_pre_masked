
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int quicly_datagram_t ;
typedef int packets ;
struct TYPE_12__ {TYPE_2__* callbacks; TYPE_7__* ctx; int quic; } ;
typedef TYPE_3__ h2o_http3_conn_t ;
struct TYPE_14__ {TYPE_1__* quic; } ;
struct TYPE_13__ {int (* free_packet ) (TYPE_5__*,int *) ;} ;
struct TYPE_11__ {int (* destroy_connection ) (TYPE_3__*) ;} ;
struct TYPE_10__ {TYPE_5__* packet_allocator; } ;



 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_7__*,int *) ;
 int FUNC_4 (int ,int **,size_t*) ;
 int VAR_0 ;
 int FUNC_5 (TYPE_5__*,int *) ;
 int FUNC_6 (TYPE_5__*,int *) ;
 int FUNC_7 (TYPE_3__*) ;

int FUNC_8(h2o_http3_conn_t *VAR_1)
{
    quicly_datagram_t *VAR_2[16];
    size_t VAR_3, VAR_4;

    do {
        VAR_3 = sizeof(VAR_2) / sizeof(VAR_2[0]);
        int VAR_5 = FUNC_4(VAR_1->quic, VAR_2, &VAR_3);
        switch (VAR_5) {
        case 0:
            for (VAR_4 = 0; VAR_4 != VAR_3; ++VAR_4) {
                if (!FUNC_3(VAR_1->ctx, VAR_2[VAR_4])) {

                    break;
                }
                VAR_1->ctx->quic->packet_allocator->free_packet(VAR_1->ctx->quic->packet_allocator, VAR_2[VAR_4]);
            }
            for (; VAR_4 != VAR_3; ++VAR_4)
                VAR_1->ctx->quic->packet_allocator->free_packet(VAR_1->ctx->quic->packet_allocator, VAR_2[VAR_4]);
            break;
        case 128:
            VAR_1->callbacks->destroy_connection(VAR_1);
            return 0;
        default:
            FUNC_1(VAR_0, "quicly_send returned %d\n", VAR_5);
            FUNC_0();
        }
    } while (VAR_3 == sizeof(VAR_2) / sizeof(VAR_2[0]));

    FUNC_2(VAR_1);

    return 1;
}
