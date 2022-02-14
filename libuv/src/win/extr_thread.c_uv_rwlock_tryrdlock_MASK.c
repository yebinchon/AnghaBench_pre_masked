
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_readers_; int num_readers_lock_; int write_semaphore_; } ;
struct TYPE_5__ {TYPE_1__ state_; } ;
typedef TYPE_2__ uv_rwlock_t ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,char*) ;

int FUNC_5(uv_rwlock_t* VAR_4) {
  int VAR_5;

  if (!FUNC_2(&VAR_4->state_.num_readers_lock_))
    return VAR_0;

  VAR_5 = 0;

  if (VAR_4->state_.num_readers_ == 0) {



    DWORD VAR_6 = FUNC_3(VAR_4->state_.write_semaphore_, 0);
    if (VAR_6 == VAR_2)
      VAR_4->state_.num_readers_++;
    else if (VAR_6 == VAR_3)
      VAR_5 = VAR_0;
    else if (VAR_6 == VAR_1)
      FUNC_4(FUNC_0(), "WaitForSingleObject");

  } else {



    VAR_4->state_.num_readers_++;
  }

  FUNC_1(&VAR_4->state_.num_readers_lock_);
  return VAR_5;
}
