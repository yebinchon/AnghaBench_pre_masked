
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int emit_fini_breadcrumb; int irq_enable_mask; int emit_flush; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_i915_private*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_1(struct intel_engine_cs *VAR_4)
{
 struct drm_i915_private *VAR_5 = VAR_4->i915;

 VAR_4->emit_flush = VAR_1;
 VAR_4->irq_enable_mask = VAR_0;

 if (FUNC_0(VAR_5, 6))
  VAR_4->emit_fini_breadcrumb = VAR_2;
 else
  VAR_4->emit_fini_breadcrumb = VAR_3;
}
