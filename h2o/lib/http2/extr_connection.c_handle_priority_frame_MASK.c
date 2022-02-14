
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_34__ TYPE_9__ ;
typedef struct TYPE_33__ TYPE_8__ ;
typedef struct TYPE_32__ TYPE_7__ ;
typedef struct TYPE_31__ TYPE_6__ ;
typedef struct TYPE_30__ TYPE_5__ ;
typedef struct TYPE_29__ TYPE_4__ ;
typedef struct TYPE_28__ TYPE_3__ ;
typedef struct TYPE_27__ TYPE_2__ ;
typedef struct TYPE_26__ TYPE_1__ ;
typedef struct TYPE_25__ TYPE_11__ ;
typedef struct TYPE_24__ TYPE_10__ ;


struct TYPE_34__ {scalar_t__ dependency; } ;
struct TYPE_33__ {int _scheduler; TYPE_9__ received_priority; } ;
typedef TYPE_8__ h2o_http2_stream_t ;
typedef TYPE_9__ h2o_http2_priority_t ;
struct TYPE_24__ {scalar_t__ stream_id; } ;
typedef TYPE_10__ h2o_http2_frame_t ;
struct TYPE_32__ {TYPE_6__* ctx; } ;
struct TYPE_27__ {scalar_t__ open; } ;
struct TYPE_28__ {TYPE_2__ priority; } ;
struct TYPE_26__ {scalar_t__ max_open; } ;
struct TYPE_25__ {TYPE_7__ super; TYPE_3__ num_streams; TYPE_1__ pull_stream_ids; } ;
typedef TYPE_11__ h2o_http2_conn_t ;
struct TYPE_31__ {TYPE_5__* globalconf; } ;
struct TYPE_29__ {scalar_t__ max_streams_for_priority; } ;
struct TYPE_30__ {TYPE_4__ http2; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_8__* FUNC_0 (TYPE_11__*,scalar_t__) ;
 int FUNC_1 (TYPE_9__*,TYPE_10__*,char const**) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 TYPE_8__* FUNC_4 (TYPE_11__*,scalar_t__,int *,TYPE_9__*) ;
 int FUNC_5 (TYPE_11__*,TYPE_8__*,TYPE_9__*,int) ;

__attribute__((used)) static int FUNC_6(h2o_http2_conn_t *VAR_2, h2o_http2_frame_t *VAR_3, const char **VAR_4)
{
    h2o_http2_priority_t VAR_5;
    h2o_http2_stream_t *VAR_6;
    int VAR_7;

    if ((VAR_7 = FUNC_1(&VAR_5, VAR_3, VAR_4)) != 0)
        return VAR_7;
    if (VAR_3->stream_id == VAR_5.dependency) {
        *VAR_4 = "stream cannot depend on itself";
        return VAR_1;
    }

    if ((VAR_6 = FUNC_0(VAR_2, VAR_3->stream_id)) != ((void*)0)) {
        VAR_6->received_priority = VAR_5;



        if (FUNC_2(&VAR_6->_scheduler) != 257)
            FUNC_5(VAR_2, VAR_6, &VAR_5, 1);
    } else {
        if (FUNC_3(VAR_3->stream_id)) {

            return 0;
        } else {

            if (VAR_3->stream_id <= VAR_2->pull_stream_ids.max_open)
                return 0;
        }
        if (VAR_2->num_streams.priority.open >= VAR_2->super.ctx->globalconf->http2.max_streams_for_priority) {
            *VAR_4 = "too many streams in idle/closed state";



            return VAR_0;
        }
        VAR_6 = FUNC_4(VAR_2, VAR_3->stream_id, ((void*)0), &VAR_5);
        FUNC_5(VAR_2, VAR_6, &VAR_5, 0);
    }

    return 0;
}
