
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int write_semaphore_; } ;
struct TYPE_5__ {TYPE_1__ state_; } ;
typedef TYPE_2__ uv_rwlock_t ;


 int FUNC_0 () ;
 int FUNC_1 (int ,int,int *) ;
 int FUNC_2 (int ,char*) ;

void FUNC_3(uv_rwlock_t* VAR_0) {
  if (!FUNC_1(VAR_0->state_.write_semaphore_, 1, ((void*)0)))
    FUNC_2(FUNC_0(), "ReleaseSemaphore");
}
