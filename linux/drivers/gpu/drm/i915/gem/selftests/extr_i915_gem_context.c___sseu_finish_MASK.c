
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct intel_context {TYPE_2__* engine; } ;
struct igt_spinner {int dummy; } ;
struct drm_i915_gem_object {int dummy; } ;
struct TYPE_3__ {int slice_mask; } ;
struct TYPE_4__ {int i915; struct intel_context* kernel_context; TYPE_1__ sseu; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int FUNC_0 (char const*,int ,int,unsigned int,char*,char*) ;
 int FUNC_1 (struct intel_context*,struct drm_i915_gem_object*,struct igt_spinner*,int *) ;
 unsigned int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct igt_spinner*) ;
 int FUNC_5 (TYPE_2__*,char*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_3,
       unsigned int VAR_4,
       struct intel_context *VAR_5,
       struct drm_i915_gem_object *VAR_6,
       unsigned int VAR_7,
       struct igt_spinner *VAR_8)
{
 unsigned int VAR_9 = FUNC_2(VAR_5->engine->sseu.slice_mask);
 u32 VAR_10 = 0;
 int VAR_11 = 0;

 if (VAR_4 & VAR_2) {
  VAR_11 = FUNC_5(VAR_5->engine, "sseu");
  if (VAR_11)
   goto out;
 }

 VAR_11 = FUNC_1(VAR_5, VAR_6,
     VAR_4 & VAR_2 ? ((void*)0) : VAR_8, &VAR_10);
 VAR_11 = FUNC_0(VAR_3, VAR_10, VAR_11, VAR_7, "Context", "!");
 if (VAR_11)
  goto out;

 VAR_11 = FUNC_1(VAR_5->engine->kernel_context, VAR_6, ((void*)0), &VAR_10);
 VAR_11 = FUNC_0(VAR_3, VAR_10, VAR_11, VAR_9, "Kernel context", "!");

out:
 if (VAR_8)
  FUNC_4(VAR_8);

 if ((VAR_4 & VAR_1) && VAR_11 == 0) {
  VAR_11 = FUNC_3(VAR_5->engine->i915,
          0, VAR_0);
  if (VAR_11)
   return VAR_11;

  VAR_11 = FUNC_1(VAR_5, VAR_6, ((void*)0), &VAR_10);
  VAR_11 = FUNC_0(VAR_3, VAR_10, VAR_11, VAR_7,
       "Context", " after idle!");
 }

 return VAR_11;
}
