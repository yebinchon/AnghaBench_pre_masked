
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_rps {int rp0_freq; int rp1_freq; int min_freq; int max_freq; int efficient_freq; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_1__ gt_pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 int FUNC_6 (int ,int,int,int) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*,int ,int*,int *) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_8(struct drm_i915_private *VAR_5)
{
 struct intel_rps *VAR_6 = &VAR_5->gt_pm.rps;




 if (FUNC_4(VAR_5)) {
  u32 VAR_7 = FUNC_0(VAR_0);
  VAR_6->rp0_freq = (VAR_7 >> 16) & 0xff;
  VAR_6->rp1_freq = (VAR_7 >> 8) & 0xff;
  VAR_6->min_freq = (VAR_7 >> 0) & 0xff;
 } else {
  u32 VAR_8 = FUNC_0(VAR_1);
  VAR_6->rp0_freq = (VAR_8 >> 0) & 0xff;
  VAR_6->rp1_freq = (VAR_8 >> 8) & 0xff;
  VAR_6->min_freq = (VAR_8 >> 16) & 0xff;
 }

 VAR_6->max_freq = VAR_6->rp0_freq;

 VAR_6->efficient_freq = VAR_6->rp1_freq;
 if (FUNC_5(VAR_5) || FUNC_2(VAR_5) ||
     FUNC_3(VAR_5) || FUNC_1(VAR_5) >= 10) {
  u32 VAR_9 = 0;

  if (FUNC_7(VAR_5,
        VAR_3,
        &VAR_9, ((void*)0)) == 0)
   VAR_6->efficient_freq =
    FUNC_6(VAR_4,
     ((VAR_9 >> 8) & 0xff),
     VAR_6->min_freq,
     VAR_6->max_freq);
 }

 if (FUNC_3(VAR_5) || FUNC_1(VAR_5) >= 10) {



  VAR_6->rp0_freq *= VAR_2;
  VAR_6->rp1_freq *= VAR_2;
  VAR_6->min_freq *= VAR_2;
  VAR_6->max_freq *= VAR_2;
  VAR_6->efficient_freq *= VAR_2;
 }
}
