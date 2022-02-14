
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_6__ ;
typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_4__ ;
typedef struct TYPE_18__ TYPE_3__ ;
typedef struct TYPE_17__ TYPE_2__ ;
typedef struct TYPE_16__ TYPE_1__ ;
typedef struct TYPE_15__ TYPE_10__ ;


struct TYPE_15__ {int node; } ;
struct TYPE_19__ {TYPE_10__ _scheduler; } ;
typedef TYPE_4__ h2o_http2_stream_t ;
typedef int h2o_http2_scheduler_node_t ;
struct TYPE_20__ {scalar_t__ dependency; int exclusive; int weight; } ;
typedef TYPE_5__ h2o_http2_priority_t ;
struct TYPE_18__ {TYPE_2__** streams; } ;
struct TYPE_21__ {int scheduler; TYPE_3__ _recently_closed_streams; } ;
typedef TYPE_6__ h2o_http2_conn_t ;
struct TYPE_16__ {int node; } ;
struct TYPE_17__ {scalar_t__ stream_id; TYPE_1__ _scheduler; } ;


 size_t VAR_0 ;
 TYPE_4__* FUNC_0 (TYPE_6__*,scalar_t__) ;
 TYPE_5__ VAR_1 ;
 int FUNC_1 (TYPE_10__*,int *,int ,int ) ;
 int FUNC_2 (TYPE_10__*,int *,int ,int ) ;

__attribute__((used)) static void FUNC_3(h2o_http2_conn_t *VAR_2, h2o_http2_stream_t *VAR_3, const h2o_http2_priority_t *VAR_4,
                         int VAR_5)
{
    h2o_http2_scheduler_node_t *VAR_6 = ((void*)0);


    if (VAR_4->dependency != 0) {
        h2o_http2_stream_t *VAR_7 = FUNC_0(VAR_2, VAR_4->dependency);
        if (VAR_7 != ((void*)0)) {
            VAR_6 = &VAR_7->_scheduler.node;
        } else {
            size_t VAR_8;
            for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
                if (VAR_2->_recently_closed_streams.streams[VAR_8] &&
                    VAR_2->_recently_closed_streams.streams[VAR_8]->stream_id == VAR_4->dependency) {
                    VAR_6 = &VAR_2->_recently_closed_streams.streams[VAR_8]->_scheduler.node;
                    break;
                }
            }
            if (VAR_6 == ((void*)0)) {






                VAR_6 = &VAR_2->scheduler;
                VAR_4 = &VAR_1;
            }
        }
    } else {
        VAR_6 = &VAR_2->scheduler;
    }


    if (!VAR_5) {
        FUNC_1(&VAR_3->_scheduler, VAR_6, VAR_4->weight, VAR_4->exclusive);
    } else {
        FUNC_2(&VAR_3->_scheduler, VAR_6, VAR_4->weight, VAR_4->exclusive);
    }
}
