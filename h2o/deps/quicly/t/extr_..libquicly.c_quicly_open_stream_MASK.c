
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_47__ TYPE_9__ ;
typedef struct TYPE_46__ TYPE_8__ ;
typedef struct TYPE_45__ TYPE_7__ ;
typedef struct TYPE_44__ TYPE_6__ ;
typedef struct TYPE_43__ TYPE_5__ ;
typedef struct TYPE_42__ TYPE_4__ ;
typedef struct TYPE_41__ TYPE_3__ ;
typedef struct TYPE_40__ TYPE_2__ ;
typedef struct TYPE_39__ TYPE_21__ ;
typedef struct TYPE_38__ TYPE_20__ ;
typedef struct TYPE_37__ TYPE_1__ ;
typedef struct TYPE_36__ TYPE_19__ ;
typedef struct TYPE_35__ TYPE_18__ ;
typedef struct TYPE_34__ TYPE_17__ ;
typedef struct TYPE_33__ TYPE_16__ ;
typedef struct TYPE_32__ TYPE_15__ ;
typedef struct TYPE_31__ TYPE_14__ ;
typedef struct TYPE_30__ TYPE_13__ ;
typedef struct TYPE_29__ TYPE_12__ ;
typedef struct TYPE_28__ TYPE_11__ ;
typedef struct TYPE_27__ TYPE_10__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct st_quicly_conn_streamgroup_state_t {int next_stream_id; int num_streams; } ;
struct TYPE_32__ {int control; } ;
struct TYPE_33__ {TYPE_15__ pending_link; } ;
struct TYPE_36__ {int stream_id; int streams_blocked; TYPE_16__ _send_aux; } ;
typedef TYPE_19__ quicly_stream_t ;
struct TYPE_46__ {int uni; int bidi_remote; } ;
struct TYPE_47__ {TYPE_8__ max_stream_data; } ;
struct TYPE_27__ {TYPE_9__ transport_params; } ;
struct TYPE_40__ {struct st_quicly_conn_streamgroup_state_t bidi; struct st_quicly_conn_streamgroup_state_t uni; } ;
struct TYPE_35__ {TYPE_17__* ctx; TYPE_10__ peer; TYPE_2__ host; } ;
struct TYPE_28__ {int prev; } ;
struct TYPE_29__ {TYPE_11__ bidi; TYPE_11__ uni; } ;
struct TYPE_30__ {TYPE_12__ blocked; } ;
struct TYPE_31__ {TYPE_13__ streams; } ;
struct TYPE_41__ {int count; } ;
struct TYPE_37__ {int count; } ;
struct TYPE_42__ {TYPE_3__ bidi; TYPE_1__ uni; } ;
struct TYPE_43__ {TYPE_4__ max_streams; } ;
struct TYPE_38__ {TYPE_18__ super; TYPE_14__ pending; TYPE_5__ egress; } ;
typedef TYPE_20__ quicly_conn_t ;
struct TYPE_44__ {scalar_t__ bidi_local; } ;
struct TYPE_45__ {TYPE_6__ max_stream_data; } ;
struct TYPE_39__ {int (* cb ) (TYPE_21__*,TYPE_19__*) ;} ;
struct TYPE_34__ {TYPE_21__* stream_open; TYPE_7__ transport_params; } ;


 int VAR_0 ;
 TYPE_19__* FUNC_0 (TYPE_20__*,int,scalar_t__,int) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_21__*,TYPE_19__*) ;

int FUNC_3(quicly_conn_t *VAR_1, quicly_stream_t **VAR_2, int VAR_3)
{
    quicly_stream_t *VAR_4;
    struct st_quicly_conn_streamgroup_state_t *VAR_5;
    uint64_t *VAR_6;
    uint32_t VAR_7;
    uint64_t VAR_8;
    int VAR_9;


    if (VAR_3) {
        VAR_5 = &VAR_1->super.host.uni;
        VAR_6 = &VAR_1->egress.max_streams.uni.count;
        VAR_7 = 0;
        VAR_8 = VAR_1->super.peer.transport_params.max_stream_data.uni;
    } else {
        VAR_5 = &VAR_1->super.host.bidi;
        VAR_6 = &VAR_1->egress.max_streams.bidi.count;
        VAR_7 = (uint32_t)VAR_1->super.ctx->transport_params.max_stream_data.bidi_local;
        VAR_8 = VAR_1->super.peer.transport_params.max_stream_data.bidi_remote;
    }


    if ((VAR_4 = FUNC_0(VAR_1, VAR_5->next_stream_id, VAR_7, VAR_8)) == ((void*)0))
        return VAR_0;
    ++VAR_5->num_streams;
    VAR_5->next_stream_id += 4;


    if (VAR_4->stream_id / 4 >= *VAR_6) {
        VAR_4->streams_blocked = 1;
        FUNC_1((VAR_3 ? &VAR_1->pending.streams.blocked.uni : &VAR_1->pending.streams.blocked.bidi)->prev,
                               &VAR_4->_send_aux.pending_link.control);
    }


    if ((VAR_9 = VAR_1->super.ctx->stream_open->cb(VAR_1->super.ctx->stream_open, VAR_4)) != 0)
        return VAR_9;

    *VAR_2 = VAR_4;
    return 0;
}
