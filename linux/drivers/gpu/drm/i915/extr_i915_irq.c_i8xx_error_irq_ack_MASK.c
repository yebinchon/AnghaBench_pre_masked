
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct intel_uncore {int dummy; } ;
struct drm_i915_private {struct intel_uncore uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct intel_uncore*,int ) ;
 int FUNC_1 (struct intel_uncore*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_2,
          u16 *VAR_3, u16 *VAR_4)
{
 struct intel_uncore *VAR_5 = &VAR_2->uncore;
 u16 VAR_6;

 *VAR_3 = FUNC_0(VAR_5, VAR_0);

 if (*VAR_3)
  FUNC_1(VAR_5, VAR_0, *VAR_3);

 *VAR_4 = FUNC_0(VAR_5, VAR_0);
 if (*VAR_4 == 0)
  return;
 VAR_6 = FUNC_0(VAR_5, VAR_1);
 FUNC_1(VAR_5, VAR_1, 0xffff);
 FUNC_1(VAR_5, VAR_1, VAR_6 | *VAR_4);
}
