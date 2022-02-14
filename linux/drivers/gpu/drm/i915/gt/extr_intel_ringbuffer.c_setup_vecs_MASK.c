
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int emit_fini_breadcrumb; int irq_disable; int irq_enable; int irq_enable_mask; int emit_flush; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_2(struct intel_engine_cs *VAR_5)
{
 struct drm_i915_private *VAR_6 = VAR_5->i915;

 FUNC_0(FUNC_1(VAR_6) < 7);

 VAR_5->emit_flush = VAR_1;
 VAR_5->irq_enable_mask = VAR_0;
 VAR_5->irq_enable = VAR_4;
 VAR_5->irq_disable = VAR_3;

 VAR_5->emit_fini_breadcrumb = VAR_2;
}
