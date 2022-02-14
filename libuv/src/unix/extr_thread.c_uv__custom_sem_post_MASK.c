
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; int mutex; int cond; } ;
typedef TYPE_1__ uv_semaphore_t ;
typedef int uv_sem_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(uv_sem_t* VAR_0) {
  uv_semaphore_t* VAR_1;

  VAR_1 = *(uv_semaphore_t**)VAR_0;
  FUNC_1(&VAR_1->mutex);
  VAR_1->value++;
  if (VAR_1->value == 1)
    FUNC_0(&VAR_1->cond);
  FUNC_2(&VAR_1->mutex);
}
