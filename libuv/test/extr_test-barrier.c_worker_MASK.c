
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int barrier; int worker_barrier_wait_rval; scalar_t__ delay; } ;
typedef TYPE_1__ worker_config ;


 int FUNC_0 (int *) ;
 int FUNC_1 (scalar_t__) ;

__attribute__((used)) static void FUNC_2(void* VAR_0) {
  worker_config* VAR_1 = VAR_0;

  if (VAR_1->delay)
    FUNC_1(VAR_1->delay);

  VAR_1->worker_barrier_wait_rval = FUNC_0(&VAR_1->barrier);
}
