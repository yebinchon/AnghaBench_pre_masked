
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ count; scalar_t__ n; int turnstile2; int mutex; int turnstile1; } ;
typedef TYPE_1__ uv_barrier_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(uv_barrier_t* VAR_0) {
  int VAR_1;

  FUNC_0(&VAR_0->mutex);
  if (++VAR_0->count == VAR_0->n) {
    FUNC_3(&VAR_0->turnstile2);
    FUNC_2(&VAR_0->turnstile1);
  }
  FUNC_1(&VAR_0->mutex);

  FUNC_3(&VAR_0->turnstile1);
  FUNC_2(&VAR_0->turnstile1);

  FUNC_0(&VAR_0->mutex);
  VAR_1 = (--VAR_0->count == 0);
  if (VAR_1) {
    FUNC_3(&VAR_0->turnstile1);
    FUNC_2(&VAR_0->turnstile2);
  }
  FUNC_1(&VAR_0->mutex);

  FUNC_3(&VAR_0->turnstile2);
  FUNC_2(&VAR_0->turnstile2);
  return VAR_1;
}
