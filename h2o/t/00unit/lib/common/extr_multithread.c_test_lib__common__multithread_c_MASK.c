
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int pthread_t ;
struct TYPE_4__ {void* loop; void* queue; int shutdown_receiver; int pong_receiver; int received_shutdown; } ;
struct TYPE_3__ {void* loop; void* queue; int ping_receiver; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 () ;
 int FUNC_1 (void*) ;
 int FUNC_2 (void*,int ) ;
 void* FUNC_3 (void*) ;
 int FUNC_4 (void*) ;
 int FUNC_5 (void*,int *,int ) ;
 int FUNC_6 (void*,int *) ;
 TYPE_2__ VAR_2 ;
 int FUNC_7 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (int *,int *,int ,int *) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (void*,int ) ;
 int VAR_6 ;
 TYPE_1__ VAR_7 ;

void FUNC_12(void)
{
    pthread_t VAR_8;

    VAR_2.loop = FUNC_0();
    VAR_2.queue = FUNC_3(VAR_2.loop);
    FUNC_5(VAR_2.queue, &VAR_2.pong_receiver, VAR_4);
    FUNC_5(VAR_2.queue, &VAR_2.shutdown_receiver, VAR_5);
    VAR_7.loop = FUNC_0();
    VAR_7.queue = FUNC_3(VAR_7.loop);
    FUNC_5(VAR_7.queue, &VAR_7.ping_receiver, VAR_3);

    FUNC_8(&VAR_8, ((void*)0), VAR_6, ((void*)0));


    FUNC_10(&VAR_7.ping_receiver);

    while (!VAR_2.received_shutdown) {



        FUNC_2(VAR_2.loop, VAR_0);

    }

    FUNC_9(VAR_8, ((void*)0));

    FUNC_6(VAR_7.queue, &VAR_7.ping_receiver);
    FUNC_4(VAR_7.queue);
    FUNC_1(VAR_7.loop);
    FUNC_6(VAR_2.queue, &VAR_2.pong_receiver);
    FUNC_6(VAR_2.queue, &VAR_2.shutdown_receiver);
    FUNC_4(VAR_2.queue);
    FUNC_1(VAR_2.loop);

    FUNC_7(1);
}
