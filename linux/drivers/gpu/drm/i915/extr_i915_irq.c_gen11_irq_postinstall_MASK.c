
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int regs; } ;
struct drm_i915_private {int gt; struct intel_uncore uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct intel_uncore*,int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_6)
{
 struct intel_uncore *VAR_7 = &VAR_6->uncore;
 u32 VAR_8 = VAR_4;

 if (FUNC_2(VAR_6) >= VAR_5)
  FUNC_7(VAR_6);

 FUNC_4(&VAR_6->gt);
 FUNC_6(VAR_6);

 FUNC_0(VAR_7, VAR_3, ~VAR_8, VAR_8);

 FUNC_1(VAR_0, VAR_1);

 FUNC_5(VAR_7->regs);
 FUNC_3(VAR_2);
}
