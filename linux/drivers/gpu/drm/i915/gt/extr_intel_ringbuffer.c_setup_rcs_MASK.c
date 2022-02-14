
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int resume; int emit_bb_start; int irq_enable_mask; void* emit_flush; int emit_fini_breadcrumb; int irq_keep_mask; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int VAR_2 ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*,int) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static void FUNC_4(struct intel_engine_cs *VAR_11)
{
 struct drm_i915_private *VAR_12 = VAR_11->i915;

 if (FUNC_0(VAR_12))
  VAR_11->irq_keep_mask = VAR_0;

 VAR_11->irq_enable_mask = VAR_1;

 if (FUNC_1(VAR_12) >= 7) {
  VAR_11->emit_flush = VAR_8;
  VAR_11->emit_fini_breadcrumb = VAR_7;
 } else if (FUNC_2(VAR_12, 6)) {
  VAR_11->emit_flush = VAR_6;
  VAR_11->emit_fini_breadcrumb = VAR_5;
 } else if (FUNC_2(VAR_12, 5)) {
  VAR_11->emit_flush = VAR_4;
 } else {
  if (FUNC_1(VAR_12) < 4)
   VAR_11->emit_flush = VAR_3;
  else
   VAR_11->emit_flush = VAR_4;
  VAR_11->irq_enable_mask = VAR_2;
 }

 if (FUNC_3(VAR_12))
  VAR_11->emit_bb_start = VAR_9;

 VAR_11->resume = VAR_10;
}
