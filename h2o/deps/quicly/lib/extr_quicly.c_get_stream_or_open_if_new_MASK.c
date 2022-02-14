
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
typedef struct TYPE_21__ TYPE_10__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct st_quicly_conn_streamgroup_state_t {int next_stream_id; int num_streams; } ;
struct TYPE_29__ {int stream_id; } ;
typedef TYPE_8__ quicly_stream_t ;
struct TYPE_24__ {int bidi_local; } ;
struct TYPE_25__ {TYPE_3__ max_stream_data; } ;
struct TYPE_26__ {TYPE_4__ transport_params; } ;
struct TYPE_28__ {TYPE_6__* ctx; TYPE_5__ peer; } ;
struct TYPE_30__ {TYPE_7__ super; } ;
typedef TYPE_9__ quicly_conn_t ;
struct TYPE_22__ {int uni; int bidi_remote; } ;
struct TYPE_23__ {TYPE_1__ max_stream_data; } ;
struct TYPE_27__ {TYPE_10__* stream_open; TYPE_2__ transport_params; } ;
struct TYPE_21__ {int (* cb ) (TYPE_10__*,TYPE_8__*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 struct st_quicly_conn_streamgroup_state_t* FUNC_0 (TYPE_9__*,int) ;
 TYPE_8__* FUNC_1 (TYPE_9__*,int,int ,int) ;
 int FUNC_2 (TYPE_9__*,scalar_t__) ;
 TYPE_8__* FUNC_3 (TYPE_9__*,int) ;
 scalar_t__ FUNC_4 (TYPE_9__*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int) ;
 int FUNC_7 (TYPE_10__*,TYPE_8__*) ;

__attribute__((used)) static int FUNC_8(quicly_conn_t *VAR_2, uint64_t VAR_3, quicly_stream_t **VAR_4)
{
    int VAR_5 = 0;

    if ((*VAR_4 = FUNC_3(VAR_2, VAR_3)) != ((void*)0))
        goto Exit;

    if (FUNC_5(VAR_3) != FUNC_4(VAR_2)) {

        if (VAR_3 / 4 >= FUNC_2(VAR_2, FUNC_6(VAR_3))) {
            VAR_5 = VAR_1;
            goto Exit;
        }

        struct st_quicly_conn_streamgroup_state_t *VAR_6 = FUNC_0(VAR_2, VAR_3);
        if (VAR_6->next_stream_id <= VAR_3) {
            uint64_t VAR_7, VAR_8;
            if (FUNC_6(VAR_3)) {
                VAR_7 = VAR_2->super.ctx->transport_params.max_stream_data.uni;
                VAR_8 = 0;
            } else {
                VAR_7 = VAR_2->super.ctx->transport_params.max_stream_data.bidi_remote;
                VAR_8 = VAR_2->super.peer.transport_params.max_stream_data.bidi_local;
            }
            do {
                if ((*VAR_4 = FUNC_1(VAR_2, VAR_6->next_stream_id, (uint32_t)VAR_7, VAR_8)) ==
                    ((void*)0)) {
                    VAR_5 = VAR_0;
                    goto Exit;
                }
                if ((VAR_5 = VAR_2->super.ctx->stream_open->cb(VAR_2->super.ctx->stream_open, *VAR_4)) != 0) {
                    *VAR_4 = ((void*)0);
                    goto Exit;
                }
                ++VAR_6->num_streams;
                VAR_6->next_stream_id += 4;
            } while (VAR_3 != (*VAR_4)->stream_id);
        }
    }

Exit:
    return VAR_5;
}
