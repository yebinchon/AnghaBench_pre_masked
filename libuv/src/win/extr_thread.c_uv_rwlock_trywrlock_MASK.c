
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int write_semaphore_; } ;
struct TYPE_5__ {TYPE_1__ state_; } ;
typedef TYPE_2__ uv_rwlock_t ;
typedef scalar_t__ DWORD ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,char*) ;

int FUNC_3(uv_rwlock_t* VAR_3) {
  DWORD VAR_4 = FUNC_1(VAR_3->state_.write_semaphore_, 0);
  if (VAR_4 == VAR_1)
    return 0;
  else if (VAR_4 == VAR_2)
    return VAR_0;
  else
    FUNC_2(FUNC_0(), "WaitForSingleObject");
}
