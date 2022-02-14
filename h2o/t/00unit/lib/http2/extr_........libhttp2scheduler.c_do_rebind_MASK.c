
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {TYPE_3__* _parent; } ;
struct TYPE_12__ {scalar_t__ _active_cnt; TYPE_1__ node; int weight; int _queue_node; int _all_link; } ;
typedef TYPE_2__ h2o_http2_scheduler_openref_t ;
struct TYPE_13__ {int _all_refs; } ;
typedef TYPE_3__ h2o_http2_scheduler_node_t ;


 int FUNC_0 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (int ,int *,int ) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(h2o_http2_scheduler_openref_t *VAR_0, h2o_http2_scheduler_node_t *VAR_1, int VAR_2)
{

    FUNC_4(&VAR_0->_all_link);
    FUNC_3(&VAR_1->_all_refs, &VAR_0->_all_link);

    if (VAR_0->_active_cnt != 0) {
        FUNC_7(&VAR_0->_queue_node);
        FUNC_6(FUNC_2(VAR_1), &VAR_0->_queue_node, VAR_0->weight);
        FUNC_1(VAR_0->node._parent);
        FUNC_5(VAR_1);
    }

    VAR_0->node._parent = VAR_1;

    if (VAR_2)
        FUNC_0(VAR_1, VAR_0);
}
