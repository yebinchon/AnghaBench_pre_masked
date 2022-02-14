
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock_class_key {int dummy; } ;
struct i915_sw_fence {unsigned long flags; scalar_t__ error; int pending; int wait; } ;
typedef scalar_t__ i915_sw_fence_notify_t ;


 int FUNC_0 (int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int *,char const*,struct lock_class_key*) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct i915_sw_fence*) ;

void FUNC_4(struct i915_sw_fence *VAR_1,
     i915_sw_fence_notify_t VAR_2,
     const char *VAR_3,
     struct lock_class_key *VAR_4)
{
 FUNC_0(!VAR_2 || (unsigned long)VAR_2 & ~VAR_0);

 FUNC_3(VAR_1);

 FUNC_1(&VAR_1->wait, VAR_3, VAR_4);
 FUNC_2(&VAR_1->pending, 1);
 VAR_1->error = 0;

 VAR_1->flags = (unsigned long)VAR_2;
}
