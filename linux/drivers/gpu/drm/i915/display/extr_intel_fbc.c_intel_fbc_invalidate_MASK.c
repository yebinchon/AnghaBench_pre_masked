
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_fbc {unsigned int busy_bits; int lock; scalar_t__ enabled; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;
typedef enum fb_op_origin { ____Placeholder_fb_op_origin } fb_op_origin ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*,char*) ;
 unsigned int FUNC_2 (struct intel_fbc*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct drm_i915_private *VAR_2,
     unsigned int VAR_3,
     enum fb_op_origin VAR_4)
{
 struct intel_fbc *VAR_5 = &VAR_2->fbc;

 if (!FUNC_0(VAR_2))
  return;

 if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
  return;

 FUNC_3(&VAR_5->lock);

 VAR_5->busy_bits |= FUNC_2(VAR_5) & VAR_3;

 if (VAR_5->enabled && VAR_5->busy_bits)
  FUNC_1(VAR_2, "frontbuffer write");

 FUNC_4(&VAR_5->lock);
}
