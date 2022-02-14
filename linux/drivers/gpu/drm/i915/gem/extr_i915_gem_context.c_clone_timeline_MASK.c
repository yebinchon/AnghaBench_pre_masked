
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_context {scalar_t__ timeline; } ;


 int FUNC_0 (struct i915_gem_context*,scalar_t__) ;

__attribute__((used)) static int FUNC_1(struct i915_gem_context *VAR_0,
     struct i915_gem_context *VAR_1)
{
 if (VAR_1->timeline)
  FUNC_0(VAR_0, VAR_1->timeline);

 return 0;
}
