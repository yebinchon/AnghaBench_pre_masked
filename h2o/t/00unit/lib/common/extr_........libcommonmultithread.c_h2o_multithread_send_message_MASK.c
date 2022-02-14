
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char uint64_t ;
typedef int tmp ;
struct TYPE_10__ {TYPE_2__* queue; int _messages; int _link; } ;
typedef TYPE_3__ h2o_multithread_receiver_t ;
struct TYPE_11__ {int link; } ;
typedef TYPE_4__ h2o_multithread_message_t ;
struct TYPE_12__ {int write; } ;
struct TYPE_8__ {int active; } ;
struct TYPE_9__ {TYPE_5__ async; int mutex; TYPE_1__ receivers; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int ,char*,int) ;

void FUNC_9(h2o_multithread_receiver_t *VAR_2, h2o_multithread_message_t *VAR_3)
{
    int VAR_4 = 0;

    FUNC_5(&VAR_2->queue->mutex);
    if (VAR_3 != ((void*)0)) {
        FUNC_0(!FUNC_3(&VAR_3->link));
        if (FUNC_2(&VAR_2->_messages)) {
            FUNC_4(&VAR_2->_link);
            FUNC_1(&VAR_2->queue->receivers.active, &VAR_2->_link);
            VAR_4 = 1;
        }
        FUNC_1(&VAR_2->_messages, &VAR_3->link);
    } else {
        if (FUNC_2(&VAR_2->_messages))
            VAR_4 = 1;
    }
    FUNC_6(&VAR_2->queue->mutex);

    if (VAR_4) {




        uint64_t VAR_5 = 1;
        while (FUNC_8(VAR_2->queue->async.write, &VAR_5, sizeof(VAR_5)) == -1 && VAR_1 == VAR_0)



            ;

    }
}
