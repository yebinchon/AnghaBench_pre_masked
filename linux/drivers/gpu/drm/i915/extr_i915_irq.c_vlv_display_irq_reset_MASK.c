
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_uncore {int dummy; } ;
struct drm_i915_private {unsigned int irq_mask; struct intel_uncore uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct intel_uncore*,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct drm_i915_private*,int,int ) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct intel_uncore*,int ,int ) ;

__attribute__((used)) static void FUNC_6(struct drm_i915_private *VAR_5)
{
 struct intel_uncore *VAR_6 = &VAR_5->uncore;

 if (FUNC_2(VAR_5))
  FUNC_5(VAR_6, VAR_0, VAR_2);
 else
  FUNC_5(VAR_6, VAR_0, VAR_1);

 FUNC_3(VAR_5, 0xffffffff, 0);
 FUNC_5(VAR_6, VAR_3, FUNC_1(VAR_3));

 FUNC_4(VAR_5);

 FUNC_0(VAR_6, VAR_4);
 VAR_5->irq_mask = ~0u;
}
