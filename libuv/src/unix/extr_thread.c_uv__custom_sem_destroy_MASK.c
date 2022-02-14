
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; int cond; } ;
typedef TYPE_1__ uv_semaphore_t ;
typedef int uv_sem_t ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(uv_sem_t* VAR_0) {
  uv_semaphore_t* VAR_1;

  VAR_1 = *(uv_semaphore_t**)VAR_0;
  FUNC_1(&VAR_1->cond);
  FUNC_2(&VAR_1->mutex);
  FUNC_0(VAR_1);
}
