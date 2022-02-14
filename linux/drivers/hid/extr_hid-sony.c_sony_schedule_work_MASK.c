
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sony_sc {int hotplug_worker; int hotplug_worker_initialized; int lock; int state_worker; int state_worker_initialized; int defer_initialization; } ;
typedef enum sony_worker { ____Placeholder_sony_worker } sony_worker ;




 int FUNC_0 (int *) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static inline void FUNC_3(struct sony_sc *VAR_0,
          enum sony_worker VAR_1)
{
 unsigned long VAR_2;

 switch (VAR_1) {
 case 128:
  FUNC_1(&VAR_0->lock, VAR_2);
  if (!VAR_0->defer_initialization && VAR_0->state_worker_initialized)
   FUNC_0(&VAR_0->state_worker);
  FUNC_2(&VAR_0->lock, VAR_2);
  break;
 case 129:
  if (VAR_0->hotplug_worker_initialized)
   FUNC_0(&VAR_0->hotplug_worker);
  break;
 }
}
