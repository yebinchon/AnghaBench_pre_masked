
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {unsigned int n; int mutex; int turnstile1; int turnstile2; scalar_t__ count; } ;
typedef TYPE_1__ uv_barrier_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int) ;

int FUNC_4(uv_barrier_t* VAR_0, unsigned int VAR_1) {
  int VAR_2;

  VAR_0->n = VAR_1;
  VAR_0->count = 0;

  VAR_2 = FUNC_1(&VAR_0->mutex);
  if (VAR_2)
    return VAR_2;

  VAR_2 = FUNC_3(&VAR_0->turnstile1, 0);
  if (VAR_2)
    goto error2;

  VAR_2 = FUNC_3(&VAR_0->turnstile2, 1);
  if (VAR_2)
    goto error;

  return 0;

error:
  FUNC_2(&VAR_0->turnstile1);
error2:
  FUNC_0(&VAR_0->mutex);
  return VAR_2;

}
