
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_readers_; int num_readers_lock_; int write_semaphore_; } ;
struct TYPE_5__ {TYPE_1__ state_; } ;
typedef TYPE_2__ uv_rwlock_t ;
typedef scalar_t__ DWORD ;


 int FUNC_0 (int *) ;
 int FUNC_1 () ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;

void FUNC_5(uv_rwlock_t* VAR_2) {

  FUNC_0(&VAR_2->state_.num_readers_lock_);




  if (++VAR_2->state_.num_readers_ == 1) {
    DWORD VAR_3 = FUNC_3(VAR_2->state_.write_semaphore_, VAR_0);
    if (VAR_3 != VAR_1)
      FUNC_4(FUNC_1(), "WaitForSingleObject");
  }


  FUNC_2(&VAR_2->state_.num_readers_lock_);
}
