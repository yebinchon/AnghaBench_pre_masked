
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int h2o_http2_scheduler_queue_t ;
struct TYPE_3__ {int * _queue; } ;
typedef TYPE_1__ h2o_http2_scheduler_node_t ;


 int * FUNC_0 (int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static h2o_http2_scheduler_queue_t *FUNC_2(h2o_http2_scheduler_node_t *VAR_0)
{
    if (VAR_0->_queue == ((void*)0)) {
        VAR_0->_queue = FUNC_0(sizeof(*VAR_0->_queue));
        FUNC_1(VAR_0->_queue);
    }
    return VAR_0->_queue;
}
