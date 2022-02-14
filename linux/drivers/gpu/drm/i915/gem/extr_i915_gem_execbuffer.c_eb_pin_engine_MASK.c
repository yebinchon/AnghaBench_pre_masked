
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_context {int dummy; } ;
struct i915_execbuffer {int gem_context; } ;
struct drm_i915_gem_execbuffer2 {unsigned int flags; } ;
struct drm_file {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_context*) ;
 int FUNC_1 (struct intel_context*) ;
 int FUNC_2 (struct i915_execbuffer*,struct intel_context*) ;
 unsigned int FUNC_3 (struct i915_execbuffer*,struct drm_file*,struct drm_i915_gem_execbuffer2*) ;
 struct intel_context* FUNC_4 (int ,unsigned int) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct intel_context*) ;

__attribute__((used)) static int
FUNC_7(struct i915_execbuffer *VAR_1,
       struct drm_file *VAR_2,
       struct drm_i915_gem_execbuffer2 *VAR_3)
{
 struct intel_context *VAR_4;
 unsigned int VAR_5;
 int VAR_6;

 if (FUNC_5(VAR_1->gem_context))
  VAR_5 = VAR_3->flags & VAR_0;
 else
  VAR_5 = FUNC_3(VAR_1, VAR_2, VAR_3);

 VAR_4 = FUNC_4(VAR_1->gem_context, VAR_5);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_6 = FUNC_2(VAR_1, VAR_4);
 FUNC_6(VAR_4);

 return VAR_6;
}
