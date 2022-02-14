
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ value; int mutex; } ;
typedef TYPE_1__ uv_semaphore_t ;
typedef int uv_sem_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(uv_sem_t* VAR_1) {
  uv_semaphore_t* VAR_2;

  VAR_2 = *(uv_semaphore_t**)VAR_1;
  if (FUNC_0(&VAR_2->mutex) != 0)
    return VAR_0;

  if (VAR_2->value == 0) {
    FUNC_1(&VAR_2->mutex);
    return VAR_0;
  }

  VAR_2->value--;
  FUNC_1(&VAR_2->mutex);

  return 0;
}
