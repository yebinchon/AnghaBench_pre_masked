
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sem_signaled; int mutex; int cond; int sem_waiting; } ;
typedef TYPE_1__ worker_config ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(worker_config* VAR_0, const int* VAR_1) {
  FUNC_2(&VAR_0->mutex);


  FUNC_4(&VAR_0->sem_waiting);


  do {
    FUNC_1(&VAR_0->cond, &VAR_0->mutex);
  } while (*VAR_1 == 0);
  FUNC_0(*VAR_1 == 1);

  FUNC_3(&VAR_0->mutex);


  FUNC_5(&VAR_0->sem_signaled);

  return 0;
}
