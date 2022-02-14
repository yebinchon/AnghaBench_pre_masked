
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_fbc {unsigned int busy_bits; int lock; int crtc; int flip_pending; scalar_t__ active; scalar_t__ enabled; } ;
struct drm_i915_private {struct intel_fbc fbc; } ;
typedef enum fb_op_origin { ____Placeholder_fb_op_origin } fb_op_origin ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 unsigned int FUNC_2 (struct intel_fbc*) ;
 int FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct drm_i915_private *VAR_2,
       unsigned int VAR_3, enum fb_op_origin VAR_4)
{
 struct intel_fbc *VAR_5 = &VAR_2->fbc;

 if (!FUNC_1(VAR_2))
  return;

 FUNC_4(&VAR_5->lock);

 VAR_5->busy_bits &= ~VAR_3;

 if (VAR_4 == VAR_1 || VAR_4 == VAR_0)
  goto out;

 if (!VAR_5->busy_bits && VAR_5->enabled &&
     (VAR_3 & FUNC_2(VAR_5))) {
  if (VAR_5->active)
   FUNC_3(VAR_2);
  else if (!VAR_5->flip_pending)
   FUNC_0(VAR_5->crtc);
 }

out:
 FUNC_5(&VAR_5->lock);
}
