
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct intel_rps {unsigned int max_freq; unsigned int min_freq; int lock; } ;
struct TYPE_3__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_1__ gt_pm; } ;
struct TYPE_4__ {unsigned int max_freq; } ;
struct cpufreq_policy {TYPE_2__ cpuinfo; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (unsigned int,int) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 struct cpufreq_policy* FUNC_5 (int ) ;
 int FUNC_6 (struct cpufreq_policy*) ;
 int FUNC_7 (int *) ;
 unsigned int FUNC_8 (unsigned int,unsigned int) ;
 unsigned int FUNC_9 (unsigned int,int,int) ;
 int FUNC_10 (struct drm_i915_private*,int ,unsigned int) ;
 unsigned int VAR_5 ;

__attribute__((used)) static void FUNC_11(struct drm_i915_private *VAR_6)
{
 struct intel_rps *VAR_7 = &VAR_6->gt_pm.rps;
 const int VAR_8 = 15;
 const int VAR_9 = 180;
 unsigned int VAR_10;
 unsigned int VAR_11, VAR_12;
 unsigned int VAR_13, VAR_14;
 struct cpufreq_policy *VAR_15;

 FUNC_7(&VAR_7->lock);

 if (VAR_7->max_freq <= VAR_7->min_freq)
  return;

 VAR_15 = FUNC_5(0);
 if (VAR_15) {
  VAR_11 = VAR_15->cpuinfo.max_freq;
  FUNC_6(VAR_15);
 } else {




  VAR_11 = VAR_5;
 }


 VAR_11 /= 1000;

 VAR_12 = FUNC_1(VAR_0) & 0xf;

 VAR_12 = FUNC_9(VAR_12, 8, 3);

 VAR_14 = VAR_7->min_freq;
 VAR_13 = VAR_7->max_freq;
 if (FUNC_3(VAR_6) || FUNC_2(VAR_6) >= 10) {

  VAR_14 /= VAR_4;
  VAR_13 /= VAR_4;
 }






 for (VAR_10 = VAR_13; VAR_10 >= VAR_14; VAR_10--) {
  const int VAR_16 = VAR_13 - VAR_10;
  unsigned int VAR_17 = 0, VAR_18 = 0;

  if (FUNC_3(VAR_6) || FUNC_2(VAR_6) >= 10) {




   VAR_18 = VAR_10;
  } else if (FUNC_2(VAR_6) >= 8) {

   VAR_18 = FUNC_8(VAR_12, VAR_10);
  } else if (FUNC_4(VAR_6)) {
   VAR_18 = FUNC_9(VAR_10, 5, 4);
   VAR_18 = FUNC_8(VAR_12, VAR_18);

  } else {







   if (VAR_10 < VAR_8)
    VAR_17 = 800;
   else
    VAR_17 = VAR_11 - ((VAR_16 * VAR_9) / 2);
   VAR_17 = FUNC_0(VAR_17, 100);
  }

  FUNC_10(VAR_6,
     VAR_3,
     VAR_17 << VAR_1 |
     VAR_18 << VAR_2 |
     VAR_10);
 }
}
