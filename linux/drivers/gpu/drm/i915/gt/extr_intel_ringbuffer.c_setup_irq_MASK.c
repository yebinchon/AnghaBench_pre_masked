
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_engine_cs {int irq_disable; int irq_enable; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_1(struct intel_engine_cs *VAR_8)
{
 struct drm_i915_private *VAR_9 = VAR_8->i915;

 if (FUNC_0(VAR_9) >= 6) {
  VAR_8->irq_enable = VAR_3;
  VAR_8->irq_disable = VAR_2;
 } else if (FUNC_0(VAR_9) >= 5) {
  VAR_8->irq_enable = VAR_1;
  VAR_8->irq_disable = VAR_0;
 } else if (FUNC_0(VAR_9) >= 3) {
  VAR_8->irq_enable = VAR_7;
  VAR_8->irq_disable = VAR_6;
 } else {
  VAR_8->irq_enable = VAR_5;
  VAR_8->irq_disable = VAR_4;
 }
}
