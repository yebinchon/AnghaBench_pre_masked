
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int gpll_ref_freq; } ;
struct TYPE_4__ {TYPE_1__ rps; } ;
struct drm_i915_private {TYPE_2__ gt_pm; int czclk_freq; } ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (struct drm_i915_private*,char*,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct drm_i915_private *VAR_1)
{
 VAR_1->gt_pm.rps.gpll_ref_freq =
  FUNC_1(VAR_1, "GPLL ref",
      VAR_0,
      VAR_1->czclk_freq);

 FUNC_0("GPLL reference freq: %d kHz\n",
    VAR_1->gt_pm.rps.gpll_ref_freq);
}
