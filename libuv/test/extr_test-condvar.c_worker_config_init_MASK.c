
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int use_broadcast; int mutex; int cond; int sem_signaled; int sem_waiting; int wait_cond; int signal_cond; } ;
typedef TYPE_1__ worker_config ;
typedef int wait_func ;
typedef int signal_func ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ) ;

void FUNC_5(worker_config* VAR_0,
                        int VAR_1,
                        signal_func VAR_2,
                        wait_func VAR_3) {

  FUNC_1(VAR_0, 0, sizeof(*VAR_0));


  VAR_0->signal_cond = VAR_2;
  VAR_0->wait_cond = VAR_3;
  VAR_0->use_broadcast = VAR_1;


  FUNC_0(0 == FUNC_4(&VAR_0->sem_waiting, 0));
  FUNC_0(0 == FUNC_4(&VAR_0->sem_signaled, 0));
  FUNC_0(0 == FUNC_2(&VAR_0->cond));
  FUNC_0(0 == FUNC_3(&VAR_0->mutex));
}
