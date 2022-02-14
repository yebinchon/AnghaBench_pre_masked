
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int h2o_multithread_receiver_t ;
typedef int h2o_linklist_t ;
struct TYPE_4__ {int shutdown_receiver; int pong_receiver; } ;
struct TYPE_3__ {int num_ping_received; int should_exit; } ;


 int FUNC_0 (int *) ;
 TYPE_2__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 TYPE_1__ VAR_1 ;

__attribute__((used)) static void FUNC_3(h2o_multithread_receiver_t *VAR_2, h2o_linklist_t *VAR_3)
{
    while (!FUNC_0(VAR_3)) {
        FUNC_1(VAR_3);
        if (++VAR_1.num_ping_received < 100) {
            FUNC_2(&VAR_0.pong_receiver);
        } else {
            FUNC_2(&VAR_0.shutdown_receiver);
            VAR_1.should_exit = 1;
        }
    }
}
