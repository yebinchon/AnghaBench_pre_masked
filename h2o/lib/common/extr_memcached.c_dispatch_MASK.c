
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int pending; } ;
typedef TYPE_1__ h2o_memcached_req_t ;
struct TYPE_7__ {scalar_t__ num_threads_connected; int mutex; int cond; int pending; } ;
typedef TYPE_2__ h2o_memcached_context_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(h2o_memcached_context_t *VAR_0, h2o_memcached_req_t *VAR_1)
{
    FUNC_3(&VAR_0->mutex);

    if (VAR_0->num_threads_connected != 0) {
        FUNC_1(&VAR_0->pending, &VAR_1->pending);
        FUNC_2(&VAR_0->cond);
    } else {
        FUNC_0(VAR_1);
    }

    FUNC_4(&VAR_0->mutex);
}
