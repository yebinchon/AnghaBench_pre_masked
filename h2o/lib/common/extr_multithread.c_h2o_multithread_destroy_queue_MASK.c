
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uv_handle_t ;
struct TYPE_7__ {int write; int read; } ;
struct TYPE_6__ {int inactive; int active; } ;
struct TYPE_8__ {TYPE_2__ async; int mutex; TYPE_1__ receivers; } ;
typedef TYPE_3__ h2o_multithread_queue_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int ) ;

void FUNC_8(h2o_multithread_queue_t *VAR_1)
{
    FUNC_0(FUNC_3(&VAR_1->receivers.active));
    FUNC_0(FUNC_3(&VAR_1->receivers.inactive));
    FUNC_6(&VAR_1->mutex);




    FUNC_5(VAR_1->async.read);
    FUNC_4(VAR_1->async.read);




    FUNC_2(VAR_1);

}
