
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {TYPE_3__* _parent; } ;
struct TYPE_7__ {int _active_cnt; TYPE_1__ node; int weight; int _queue_node; } ;
typedef TYPE_2__ h2o_http2_scheduler_openref_t ;
struct TYPE_8__ {int * _parent; } ;
typedef TYPE_3__ h2o_http2_scheduler_node_t ;


 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_2(h2o_http2_scheduler_node_t *VAR_0)
{
    h2o_http2_scheduler_openref_t *VAR_1;


    if (VAR_0->_parent == ((void*)0))
        return;

    VAR_1 = (h2o_http2_scheduler_openref_t *)VAR_0;
    if (++VAR_1->_active_cnt != 1)
        return;

    FUNC_1(FUNC_0(VAR_1->node._parent), &VAR_1->_queue_node, VAR_1->weight);

    FUNC_2(VAR_1->node._parent);
}
