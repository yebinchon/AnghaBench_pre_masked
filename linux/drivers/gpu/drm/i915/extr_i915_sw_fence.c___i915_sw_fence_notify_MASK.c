
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_sw_fence {int flags; } ;
typedef int (* i915_sw_fence_notify_t ) (struct i915_sw_fence*,int) ;
typedef enum i915_sw_fence_notify { ____Placeholder_i915_sw_fence_notify } i915_sw_fence_notify ;


 int VAR_0 ;

__attribute__((used)) static int FUNC_0(struct i915_sw_fence *VAR_1,
      enum i915_sw_fence_notify VAR_2)
{
 i915_sw_fence_notify_t VAR_3;

 VAR_3 = (i915_sw_fence_notify_t)(VAR_1->flags & VAR_0);
 return VAR_3(VAR_1, VAR_2);
}
