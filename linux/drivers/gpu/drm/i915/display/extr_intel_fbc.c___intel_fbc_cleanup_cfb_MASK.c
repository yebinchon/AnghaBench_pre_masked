
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_fbc {int * compressed_llb; int compressed_fb; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (struct drm_i915_private*,int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct drm_i915_private *VAR_0)
{
 struct intel_fbc *VAR_1 = &VAR_0->fbc;

 if (FUNC_0(&VAR_1->compressed_fb))
  FUNC_1(VAR_0, &VAR_1->compressed_fb);

 if (VAR_1->compressed_llb) {
  FUNC_1(VAR_0, VAR_1->compressed_llb);
  FUNC_2(VAR_1->compressed_llb);
 }
}
