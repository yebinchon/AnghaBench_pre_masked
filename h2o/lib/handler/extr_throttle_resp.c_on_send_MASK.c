
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_10__ {size_t size; int * entries; } ;
struct TYPE_7__ {int stream_state; TYPE_6__ bufs; } ;
struct TYPE_8__ {scalar_t__ tokens; TYPE_1__ state; } ;
typedef TYPE_2__ throttle_resp_t ;
typedef int h2o_sendvec_t ;
typedef int h2o_send_state_t ;
struct TYPE_9__ {int pool; } ;
typedef TYPE_3__ h2o_req_t ;
typedef int h2o_ostream_t ;


 int FUNC_0 (int *,TYPE_6__*,size_t) ;
 int FUNC_1 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_2(h2o_ostream_t *VAR_0, h2o_req_t *VAR_1, h2o_sendvec_t *VAR_2, size_t VAR_3, h2o_send_state_t VAR_4)
{
    throttle_resp_t *VAR_5 = (void *)VAR_0;
    size_t VAR_6;


    FUNC_0(&VAR_1->pool, &VAR_5->state.bufs, VAR_3);

    for (VAR_6 = 0; VAR_6 < VAR_3; ++VAR_6) {
        VAR_5->state.bufs.entries[VAR_6] = VAR_2[VAR_6];
    }
    VAR_5->state.bufs.size = VAR_3;
    VAR_5->state.stream_state = VAR_4;


    if (VAR_5->tokens > 0)
        FUNC_1(VAR_5);
}
