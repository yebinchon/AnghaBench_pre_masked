
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int * cb; } ;
struct TYPE_9__ {TYPE_1__ get; } ;
struct TYPE_10__ {int pending; TYPE_2__ data; } ;
typedef TYPE_3__ h2o_memcached_req_t ;
struct TYPE_11__ {int mutex; } ;
typedef TYPE_4__ h2o_memcached_context_t ;


 int FUNC_0 (TYPE_3__*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(h2o_memcached_context_t *VAR_0, h2o_memcached_req_t *VAR_1)
{
    int VAR_2 = 0;

    FUNC_3(&VAR_0->mutex);
    VAR_1->data.get.cb = ((void*)0);
    if (FUNC_1(&VAR_1->pending)) {
        FUNC_2(&VAR_1->pending);
        VAR_2 = 1;
    }
    FUNC_4(&VAR_0->mutex);

    if (VAR_2)
        FUNC_0(VAR_1);
}
