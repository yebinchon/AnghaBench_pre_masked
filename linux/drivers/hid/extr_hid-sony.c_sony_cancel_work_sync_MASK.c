
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_sc {int state_worker; int lock; scalar_t__ state_worker_initialized; int hotplug_worker; scalar_t__ hotplug_worker_initialized; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct sony_sc *VAR_0)
{
 unsigned long VAR_1;

 if (VAR_0->hotplug_worker_initialized)
  FUNC_0(&VAR_0->hotplug_worker);
 if (VAR_0->state_worker_initialized) {
  FUNC_1(&VAR_0->lock, VAR_1);
  VAR_0->state_worker_initialized = 0;
  FUNC_2(&VAR_0->lock, VAR_1);
  FUNC_0(&VAR_0->state_worker);
 }
}
