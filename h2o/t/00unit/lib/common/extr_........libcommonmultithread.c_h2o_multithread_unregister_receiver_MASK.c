
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int _link; int _messages; TYPE_2__* queue; } ;
typedef TYPE_1__ h2o_multithread_receiver_t ;
struct TYPE_6__ {int mutex; } ;
typedef TYPE_2__ h2o_multithread_queue_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(h2o_multithread_queue_t *VAR_0, h2o_multithread_receiver_t *VAR_1)
{
    FUNC_0(VAR_0 == VAR_1->queue);
    FUNC_0(FUNC_1(&VAR_1->_messages));
    FUNC_3(&VAR_0->mutex);
    FUNC_2(&VAR_1->_link);
    FUNC_4(&VAR_0->mutex);
}
