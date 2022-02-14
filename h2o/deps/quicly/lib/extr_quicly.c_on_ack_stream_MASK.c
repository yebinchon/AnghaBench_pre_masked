
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_26__ TYPE_8__ ;
typedef struct TYPE_25__ TYPE_7__ ;
typedef struct TYPE_24__ TYPE_6__ ;
typedef struct TYPE_23__ TYPE_5__ ;
typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;
typedef struct TYPE_18__ TYPE_12__ ;


struct TYPE_22__ {scalar_t__ sender_state; } ;
struct TYPE_23__ {TYPE_4__ rst; } ;
struct TYPE_24__ {TYPE_5__ _send_aux; int sendstate; TYPE_1__* callbacks; } ;
typedef TYPE_6__ quicly_stream_t ;
typedef scalar_t__ quicly_sentmap_event_t ;
struct TYPE_18__ {scalar_t__ start; scalar_t__ end; } ;
struct TYPE_20__ {TYPE_12__ args; int stream_id; } ;
struct TYPE_21__ {TYPE_2__ stream; } ;
struct TYPE_25__ {TYPE_3__ data; } ;
typedef TYPE_7__ quicly_sent_t ;
struct TYPE_26__ {scalar_t__ bytes_in_flight; } ;
typedef TYPE_8__ quicly_sent_packet_t ;
typedef int quicly_conn_t ;
struct TYPE_19__ {int (* on_send_shift ) (TYPE_6__*,size_t) ;} ;


 int FUNC_0 (int ,int *,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_6__*,int ) ;
 int FUNC_2 () ;
 TYPE_6__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,TYPE_12__*,int,size_t*) ;
 int FUNC_5 (int *,TYPE_12__*) ;
 int FUNC_6 (TYPE_6__*) ;
 scalar_t__ FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*,size_t) ;

__attribute__((used)) static int FUNC_9(quicly_conn_t *VAR_5, const quicly_sent_packet_t *VAR_6, quicly_sent_t *VAR_7, quicly_sentmap_event_t VAR_8)
{
    quicly_stream_t *VAR_9;
    int VAR_10;

    if (VAR_8 == VAR_2)
        return 0;

    if (VAR_8 == VAR_1) {
        FUNC_0(VAR_3, VAR_5, FUNC_2(), VAR_7->data.stream.stream_id, VAR_7->data.stream.args.start,
                     VAR_7->data.stream.args.end - VAR_7->data.stream.args.start);
    } else {
        FUNC_0(VAR_4, VAR_5, FUNC_2(), VAR_7->data.stream.stream_id, VAR_7->data.stream.args.start,
                     VAR_7->data.stream.args.end - VAR_7->data.stream.args.start);
    }


    if ((VAR_9 = FUNC_3(VAR_5, VAR_7->data.stream.stream_id)) == ((void*)0))
        return 0;

    if (VAR_8 == VAR_1) {
        size_t VAR_11;
        if ((VAR_10 = FUNC_4(&VAR_9->sendstate, &VAR_7->data.stream.args, VAR_6->bytes_in_flight != 0,
                                          &VAR_11)) != 0)
            return VAR_10;
        if (FUNC_7(VAR_9)) {
            FUNC_1(VAR_9, 0);
        } else if (VAR_11 != 0) {
            VAR_9->callbacks->on_send_shift(VAR_9, VAR_11);
        }
    } else {

        if ((VAR_10 = FUNC_5(&VAR_9->sendstate, &VAR_7->data.stream.args)) != 0)
            return VAR_10;
        if (VAR_9->_send_aux.rst.sender_state == VAR_0)
            FUNC_6(VAR_9);
    }

    return 0;
}
