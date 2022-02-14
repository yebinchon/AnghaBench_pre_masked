
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_sched_attr {scalar_t__ priority; } ;
struct drm_i915_private {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char*,int,char*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct drm_i915_private *VAR_1,
       const struct i915_sched_attr *VAR_2,
       char *VAR_3, int VAR_4, int VAR_5)
{
 if (VAR_2->priority == VAR_0)
  return VAR_4;

 VAR_4 += FUNC_0(VAR_3 + VAR_4, VAR_5 - VAR_4,
        " prio=%d", VAR_2->priority);

 return VAR_4;
}
