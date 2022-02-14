
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_cdclk_state {unsigned int cdclk; unsigned int vco; int voltage_level; } ;
struct TYPE_3__ {unsigned int vco; int voltage_level; } ;
struct TYPE_4__ {TYPE_1__ hw; } ;
struct drm_i915_private {TYPE_2__ cdclk; } ;
typedef enum pipe { ____Placeholder_pipe } pipe ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (struct drm_i915_private*,unsigned int) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,int ,int ) ;
 int FUNC_6 (unsigned int) ;
 int FUNC_7 (struct drm_i915_private*,int ,int ,int ,int ,int) ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_5,
     const struct intel_cdclk_state *VAR_6,
     enum pipe VAR_7)
{
 unsigned int VAR_8 = VAR_6->cdclk;
 unsigned int VAR_9 = VAR_6->vco;
 int VAR_10;

 VAR_10 = FUNC_7(VAR_5, VAR_4,
    VAR_2,
    VAR_3,
    VAR_3, 3);
 if (VAR_10) {
  FUNC_0("Failed to inform PCU about cdclk change (%d)\n",
     VAR_10);
  return;
 }

 if (VAR_5->cdclk.hw.vco != 0 &&
     VAR_5->cdclk.hw.vco != VAR_9)
  FUNC_2(VAR_5);

 if (VAR_5->cdclk.hw.vco != VAR_9)
  FUNC_3(VAR_5, VAR_9);






 FUNC_1(VAR_0, VAR_1 |
         FUNC_6(VAR_8));

 FUNC_5(VAR_5, VAR_4,
    VAR_6->voltage_level);

 FUNC_4(VAR_5);





 VAR_5->cdclk.hw.voltage_level = VAR_6->voltage_level;
}
