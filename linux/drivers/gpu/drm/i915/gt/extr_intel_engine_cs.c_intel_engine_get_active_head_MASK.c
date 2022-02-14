
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct intel_engine_cs {struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct intel_engine_cs const*,int ) ;
 int FUNC_1 (struct intel_engine_cs const*,int ,int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int VAR_1 ;
 int VAR_2 ;

u64 FUNC_3(const struct intel_engine_cs *VAR_3)
{
 struct drm_i915_private *VAR_4 = VAR_3->i915;

 u64 VAR_5;

 if (FUNC_2(VAR_4) >= 8)
  VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_2);
 else if (FUNC_2(VAR_4) >= 4)
  VAR_5 = FUNC_0(VAR_3, VAR_1);
 else
  VAR_5 = FUNC_0(VAR_3, VAR_0);

 return VAR_5;
}
