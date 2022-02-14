
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {TYPE_2__* priv_data; } ;
typedef TYPE_1__ URLContext ;
struct TYPE_6__ {int abort_request; int ring; int inner; int mutex; int cond_wakeup_main; int cond_wakeup_background; int async_buffer_thread; } ;
typedef TYPE_2__ Context ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,char*,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(URLContext *VAR_1)
{
    Context *VAR_2 = VAR_1->priv_data;
    int VAR_3;

    FUNC_7(&VAR_2->mutex);
    VAR_2->abort_request = 1;
    FUNC_4(&VAR_2->cond_wakeup_background);
    FUNC_8(&VAR_2->mutex);

    VAR_3 = FUNC_5(VAR_2->async_buffer_thread, ((void*)0));
    if (VAR_3 != 0)
        FUNC_1(VAR_1, VAR_0, "pthread_join(): %s\n", FUNC_0(VAR_3));

    FUNC_3(&VAR_2->cond_wakeup_background);
    FUNC_3(&VAR_2->cond_wakeup_main);
    FUNC_6(&VAR_2->mutex);
    FUNC_2(VAR_2->inner);
    FUNC_9(&VAR_2->ring);

    return 0;
}
