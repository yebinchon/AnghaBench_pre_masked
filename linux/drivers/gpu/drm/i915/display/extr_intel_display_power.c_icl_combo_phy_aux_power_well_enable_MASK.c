
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct i915_power_well_regs {int driver; } ;
struct i915_power_well {TYPE_2__* desc; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum phy { ____Placeholder_phy } phy ;
struct TYPE_3__ {int idx; struct i915_power_well_regs* regs; } ;
struct TYPE_4__ {TYPE_1__ hsw; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_4 (int) ;
 int VAR_2 ;
 int FUNC_5 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*,struct i915_power_well*) ;
 int FUNC_10 (struct drm_i915_private*,int) ;

__attribute__((used)) static void
FUNC_11(struct drm_i915_private *VAR_6,
        struct i915_power_well *VAR_7)
{
 const struct i915_power_well_regs *VAR_8 = VAR_7->desc->hsw.regs;
 int VAR_9 = VAR_7->desc->hsw.idx;
 enum phy VAR_10 = FUNC_4(VAR_9);
 u32 VAR_11;
 int VAR_12;

 VAR_11 = FUNC_1(VAR_8->driver);
 FUNC_2(VAR_8->driver, VAR_11 | FUNC_0(VAR_9));

 if (FUNC_6(VAR_6) < 12) {
  VAR_11 = FUNC_1(FUNC_5(VAR_10));
  FUNC_2(FUNC_5(VAR_10), VAR_11 | VAR_2);
 }

 FUNC_9(VAR_6, VAR_7);


 if (FUNC_8(VAR_6))
  VAR_12 = VAR_5;
 else
  VAR_12 = VAR_4;

 if (!FUNC_7(VAR_6) &&
     VAR_9 >= VAR_3 && VAR_9 <= VAR_12 &&
     !FUNC_10(VAR_6, (enum port)VAR_10)) {
  VAR_11 = FUNC_1(FUNC_3(VAR_9));
  VAR_11 |= VAR_0 | VAR_1;
  FUNC_2(FUNC_3(VAR_9), VAR_11);
 }
}
