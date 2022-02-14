
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct intel_rps_ei {int render_c0; int media_c0; scalar_t__ ktime; } ;
struct TYPE_4__ {int up_threshold; int down_threshold; } ;
struct intel_rps {struct intel_rps_ei ei; TYPE_2__ power; } ;
struct TYPE_3__ {struct intel_rps rps; } ;
struct drm_i915_private {int czclk_freq; TYPE_1__ gt_pm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (scalar_t__,scalar_t__) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (struct drm_i915_private*,struct intel_rps_ei*) ;

__attribute__((used)) static u32 FUNC_3(struct drm_i915_private *VAR_3, u32 VAR_4)
{
 struct intel_rps *VAR_5 = &VAR_3->gt_pm.rps;
 const struct intel_rps_ei *VAR_6 = &VAR_5->ei;
 struct intel_rps_ei VAR_7;
 u32 VAR_8 = 0;

 if ((VAR_4 & VAR_1) == 0)
  return 0;

 FUNC_2(VAR_3, &VAR_7);

 if (VAR_6->ktime) {
  u64 VAR_9, VAR_10;
  u32 VAR_11, VAR_12;

  VAR_9 = FUNC_0(VAR_7.ktime, VAR_6->ktime);

  VAR_9 *= VAR_3->czclk_freq;






  VAR_11 = VAR_7.render_c0 - VAR_6->render_c0;
  VAR_12 = VAR_7.media_c0 - VAR_6->media_c0;
  VAR_10 = FUNC_1(VAR_11, VAR_12);
  VAR_10 *= 1000 * 100 << 8;

  if (VAR_10 > VAR_9 * VAR_5->power.up_threshold)
   VAR_8 = VAR_2;
  else if (VAR_10 < VAR_9 * VAR_5->power.down_threshold)
   VAR_8 = VAR_0;
 }

 VAR_5->ei = VAR_7;
 return VAR_8;
}
