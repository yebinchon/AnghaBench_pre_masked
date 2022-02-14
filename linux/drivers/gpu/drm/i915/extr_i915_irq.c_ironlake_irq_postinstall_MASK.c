
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_uncore {int dummy; } ;
struct TYPE_2__ {int debug; } ;
struct drm_i915_private {int irq_mask; int irq_lock; int gt; TYPE_1__ psr; struct intel_uncore uncore; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int FUNC_0 (struct intel_uncore*,int ,int,int) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct intel_uncore*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*,int) ;
 int FUNC_9 (struct drm_i915_private*) ;
 int FUNC_10 (struct drm_i915_private*,int ) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct drm_i915_private *VAR_24)
{
 struct intel_uncore *VAR_25 = &VAR_24->uncore;
 u32 VAR_26, VAR_27;

 if (FUNC_1(VAR_24) >= 7) {
  VAR_26 = (VAR_9 | VAR_8 |
    VAR_11 | VAR_2);
  VAR_27 = (VAR_21 | VAR_20 |
         VAR_16 | VAR_6 |
         VAR_4);
 } else {
  VAR_26 = (VAR_9 | VAR_7 | VAR_10 |
    VAR_1 | VAR_17 |
    VAR_13 | VAR_22);
  VAR_27 = (VAR_15 | VAR_19 | VAR_12 |
         VAR_18 | VAR_14 |
         VAR_3);
 }

 if (FUNC_2(VAR_24)) {
  FUNC_4(VAR_25, VAR_23);
  FUNC_10(VAR_24, VAR_24->psr.debug);
  VAR_26 |= VAR_5;
 }

 VAR_24->irq_mask = ~VAR_26;

 FUNC_7(VAR_24);

 FUNC_0(VAR_25, VAR_0, VAR_24->irq_mask,
        VAR_26 | VAR_27);

 FUNC_5(&VAR_24->gt);

 FUNC_9(VAR_24);

 FUNC_6(VAR_24);

 if (FUNC_3(VAR_24)) {





  FUNC_11(&VAR_24->irq_lock);
  FUNC_8(VAR_24, VAR_12);
  FUNC_12(&VAR_24->irq_lock);
 }
}
