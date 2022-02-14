
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_readers_; int num_readers_lock_; int write_semaphore_; } ;
struct TYPE_5__ {TYPE_1__ state_; } ;
typedef TYPE_2__ uv_rwlock_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int,int *) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(uv_rwlock_t* VAR_0) {
  FUNC_0(&VAR_0->state_.num_readers_lock_);

  if (--VAR_0->state_.num_readers_ == 0) {
    if (!FUNC_3(VAR_0->state_.write_semaphore_, 1, ((void*)0)))
      FUNC_4(FUNC_1(), "ReleaseSemaphore");
  }

  FUNC_2(&VAR_0->state_.num_readers_lock_);
}
