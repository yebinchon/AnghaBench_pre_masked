
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mutex; int turnstile1; int turnstile2; } ;
typedef TYPE_1__ uv_barrier_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(uv_barrier_t* VAR_0) {
  FUNC_1(&VAR_0->turnstile2);
  FUNC_1(&VAR_0->turnstile1);
  FUNC_0(&VAR_0->mutex);
}
