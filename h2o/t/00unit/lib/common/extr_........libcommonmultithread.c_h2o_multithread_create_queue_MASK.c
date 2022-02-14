
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uv_async_cb ;
struct TYPE_7__ {int inactive; int active; } ;
struct TYPE_8__ {TYPE_1__ receivers; int mutex; int async; } ;
typedef TYPE_2__ h2o_multithread_queue_t ;
typedef int h2o_loop_t ;


 int FUNC_0 (int *) ;
 TYPE_2__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_2__*,int *) ;
 int FUNC_3 (TYPE_2__*,int ,int) ;
 int FUNC_4 (int *,int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 (int *,int *,int ) ;

h2o_multithread_queue_t *FUNC_6(h2o_loop_t *VAR_1)
{
    h2o_multithread_queue_t *VAR_2 = FUNC_1(sizeof(*VAR_2));
    FUNC_3(VAR_2, 0, sizeof(*VAR_2));




    FUNC_2(VAR_2, VAR_1);

    FUNC_4(&VAR_2->mutex, ((void*)0));
    FUNC_0(&VAR_2->receivers.active);
    FUNC_0(&VAR_2->receivers.inactive);

    return VAR_2;
}
