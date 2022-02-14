
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_49__ TYPE_9__ ;
typedef struct TYPE_48__ TYPE_8__ ;
typedef struct TYPE_47__ TYPE_7__ ;
typedef struct TYPE_46__ TYPE_6__ ;
typedef struct TYPE_45__ TYPE_5__ ;
typedef struct TYPE_44__ TYPE_4__ ;
typedef struct TYPE_43__ TYPE_3__ ;
typedef struct TYPE_42__ TYPE_2__ ;
typedef struct TYPE_41__ TYPE_20__ ;
typedef struct TYPE_40__ TYPE_1__ ;
typedef struct TYPE_39__ TYPE_17__ ;
typedef struct TYPE_38__ TYPE_16__ ;
typedef struct TYPE_37__ TYPE_15__ ;
typedef struct TYPE_36__ TYPE_14__ ;
typedef struct TYPE_35__ TYPE_13__ ;
typedef struct TYPE_34__ TYPE_12__ ;
typedef struct TYPE_33__ TYPE_11__ ;
typedef struct TYPE_32__ TYPE_10__ ;


typedef int quicly_sentmap_iter_t ;
struct TYPE_35__ {int first_byte; TYPE_12__* cipher; } ;
struct TYPE_42__ {int * member_2; int * member_1; int * member_0; } ;
struct TYPE_40__ {int member_1; int * member_0; } ;
struct TYPE_38__ {size_t member_3; size_t num_packets; TYPE_13__ current; int ** member_2; TYPE_2__ member_1; TYPE_1__ member_0; } ;
typedef TYPE_16__ quicly_send_context_t ;
typedef int quicly_datagram_t ;
struct TYPE_36__ {scalar_t__ alarm_at; } ;
struct TYPE_37__ {scalar_t__ send_ack_at; TYPE_14__ loss; } ;
struct TYPE_43__ {int len; int cid; } ;
struct TYPE_44__ {TYPE_3__ cid; } ;
struct TYPE_45__ {scalar_t__ state; TYPE_4__ peer; int ctx; } ;
struct TYPE_39__ {TYPE_15__ egress; TYPE_11__* initial; TYPE_9__* handshake; TYPE_7__* application; TYPE_5__ super; } ;
typedef TYPE_17__ quicly_conn_t ;
struct TYPE_34__ {int * aead; } ;
struct TYPE_48__ {TYPE_12__ egress; } ;
struct TYPE_49__ {TYPE_8__ cipher; } ;
struct TYPE_46__ {TYPE_12__ egress; } ;
struct TYPE_47__ {TYPE_6__ cipher; scalar_t__ one_rtt_writable; } ;
struct TYPE_41__ {scalar_t__ packet_number; scalar_t__ sent_at; } ;
struct TYPE_32__ {TYPE_12__ egress; } ;
struct TYPE_33__ {TYPE_10__ cipher; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_17__*,int ,scalar_t__,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_17__*,int) ;
 int FUNC_4 (TYPE_17__*,TYPE_16__*,int ) ;
 int FUNC_5 (TYPE_17__*,int ,int ) ;
 int FUNC_6 (TYPE_17__*,TYPE_16__*) ;
 scalar_t__ FUNC_7 (TYPE_17__*) ;
 int FUNC_8 (TYPE_17__*,int *) ;
 scalar_t__ VAR_7 ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (TYPE_17__*) ;
 TYPE_20__* FUNC_11 (int *) ;
 int FUNC_12 (TYPE_17__*,TYPE_16__*) ;
 int FUNC_13 (int ) ;

int FUNC_14(quicly_conn_t *VAR_8, quicly_datagram_t **VAR_9, size_t *VAR_10)
{
    quicly_send_context_t VAR_11 = {{((void*)0), -1}, {((void*)0), ((void*)0), ((void*)0)}, VAR_9, *VAR_10};
    int VAR_12;

    FUNC_13(VAR_8->super.ctx);


    if (VAR_7 < FUNC_10(VAR_8)) {
        *VAR_10 = 0;
        return 0;
    }

    FUNC_0(VAR_5, VAR_8, FUNC_9(), VAR_8->super.state,
                 FUNC_1(VAR_8->super.peer.cid.cid, VAR_8->super.peer.cid.len));

    if (VAR_8->super.state >= VAR_4) {

        quicly_sentmap_iter_t VAR_13;
        FUNC_8(VAR_8, &VAR_13);
        if (FUNC_11(&VAR_13)->packet_number == VAR_6)
            return VAR_0;
        if (VAR_8->super.state == VAR_4 && VAR_8->egress.send_ack_at <= VAR_7) {
            FUNC_5(VAR_8, 0, 0);

            if (VAR_8->application != ((void*)0) && VAR_8->application->one_rtt_writable) {
                VAR_11.current.cipher = &VAR_8->application->cipher.egress;
                VAR_11.current.first_byte = VAR_3;
            } else if (VAR_8->handshake != ((void*)0) && (VAR_11.current.cipher = &VAR_8->handshake->cipher.egress)->aead != ((void*)0)) {
                VAR_11.current.first_byte = VAR_1;
            } else {
                VAR_11.current.cipher = &VAR_8->initial->cipher.egress;
                FUNC_2(VAR_11.current.cipher->aead != ((void*)0));
                VAR_11.current.first_byte = VAR_2;
            }
            if ((VAR_12 = FUNC_12(VAR_8, &VAR_11)) != 0)
                return VAR_12;
            if ((VAR_12 = FUNC_4(VAR_8, &VAR_11, 0)) != 0)
                return VAR_12;
        }
        VAR_8->egress.send_ack_at = FUNC_11(&VAR_13)->sent_at + FUNC_7(VAR_8);
        FUNC_2(VAR_8->egress.send_ack_at > VAR_7);
        *VAR_10 = VAR_11.num_packets;
        return 0;
    }


    if ((VAR_12 = FUNC_6(VAR_8, &VAR_11)) != 0)
        return VAR_12;




    if (VAR_11.num_packets == 0 && VAR_8->egress.loss.alarm_at <= VAR_7) {
        FUNC_2(VAR_8->egress.loss.alarm_at == VAR_7);
        if ((VAR_12 = FUNC_6(VAR_8, &VAR_11)) != 0)
            return VAR_12;
    }
    FUNC_3(VAR_8, 1);

    *VAR_10 = VAR_11.num_packets;
    return VAR_12;
}
