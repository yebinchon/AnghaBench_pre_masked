
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_38__ TYPE_8__ ;
typedef struct TYPE_37__ TYPE_7__ ;
typedef struct TYPE_36__ TYPE_6__ ;
typedef struct TYPE_35__ TYPE_5__ ;
typedef struct TYPE_34__ TYPE_4__ ;
typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_25__ ;
typedef struct TYPE_30__ TYPE_24__ ;
typedef struct TYPE_29__ TYPE_1__ ;
typedef struct TYPE_28__ TYPE_14__ ;
typedef struct TYPE_27__ TYPE_12__ ;
typedef struct TYPE_26__ TYPE_11__ ;


typedef int uint8_t ;
struct init_ebpf_key_info_t {int * member_1; int * member_0; } ;
typedef int scid ;
struct TYPE_29__ {int encrypted; } ;
struct TYPE_32__ {TYPE_1__ dest; int src; } ;
struct TYPE_28__ {scalar_t__ len; } ;
struct TYPE_34__ {TYPE_2__ cid; TYPE_14__ token; } ;
typedef TYPE_4__ quicly_decoded_packet_t ;
typedef int quicly_datagram_t ;
struct TYPE_35__ {int is_retry; } ;
typedef TYPE_5__ quicly_address_token_plaintext_t ;
struct TYPE_36__ {int sa; } ;
typedef TYPE_6__ quicly_address_t ;
typedef int ptls_aead_context_t ;
struct TYPE_30__ {TYPE_12__* quic; int loop; } ;
struct TYPE_37__ {int send_retry; TYPE_24__ super; } ;
typedef TYPE_7__ h2o_http3_server_ctx_t ;
typedef int h2o_http3_ctx_t ;
typedef int h2o_http3_conn_t ;
struct TYPE_38__ {int quic_send_retry; int skip_tracing; } ;
typedef TYPE_8__ h2o_ebpf_map_value_t ;
struct TYPE_33__ {int conn_callbacks; } ;
struct TYPE_31__ {scalar_t__ max_connections; scalar_t__ max_quic_connections; TYPE_3__ quic; } ;
struct TYPE_27__ {TYPE_11__* packet_allocator; } ;
struct TYPE_26__ {int (* free_packet ) (TYPE_11__*,int *) ;} ;




 int FUNC_0 (int ) ;
 TYPE_25__ VAR_0 ;
 int FUNC_1 (TYPE_24__*,int *) ;
 int * FUNC_2 (TYPE_7__*,TYPE_6__*,TYPE_6__*,TYPE_4__*,TYPE_5__*,int ,int *) ;
 TYPE_8__ FUNC_3 (int ,int ,struct init_ebpf_key_info_t*) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int *,int) ;
 int FUNC_8 (int *,int) ;
 scalar_t__ FUNC_9 (TYPE_5__*,TYPE_14__) ;
 int * FUNC_10 (int *) ;
 int * FUNC_11 (TYPE_12__*,int *,int *,int ,int *,int ,int ,int ,int ) ;
 int FUNC_12 (TYPE_11__*,int *) ;
 scalar_t__ FUNC_13 (TYPE_7__*,int *,int ,int ,TYPE_5__*) ;

__attribute__((used)) static h2o_http3_conn_t *FUNC_14(h2o_http3_ctx_t *VAR_2, quicly_address_t *VAR_3, quicly_address_t *VAR_4,
                                         quicly_decoded_packet_t *VAR_5)
{
    h2o_http3_server_ctx_t *VAR_6 = (void *)VAR_2;
    struct init_ebpf_key_info_t VAR_7 = {&VAR_3->sa, &VAR_4->sa};
    h2o_ebpf_map_value_t VAR_8 = FUNC_3(VAR_6->super.loop, VAR_1, &VAR_7);
    quicly_address_token_plaintext_t *VAR_9 = ((void*)0), VAR_10;
    h2o_http3_conn_t *VAR_11;


    if (FUNC_4(0) >= VAR_0.max_connections || FUNC_5(0) >= VAR_0.max_quic_connections)
        return ((void*)0);


    if (VAR_5->token.len != 0) {
        if (FUNC_9(&VAR_10, VAR_5->token) == 0 &&
            FUNC_13(VAR_6, &VAR_4->sa, VAR_5->cid.src, VAR_5->cid.dest.encrypted, &VAR_10))
            VAR_9 = &VAR_10;
    }


    if (VAR_9 == ((void*)0) || !VAR_9->is_retry) {
        int VAR_12 = VAR_6->send_retry;
        switch (VAR_8.quic_send_retry) {
        case 128:
            VAR_12 = 1;
            break;
        case 129:
            VAR_12 = 0;
            break;
        default:
            break;
        }
        if (VAR_12) {
            uint8_t VAR_13[16], VAR_14;
            FUNC_8(VAR_13, sizeof(VAR_13));
            ptls_aead_context_t *VAR_15 = FUNC_10(&VAR_14);
            quicly_datagram_t *VAR_16 = FUNC_11(VAR_6->super.quic, VAR_15, &VAR_4->sa, VAR_5->cid.src, &VAR_3->sa,
                                                      FUNC_7(VAR_13, sizeof(VAR_13)), VAR_5->cid.dest.encrypted,
                                                      FUNC_7(&VAR_14, 1), FUNC_7(((void*)0), 0));
            FUNC_0(VAR_16 != ((void*)0));
            FUNC_1(&VAR_6->super, VAR_16);
            VAR_6->super.quic->packet_allocator->free_packet(VAR_6->super.quic->packet_allocator, VAR_16);
            return ((void*)0);
        }
    }


    if ((VAR_11 = FUNC_2(VAR_6, VAR_3, VAR_4, VAR_5, VAR_9, VAR_8.skip_tracing,
                                        &VAR_0.quic.conn_callbacks)) == ((void*)0))
        return ((void*)0);
    FUNC_4(1);
    FUNC_5(1);
    FUNC_6(1);
    return VAR_11;
}
