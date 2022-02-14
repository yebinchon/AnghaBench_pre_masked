
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct intel_uncore {int dummy; } ;
struct drm_i915_private {struct intel_uncore uncore; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct intel_uncore*,int ) ;
 int FUNC_2 (struct intel_uncore*,int ) ;
 int FUNC_3 (struct intel_uncore*,int ,int) ;
 int FUNC_4 (int *) ;
 int VAR_6 ;

bool FUNC_5(struct drm_i915_private *VAR_7, u8 VAR_8)
{
 struct intel_uncore *VAR_9 = &VAR_7->uncore;
 u16 VAR_10;

 FUNC_4(&VAR_6);

 VAR_10 = FUNC_2(VAR_9, VAR_5);
 if (VAR_10 & VAR_2) {
  FUNC_0("gpu busy, RCS change rejected\n");
  return 0;
 }

 VAR_10 = (VAR_0 << VAR_1) |
  (VAR_8 << VAR_3) | VAR_4;
 FUNC_3(VAR_9, VAR_5, VAR_10);
 FUNC_1(VAR_9, VAR_5);

 VAR_10 |= VAR_2;
 FUNC_3(VAR_9, VAR_5, VAR_10);

 return 1;
}
