
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct intel_rps {int max_freq_softlimit; int min_freq_softlimit; int rp1_freq; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {int uncore; TYPE_1__ gt_pm; } ;


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
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_17 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct drm_i915_private*,int ) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_18)
{
 struct intel_rps *VAR_19 = &VAR_18->gt_pm.rps;

 FUNC_2(&VAR_18->uncore, VAR_0);


 FUNC_1(VAR_2,
     FUNC_0(VAR_19->rp1_freq));
 FUNC_1(VAR_1,
     FUNC_0(VAR_19->rp1_freq));

 FUNC_1(VAR_7, 100000000 / 128);


 FUNC_1(VAR_10,
     VAR_19->max_freq_softlimit << 24 |
     VAR_19->min_freq_softlimit << 16);

 FUNC_1(VAR_16, 7600000 / 128);
 FUNC_1(VAR_6, 31300000 / 128);
 FUNC_1(VAR_15, 66000);
 FUNC_1(VAR_4, 350000);

 FUNC_1(VAR_9, 10);


 FUNC_1(VAR_3,
     VAR_13 |
     VAR_11 |
     VAR_12 |
     VAR_8 |
     VAR_14 |
     VAR_5);

 FUNC_4(VAR_18, VAR_17);

 FUNC_3(&VAR_18->uncore, VAR_0);
}
