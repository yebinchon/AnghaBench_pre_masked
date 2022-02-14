
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct i915_gem_context {int ref; } ;
struct drm_i915_file_private {int dummy; } ;


 struct i915_gem_context* FUNC_0 (struct drm_i915_file_private*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 () ;
 int FUNC_3 () ;

__attribute__((used)) static inline struct i915_gem_context *
FUNC_4(struct drm_i915_file_private *VAR_0, u32 VAR_1)
{
 struct i915_gem_context *VAR_2;

 FUNC_2();
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 && !FUNC_1(&VAR_2->ref))
  VAR_2 = ((void*)0);
 FUNC_3();

 return VAR_2;
}
