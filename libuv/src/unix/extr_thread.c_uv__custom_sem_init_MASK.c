
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {unsigned int value; int mutex; int cond; } ;
typedef TYPE_1__ uv_semaphore_t ;
typedef int uv_sem_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int FUNC_5(uv_sem_t* VAR_1, unsigned int VAR_2) {
  int VAR_3;
  uv_semaphore_t* VAR_4;

  VAR_4 = FUNC_1(sizeof(*VAR_4));
  if (VAR_4 == ((void*)0))
    return VAR_0;

  if ((VAR_3 = FUNC_4(&VAR_4->mutex)) != 0) {
    FUNC_0(VAR_4);
    return VAR_3;
  }

  if ((VAR_3 = FUNC_2(&VAR_4->cond)) != 0) {
    FUNC_3(&VAR_4->mutex);
    FUNC_0(VAR_4);
    return VAR_3;
  }

  VAR_4->value = VAR_2;
  *(uv_semaphore_t**)VAR_1 = VAR_4;
  return 0;
}
