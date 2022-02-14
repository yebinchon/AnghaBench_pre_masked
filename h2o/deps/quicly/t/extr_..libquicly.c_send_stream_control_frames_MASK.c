
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_11__ ;
typedef struct TYPE_20__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_29__ {int size_inflight; } ;
struct TYPE_27__ {scalar_t__ sender_state; int error_code; } ;
struct TYPE_22__ {scalar_t__ sender_state; int error_code; } ;
struct TYPE_28__ {TYPE_6__ rst; int max_stream_data_sender; TYPE_1__ stop_sending; } ;
struct TYPE_24__ {scalar_t__ window; } ;
struct TYPE_23__ {scalar_t__ data_off; } ;
struct TYPE_30__ {TYPE_8__ sendstate; TYPE_7__ _send_aux; int stream_id; int conn; TYPE_3__ _recv_aux; TYPE_2__ recvstate; } ;
typedef TYPE_9__ quicly_stream_t ;
struct TYPE_25__ {int args; int stream_id; } ;
struct TYPE_26__ {TYPE_4__ max_stream_data; } ;
struct TYPE_20__ {TYPE_5__ data; } ;
typedef TYPE_10__ quicly_sent_t ;
struct TYPE_21__ {int dst; } ;
typedef TYPE_11__ quicly_send_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,TYPE_9__*,scalar_t__) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,TYPE_11__*,int ,TYPE_10__**,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (TYPE_9__*,scalar_t__*,TYPE_11__*,int ,int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ,scalar_t__) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int *,scalar_t__,int *) ;
 scalar_t__ FUNC_8 (TYPE_9__*) ;

__attribute__((used)) static int FUNC_9(quicly_stream_t *VAR_8, quicly_send_context_t *VAR_9)
{
    int VAR_10;


    if (VAR_8->_send_aux.stop_sending.sender_state == VAR_3) {

        if ((VAR_10 = FUNC_2(VAR_8, &VAR_8->_send_aux.stop_sending.sender_state, VAR_9,
                                               VAR_4, VAR_7)) != 0)
            return VAR_10;
        VAR_9->dst = FUNC_6(VAR_9->dst, VAR_8->stream_id, VAR_8->_send_aux.stop_sending.error_code);
    }


    if (FUNC_8(VAR_8)) {
        uint64_t VAR_11 = VAR_8->recvstate.data_off + VAR_8->_recv_aux.window;
        quicly_sent_t *VAR_12;

        if ((VAR_10 = FUNC_1(VAR_8->conn, VAR_9, VAR_1, &VAR_12,
                                                VAR_5)) != 0)
            return VAR_10;

        VAR_9->dst = FUNC_4(VAR_9->dst, VAR_8->stream_id, VAR_11);

        VAR_12->data.max_stream_data.stream_id = VAR_8->stream_id;
        FUNC_7(&VAR_8->_send_aux.max_stream_data_sender, VAR_11, &VAR_12->data.max_stream_data.args);
        FUNC_0(VAR_0, VAR_8->conn, FUNC_3(), VAR_8, VAR_11);
    }


    if (VAR_8->_send_aux.rst.sender_state == VAR_3) {
        if ((VAR_10 = FUNC_2(VAR_8, &VAR_8->_send_aux.rst.sender_state, VAR_9, VAR_2,
                                               VAR_6)) != 0)
            return VAR_10;
        VAR_9->dst = FUNC_5(VAR_9->dst, VAR_8->stream_id, VAR_8->_send_aux.rst.error_code,
                                                VAR_8->sendstate.size_inflight);
    }

    return 0;
}
