
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int irq_enable_mask; int emit_flush; int emit_fini_breadcrumb; int set_default_submission; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_2(struct intel_engine_cs *VAR_8)
{
 struct drm_i915_private *VAR_9 = VAR_8->i915;

 if (FUNC_0(VAR_9) >= 6) {

  if (FUNC_1(VAR_9, 6))
   VAR_8->set_default_submission = VAR_5;
  VAR_8->emit_flush = VAR_4;
  VAR_8->irq_enable_mask = VAR_0;

  if (FUNC_1(VAR_9, 6))
   VAR_8->emit_fini_breadcrumb = VAR_6;
  else
   VAR_8->emit_fini_breadcrumb = VAR_7;
 } else {
  VAR_8->emit_flush = VAR_3;
  if (FUNC_1(VAR_9, 5))
   VAR_8->irq_enable_mask = VAR_2;
  else
   VAR_8->irq_enable_mask = VAR_1;
 }
}
