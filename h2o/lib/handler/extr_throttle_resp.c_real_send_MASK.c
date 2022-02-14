
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {size_t size; TYPE_5__* entries; } ;
struct TYPE_7__ {int stream_state; TYPE_1__ bufs; } ;
struct TYPE_8__ {scalar_t__ tokens; int timeout_entry; TYPE_2__ state; int req; int super; } ;
typedef TYPE_3__ throttle_resp_t ;
struct TYPE_9__ {scalar_t__ len; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int ,TYPE_5__*,size_t,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(throttle_resp_t *VAR_0)
{

    FUNC_0(VAR_0->tokens > 0);
    size_t VAR_1, VAR_2;

    VAR_2 = 0;

    for (VAR_1 = 0; VAR_1 < VAR_0->state.bufs.size; VAR_1++) {
        VAR_2 += VAR_0->state.bufs.entries[VAR_1].len;
    }

    VAR_0->tokens -= VAR_2;

    FUNC_1(&VAR_0->super, VAR_0->req, VAR_0->state.bufs.entries, VAR_0->state.bufs.size, VAR_0->state.stream_state);
    if (!FUNC_2(VAR_0->state.stream_state))
        FUNC_3(&VAR_0->timeout_entry);
}
