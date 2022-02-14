
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_9__ ;
typedef struct TYPE_28__ TYPE_8__ ;
typedef struct TYPE_27__ TYPE_7__ ;
typedef struct TYPE_26__ TYPE_6__ ;
typedef struct TYPE_25__ TYPE_5__ ;
typedef struct TYPE_24__ TYPE_4__ ;
typedef struct TYPE_23__ TYPE_3__ ;
typedef struct TYPE_22__ TYPE_2__ ;
typedef struct TYPE_21__ TYPE_1__ ;
typedef struct TYPE_20__ TYPE_11__ ;
typedef struct TYPE_19__ TYPE_10__ ;


typedef scalar_t__ uint64_t ;
struct st_quicly_conn_streamgroup_state_t {int next_stream_id; scalar_t__ num_streams; } ;
struct TYPE_27__ {int uni; int args; } ;
struct TYPE_28__ {TYPE_7__ max_streams; } ;
struct TYPE_29__ {TYPE_8__ data; } ;
typedef TYPE_9__ quicly_sent_t ;
struct TYPE_19__ {int dst; } ;
typedef TYPE_10__ quicly_send_context_t ;
typedef int quicly_maxsender_t ;
struct TYPE_23__ {struct st_quicly_conn_streamgroup_state_t bidi; struct st_quicly_conn_streamgroup_state_t uni; } ;
struct TYPE_26__ {TYPE_5__* ctx; TYPE_3__ peer; } ;
struct TYPE_21__ {int * bidi; int * uni; } ;
struct TYPE_22__ {TYPE_1__ max_streams; } ;
struct TYPE_20__ {TYPE_6__ super; TYPE_2__ ingress; } ;
typedef TYPE_11__ quicly_conn_t ;
struct TYPE_24__ {scalar_t__ max_streams_bidi; scalar_t__ max_streams_uni; } ;
struct TYPE_25__ {TYPE_4__ transport_params; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,TYPE_11__*,int ,scalar_t__,int) ;
 int FUNC_1 (TYPE_11__*,TYPE_10__*,int ,TYPE_9__**,int ) ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,scalar_t__) ;
 int FUNC_4 (int *,scalar_t__,int *) ;
 int FUNC_5 (TYPE_11__*,int) ;

__attribute__((used)) static int FUNC_6(quicly_conn_t *VAR_3, int VAR_4, quicly_send_context_t *VAR_5)
{
    if (!FUNC_5(VAR_3, VAR_4))
        return 0;

    quicly_maxsender_t *VAR_6 = VAR_4 ? VAR_3->ingress.max_streams.uni : VAR_3->ingress.max_streams.bidi;
    struct st_quicly_conn_streamgroup_state_t *VAR_7 = VAR_4 ? &VAR_3->super.peer.uni : &VAR_3->super.peer.bidi;
    int VAR_8;

    uint64_t VAR_9 =
        VAR_7->next_stream_id / 4 +
        (VAR_4 ? VAR_3->super.ctx->transport_params.max_streams_uni : VAR_3->super.ctx->transport_params.max_streams_bidi) -
        VAR_7->num_streams;

    quicly_sent_t *VAR_10;
    if ((VAR_8 = FUNC_1(VAR_3, VAR_5, VAR_1, &VAR_10, VAR_2)) != 0)
        return VAR_8;
    VAR_5->dst = FUNC_3(VAR_5->dst, VAR_4, VAR_9);
    VAR_10->data.max_streams.uni = VAR_4;
    FUNC_4(VAR_6, VAR_9, &VAR_10->data.max_streams.args);

    FUNC_0(VAR_0, VAR_3, FUNC_2(), VAR_9, VAR_4);

    return 0;
}
