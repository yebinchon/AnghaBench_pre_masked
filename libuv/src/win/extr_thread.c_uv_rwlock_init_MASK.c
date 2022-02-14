
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ num_readers_; int num_readers_lock_; int * write_semaphore_; } ;
struct TYPE_5__ {TYPE_1__ state_; } ;
typedef TYPE_2__ uv_rwlock_t ;
typedef int * HANDLE ;


 int * FUNC_0 (int *,int,int,int *) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

int FUNC_4(uv_rwlock_t* VAR_0) {

  HANDLE VAR_1 = FUNC_0(((void*)0), 1, 1, ((void*)0));
  if (VAR_1 == ((void*)0))
    return FUNC_3(FUNC_1());
  VAR_0->state_.write_semaphore_ = VAR_1;


  FUNC_2(&VAR_0->state_.num_readers_lock_);


  VAR_0->state_.num_readers_ = 0;

  return 0;
}
