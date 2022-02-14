
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int h2o_http2_scheduler_run_cb ;
struct TYPE_4__ {int * _queue; } ;
typedef TYPE_1__ h2o_http2_scheduler_node_t ;


 int FUNC_0 (TYPE_1__*,int ,void*) ;
 int FUNC_1 (int *) ;

int FUNC_2(h2o_http2_scheduler_node_t *VAR_0, h2o_http2_scheduler_run_cb VAR_1, void *VAR_2)
{
    if (VAR_0->_queue != ((void*)0)) {
        while (!FUNC_1(VAR_0->_queue)) {
            int VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
            if (VAR_3)
                return VAR_3;
        }
    }
    return 0;
}
