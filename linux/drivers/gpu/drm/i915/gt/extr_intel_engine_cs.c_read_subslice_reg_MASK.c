
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct intel_uncore {int lock; } ;
struct intel_engine_cs {struct intel_uncore* uncore; struct drm_i915_private* i915; } ;
struct drm_i915_private {int dummy; } ;
typedef int i915_reg_t ;
typedef enum forcewake_domains { ____Placeholder_forcewake_domains } forcewake_domains ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int FUNC_1 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int) ;
 int VAR_5 ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct intel_uncore*,int ,int) ;
 int FUNC_6 (struct intel_uncore*,int) ;
 int FUNC_7 (struct intel_uncore*,int) ;
 int FUNC_8 (struct intel_uncore*,int ) ;
 int FUNC_9 (struct intel_uncore*,int ,int) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

__attribute__((used)) static u32
FUNC_12(struct intel_engine_cs *VAR_7, int VAR_8, int VAR_9,
    i915_reg_t VAR_10)
{
 struct drm_i915_private *VAR_11 = VAR_7->i915;
 struct intel_uncore *VAR_12 = VAR_7->uncore;
 u32 VAR_13, VAR_14, VAR_15, VAR_16, VAR_17;
 enum forcewake_domains VAR_18;

 if (FUNC_4(VAR_11) >= 11) {
  VAR_13 = VAR_2 | VAR_3;
  VAR_14 = FUNC_0(VAR_8) | FUNC_1(VAR_9);
 } else {
  VAR_13 = VAR_5 | VAR_6;
  VAR_14 = FUNC_2(VAR_8) | FUNC_3(VAR_9);
 }

 VAR_18 = FUNC_5(VAR_12, VAR_10,
          VAR_0);
 VAR_18 |= FUNC_5(VAR_12,
           VAR_4,
           VAR_0 | VAR_1);

 FUNC_10(&VAR_12->lock);
 FUNC_6(VAR_12, VAR_18);

 VAR_16 = VAR_15 = FUNC_8(VAR_12, VAR_4);

 VAR_15 &= ~VAR_13;
 VAR_15 |= VAR_14;
 FUNC_9(VAR_12, VAR_4, VAR_15);

 VAR_17 = FUNC_8(VAR_12, VAR_10);

 VAR_15 &= ~VAR_13;
 VAR_15 |= VAR_16 & VAR_13;

 FUNC_9(VAR_12, VAR_4, VAR_15);

 FUNC_7(VAR_12, VAR_18);
 FUNC_11(&VAR_12->lock);

 return VAR_17;
}
