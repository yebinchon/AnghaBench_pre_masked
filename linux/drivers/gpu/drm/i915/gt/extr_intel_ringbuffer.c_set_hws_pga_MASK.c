
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_engine_cs {struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;
typedef int phys_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static void FUNC_3(struct intel_engine_cs *VAR_1, phys_addr_t VAR_2)
{
 struct drm_i915_private *VAR_3 = VAR_1->i915;
 u32 VAR_4;

 VAR_4 = FUNC_2(VAR_2);
 if (FUNC_1(VAR_3) >= 4)
  VAR_4 |= (VAR_2 >> 28) & 0xf0;

 FUNC_0(VAR_0, VAR_4);
}
