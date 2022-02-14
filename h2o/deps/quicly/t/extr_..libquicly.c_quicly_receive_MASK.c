
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_105__ TYPE_9__ ;
typedef struct TYPE_104__ TYPE_8__ ;
typedef struct TYPE_103__ TYPE_7__ ;
typedef struct TYPE_102__ TYPE_6__ ;
typedef struct TYPE_101__ TYPE_5__ ;
typedef struct TYPE_100__ TYPE_4__ ;
typedef struct TYPE_99__ TYPE_44__ ;
typedef struct TYPE_98__ TYPE_42__ ;
typedef struct TYPE_97__ TYPE_3__ ;
typedef struct TYPE_96__ TYPE_39__ ;
typedef struct TYPE_95__ TYPE_35__ ;
typedef struct TYPE_94__ TYPE_34__ ;
typedef struct TYPE_93__ TYPE_33__ ;
typedef struct TYPE_92__ TYPE_32__ ;
typedef struct TYPE_91__ TYPE_31__ ;
typedef struct TYPE_90__ TYPE_30__ ;
typedef struct TYPE_89__ TYPE_2__ ;
typedef struct TYPE_88__ TYPE_29__ ;
typedef struct TYPE_87__ TYPE_28__ ;
typedef struct TYPE_86__ TYPE_27__ ;
typedef struct TYPE_85__ TYPE_26__ ;
typedef struct TYPE_84__ TYPE_25__ ;
typedef struct TYPE_83__ TYPE_24__ ;
typedef struct TYPE_82__ TYPE_23__ ;
typedef struct TYPE_81__ TYPE_22__ ;
typedef struct TYPE_80__ TYPE_21__ ;
typedef struct TYPE_79__ TYPE_20__ ;
typedef struct TYPE_78__ TYPE_1__ ;
typedef struct TYPE_77__ TYPE_19__ ;
typedef struct TYPE_76__ TYPE_18__ ;
typedef struct TYPE_75__ TYPE_17__ ;
typedef struct TYPE_74__ TYPE_16__ ;
typedef struct TYPE_73__ TYPE_15__ ;
typedef struct TYPE_72__ TYPE_14__ ;
typedef struct TYPE_71__ TYPE_13__ ;
typedef struct TYPE_70__ TYPE_12__ ;
typedef struct TYPE_69__ TYPE_11__ ;
typedef struct TYPE_68__ TYPE_10__ ;


