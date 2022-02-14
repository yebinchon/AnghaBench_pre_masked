
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sem_waiting; int sem_signaled; int cond; int mutex; } ;
typedef TYPE_1__ worker_config ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void FUNC_3(worker_config* VAR_0) {
  FUNC_1(&VAR_0->mutex);
  FUNC_0(&VAR_0->cond);
  FUNC_2(&VAR_0->sem_signaled);
  FUNC_2(&VAR_0->sem_waiting);
}
