
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sem_signaled; int mutex; int cond; scalar_t__ use_broadcast; int sem_waiting; } ;
typedef TYPE_1__ worker_config ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(worker_config* VAR_0, int* VAR_1) {

  FUNC_6(&VAR_0->sem_waiting);


  FUNC_3(&VAR_0->mutex);


  FUNC_0(*VAR_1 == 0);
  *VAR_1 = 1;

  if (VAR_0->use_broadcast)
    FUNC_1(&VAR_0->cond);
  else
    FUNC_2(&VAR_0->cond);

  FUNC_4(&VAR_0->mutex);


  FUNC_5(&VAR_0->sem_signaled);
}