typedef int uint64_t ;
struct st_quicly_pn_space_t {int next_expected_packet_number; } ;
struct sockaddr {int sa_family; } ;
struct TYPE_80__ {int size; } ;
struct TYPE_81__ {TYPE_21__ vecs; } ;
struct TYPE_91__ {TYPE_22__ egress; } ;
typedef TYPE_31__ quicly_streambuf_t ;
struct TYPE_92__ {TYPE_31__* data; } ;
typedef TYPE_32__ quicly_stream_t ;
typedef int quicly_stream_id_t ;
struct TYPE_73__ {int* base; scalar_t__ len; } ;
struct TYPE_95__ {int* base; scalar_t__ len; } ;
struct TYPE_78__ {int len; int base; } ;
struct TYPE_89__ {TYPE_1__ encrypted; } ;
struct TYPE_101__ {TYPE_35__ src; TYPE_2__ dest; } ;
struct TYPE_100__ {scalar_t__ len; int* base; } ;
struct TYPE_93__ {scalar_t__ version; TYPE_15__ octets; TYPE_5__ cid; TYPE_4__ token; int encrypted_off; } ;
typedef TYPE_33__ quicly_decoded_packet_t ;
struct TYPE_88__ {int alarm_at; } ;
struct TYPE_90__ {TYPE_29__ loss; int send_ack_at; int packet_number; int sentmap; } ;
struct TYPE_82__ {int sa_family; } ;
struct TYPE_99__ {TYPE_23__ sa; } ;
struct TYPE_86__ {TYPE_44__ address; } ;
struct TYPE_84__ {int disable_active_migration; } ;
struct TYPE_74__ {int validated; } ;
struct TYPE_98__ {int* len; int* cid; } ;
struct TYPE_85__ {TYPE_25__ transport_params; TYPE_16__ address_validation; TYPE_42__ cid; } ;
struct TYPE_71__ {int received; } ;
struct TYPE_70__ {int received; } ;
struct TYPE_72__ {TYPE_13__ num_bytes; TYPE_12__ num_packets; } ;
struct TYPE_87__ {int state; TYPE_27__ host; TYPE_26__ peer; TYPE_14__ stats; int ctx; } ;
struct TYPE_83__ {int handshake_scheduled_for_discard; int tls; } ;
struct TYPE_97__ {int* base; scalar_t__ len; } ;
struct TYPE_94__ {TYPE_30__ egress; TYPE_28__ super; TYPE_24__ crypto; TYPE_20__* handshake; TYPE_17__* initial; TYPE_11__* application; TYPE_42__ retry_odcid; TYPE_3__ token; } ;
typedef TYPE_34__ quicly_conn_t ;
typedef TYPE_35__ ptls_iovec_t ;
typedef int ptls_cipher_context_t ;
typedef int ptls_aead_context_t ;
struct TYPE_104__ {int * one_rtt; int * zero_rtt; } ;
struct TYPE_105__ {int ** aead; TYPE_8__ header_protection; } ;
struct TYPE_103__ {int * aead; int * header_protection; } ;
struct TYPE_96__ {int * aead; int * header_protection; } ;
struct TYPE_102__ {TYPE_39__ ingress; TYPE_39__ egress; } ;
struct TYPE_76__ {int * aead; } ;
struct TYPE_77__ {TYPE_18__ egress; TYPE_7__ ingress; } ;
struct TYPE_79__ {TYPE_19__ cipher; } ;
struct TYPE_75__ {TYPE_6__ cipher; } ;
struct TYPE_68__ {TYPE_9__ ingress; } ;
struct TYPE_69__ {TYPE_10__ cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;




 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int) ;

 int VAR_6 ;



 int FUNC_1 (int ,TYPE_34__*,int ,int*,...) ;
 int FUNC_2 (int ,int ) ;

 int VAR_7 ;

 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_34__*,int ) ;
 TYPE_35__ FUNC_5 (int *,int **,int *,TYPE_33__*,int *) ;
 int VAR_12 ;
 int FUNC_6 (TYPE_34__*) ;
 int FUNC_7 (TYPE_34__*,unsigned int) ;
 int FUNC_8 (TYPE_39__*) ;
 int FUNC_9 (int*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (TYPE_34__*,size_t,int*,scalar_t__,int *,int*) ;
 int FUNC_12 (TYPE_34__*) ;
 int FUNC_13 (TYPE_34__*,TYPE_33__*) ;
 int FUNC_14 (TYPE_34__*,int,int ,char*) ;
 scalar_t__ FUNC_15 (TYPE_34__*,TYPE_33__*) ;
 int* FUNC_16 (scalar_t__) ;
 int FUNC_17 (int*,int*,scalar_t__) ;
 int VAR_13 ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 TYPE_35__ FUNC_20 (int*,int*) ;
 int FUNC_21 (TYPE_42__*,TYPE_35__) ;
 TYPE_32__* FUNC_22 (TYPE_34__*,int ) ;
 int FUNC_23 (TYPE_34__*) ;
 int * FUNC_24 (int *,int ) ;
 int FUNC_25 (int *,int ) ;
 int FUNC_26 (int *,int ,int ,size_t const) ;
 int FUNC_27 (TYPE_34__*,struct st_quicly_pn_space_t*,int ,int,size_t) ;
 int FUNC_28 (TYPE_44__*,struct sockaddr*) ;
 int FUNC_29 (TYPE_42__*,TYPE_35__) ;
 int FUNC_30 (int ,TYPE_39__*,TYPE_39__*,TYPE_35__,int) ;
 int FUNC_31 (TYPE_34__*) ;
 int FUNC_32 (TYPE_34__*,int) ;
 int FUNC_33 (TYPE_34__*) ;
 int FUNC_34 (int ) ;

int FUNC_35(quicly_conn_t *VAR_14, struct sockaddr *VAR_15, struct sockaddr *VAR_16, quicly_decoded_packet_t *VAR_17)
{
    ptls_cipher_context_t *VAR_18;
    ptls_aead_context_t **VAR_19;
    struct st_quicly_pn_space_t **VAR_20;
    size_t VAR_21;
    ptls_iovec_t VAR_22;
    uint64_t VAR_23, VAR_24 = VAR_4;
    int VAR_25, VAR_26;

    FUNC_34(VAR_14->super.ctx);

    FUNC_1(VAR_11, VAR_14, FUNC_18(), FUNC_2(VAR_17->cid.dest.encrypted.base, VAR_17->cid.dest.encrypted.len),
                 VAR_17->octets.base, VAR_17->octets.len);

    if (FUNC_15(VAR_14, VAR_17)) {
        VAR_26 = FUNC_12(VAR_14);
        goto Exit;
    }



    switch (VAR_14->super.state) {
    case 129:
        VAR_14->super.state = 128;
        VAR_14->egress.send_ack_at = 0;
        VAR_26 = 0;
        goto Exit;
    case 128:
        VAR_26 = 0;
        goto Exit;
    default:
        break;
    }

    if (FUNC_0(VAR_17->octets.base[0])) {
        if (VAR_14->super.state == VAR_8) {
            if (VAR_17->version == 0)
                return FUNC_13(VAR_14, VAR_17);
        }
        switch (VAR_17->octets.base[0] & VAR_6) {
        case 130: {

            if (VAR_17->token.len >= VAR_5) {
                VAR_26 = 134;
                goto Exit;
            }
            ptls_iovec_t VAR_27 = FUNC_20(VAR_17->octets.base + VAR_17->encrypted_off,
                                                 VAR_17->token.base - (VAR_17->octets.base + VAR_17->encrypted_off));
            if (!FUNC_21(&VAR_14->super.peer.cid, VAR_27)) {
                VAR_26 = 134;
                goto Exit;
            }
            if (FUNC_21(&VAR_14->super.peer.cid, VAR_17->cid.src)) {
                VAR_26 = 134;
                goto Exit;
            }

            if (VAR_14->retry_odcid.len != 0) {
                VAR_26 = 134;
                goto Exit;
            }

            FUNC_9(VAR_14->token.base);
            if ((VAR_14->token.base = FUNC_16(VAR_17->token.len)) == ((void*)0)) {
                VAR_26 = VAR_2;
                goto Exit;
            }
            FUNC_17(VAR_14->token.base, VAR_17->token.base, VAR_17->token.len);
            VAR_14->token.len = VAR_17->token.len;
            VAR_14->retry_odcid = VAR_14->super.peer.cid;

            FUNC_29(&VAR_14->super.peer.cid, VAR_17->cid.src);

            FUNC_8(&VAR_14->initial->cipher.ingress);
            FUNC_8(&VAR_14->initial->cipher.egress);
            if ((VAR_26 = FUNC_30(FUNC_10(VAR_14->super.ctx), &VAR_14->initial->cipher.ingress,
                                                &VAR_14->initial->cipher.egress,
                                                FUNC_20(VAR_14->super.peer.cid.cid, VAR_14->super.peer.cid.len), 1)) != 0)
                goto Exit;

            VAR_26 = FUNC_7(VAR_14, ~0u);
            goto Exit;
        } break;
        case 131:
            if (VAR_14->initial == ((void*)0) || (VAR_18 = VAR_14->initial->cipher.ingress.header_protection) == ((void*)0)) {
                VAR_26 = 134;
                goto Exit;
            }

            if (VAR_14->super.state == VAR_8) {
                FUNC_3(FUNC_23(VAR_14));
                FUNC_17(VAR_14->super.peer.cid.cid, VAR_17->cid.src.base, VAR_17->cid.src.len);
                VAR_14->super.peer.cid.len = VAR_17->cid.src.len;
            }
            VAR_19 = &VAR_14->initial->cipher.ingress.aead;
            VAR_20 = (void *)&VAR_14->initial;
            VAR_21 = 135;
            break;
        case 132:
            if (VAR_14->handshake == ((void*)0) || (VAR_18 = VAR_14->handshake->cipher.ingress.header_protection) == ((void*)0)) {
                VAR_26 = 134;
                goto Exit;
            }
            VAR_19 = &VAR_14->handshake->cipher.ingress.aead;
            VAR_20 = (void *)&VAR_14->handshake;
            VAR_21 = 136;
            break;
        case 133:
            if (FUNC_23(VAR_14)) {
                VAR_26 = 134;
                goto Exit;
            }
            if (VAR_14->application == ((void*)0) ||
                (VAR_18 = VAR_14->application->cipher.ingress.header_protection.zero_rtt) == ((void*)0)) {
                VAR_26 = 134;
                goto Exit;
            }
            VAR_19 = &VAR_14->application->cipher.ingress.aead[0];
            VAR_20 = (void *)&VAR_14->application;
            VAR_21 = VAR_3;
            break;
        default:
            VAR_26 = 134;
            goto Exit;
        }
    } else {

        if (VAR_14->application == ((void*)0) ||
            (VAR_18 = VAR_14->application->cipher.ingress.header_protection.one_rtt) == ((void*)0)) {
            VAR_26 = 134;
            goto Exit;
        }
        VAR_19 = VAR_14->application->cipher.ingress.aead;
        VAR_20 = (void *)&VAR_14->application;
        VAR_21 = 137;
    }


    if ((VAR_22 = FUNC_5(VAR_18, VAR_19, &(*VAR_20)->next_expected_packet_number, VAR_17, &VAR_23)).base == ((void*)0)) {
        VAR_26 = 134;
        goto Exit;
    }
    if (VAR_22.len == 0) {
        VAR_26 = VAR_9;
        goto Exit;
    }

    FUNC_1(VAR_1, VAR_14, VAR_23, VAR_22.base, VAR_22.len);
    FUNC_1(VAR_10, VAR_14, FUNC_18(), &VAR_23);


    if (VAR_14->super.state == VAR_8)
        VAR_14->super.state = VAR_7;
    VAR_14->super.stats.num_packets.received += 1;
    VAR_14->super.stats.num_bytes.received += VAR_17->octets.len;


    if (VAR_21 == 136 && VAR_14->initial != ((void*)0)) {


        if ((VAR_26 = FUNC_6(VAR_14)) != 0)
            goto Exit;
        FUNC_33(VAR_14);
        VAR_14->super.peer.address_validation.validated = 1;
    }


    if ((VAR_26 = FUNC_11(VAR_14, VAR_21, VAR_22.base, VAR_22.len, &VAR_24, &VAR_25)) != 0)
        goto Exit;
    if (*VAR_20 != ((void*)0)) {
        if ((VAR_26 = FUNC_27(VAR_14, *VAR_20, VAR_23, VAR_25, VAR_21)) != 0)
            goto Exit;
    }


    switch (VAR_21) {
    case 135:
        FUNC_3(VAR_14->initial != ((void*)0));
        if (FUNC_23(VAR_14) && VAR_14->handshake != ((void*)0) && VAR_14->handshake->cipher.egress.aead != ((void*)0)) {
            if ((VAR_26 = FUNC_6(VAR_14)) != 0)
                goto Exit;
            FUNC_33(VAR_14);
        }
        break;
    case 136:


        if (!VAR_14->crypto.handshake_scheduled_for_discard && FUNC_19(VAR_14->crypto.tls)) {
            quicly_stream_t *VAR_28 = FUNC_22(VAR_14, -(quicly_stream_id_t)(1 + 136));
            FUNC_3(VAR_28 != ((void*)0));
            quicly_streambuf_t *VAR_29 = VAR_28->data;
            if (VAR_29->egress.vecs.size == 0) {
                if ((VAR_26 = FUNC_26(&VAR_14->egress.sentmap, VAR_14->egress.packet_number, VAR_13,
                                                  136)) != 0)
                    goto Exit;
                if (FUNC_24(&VAR_14->egress.sentmap, VAR_12) == ((void*)0)) {
                    VAR_26 = VAR_2;
                    goto Exit;
                }
                FUNC_25(&VAR_14->egress.sentmap, 0);
                ++VAR_14->egress.packet_number;
                VAR_14->crypto.handshake_scheduled_for_discard = 1;
            }
        }

        if (FUNC_23(VAR_14) && VAR_14->super.host.address.sa.sa_family == VAR_0 && VAR_15 != ((void*)0) &&
            VAR_15->sa_family != VAR_0 && FUNC_19(VAR_14->crypto.tls) &&
            VAR_14->super.peer.transport_params.disable_active_migration)
            FUNC_28(&VAR_14->super.host.address, VAR_15);
        break;
    case 137:
        if (!VAR_25 && FUNC_31(VAR_14))
            VAR_14->egress.send_ack_at = 0;
        break;
    default:
        break;
    }

    FUNC_32(VAR_14, 1);

Exit:
    switch (VAR_26) {
    case 0:




        if (VAR_14->egress.loss.alarm_at < VAR_13)
            VAR_14->egress.loss.alarm_at = VAR_13;
        FUNC_4(VAR_14, 0);
        break;
    case 134:
        break;
    default:
        FUNC_14(VAR_14, VAR_26, VAR_24, "");
        VAR_26 = 0;
        break;
    }
    return VAR_26;
}
