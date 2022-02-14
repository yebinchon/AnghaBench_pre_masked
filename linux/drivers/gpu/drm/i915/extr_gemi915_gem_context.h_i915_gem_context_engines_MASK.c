
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i915_gem_engines {int dummy; } ;
struct i915_gem_context {int engines_mutex; int engines; } ;


 int FUNC_0 (int *) ;
 struct i915_gem_engines* FUNC_1 (int ,int ) ;

__attribute__((used)) static inline struct i915_gem_engines *
FUNC_2(struct i915_gem_context *VAR_0)
{
 return FUNC_1(VAR_0->engines,
      FUNC_0(&VAR_0->engines_mutex));
}
