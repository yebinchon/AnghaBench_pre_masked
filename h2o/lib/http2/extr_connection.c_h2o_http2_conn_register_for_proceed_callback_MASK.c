
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ state; int _link; int _scheduler; int output_window; } ;
typedef TYPE_2__ h2o_http2_stream_t ;
struct TYPE_8__ {int streams_to_proceed; } ;
struct TYPE_10__ {TYPE_1__ _write; } ;
typedef TYPE_3__ h2o_http2_conn_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *) ;

void FUNC_7(h2o_http2_conn_t *VAR_1, h2o_http2_stream_t *VAR_2)
{
    FUNC_1(VAR_1);

    if (FUNC_3(VAR_2) || VAR_2->state >= VAR_0) {
        if (FUNC_4(&VAR_2->output_window) > 0) {
            FUNC_0(!FUNC_6(&VAR_2->_link));
            FUNC_2(&VAR_2->_scheduler);
        }
    } else {
        FUNC_5(&VAR_1->_write.streams_to_proceed, &VAR_2->_link);
    }
}
