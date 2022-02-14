
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int mode; int up_threshold; int down_threshold; int mutex; } ;
struct intel_rps {TYPE_2__ power; } ;
struct TYPE_3__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_1__ gt_pm; } ;



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
 int FUNC_0 (struct drm_i915_private*,int) ;

 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;

 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct drm_i915_private *VAR_11, int VAR_12)
{
 struct intel_rps *VAR_13 = &VAR_11->gt_pm.rps;
 u32 VAR_14 = 0, VAR_15 = 0;
 u32 VAR_16 = 0, VAR_17 = 0;

 FUNC_4(&VAR_13->power.mutex);

 if (VAR_12 == VAR_13->power.mode)
  return;


 switch (VAR_12) {
 case 128:

  VAR_16 = 16000;
  VAR_14 = 95;


  VAR_17 = 32000;
  VAR_15 = 85;
  break;

 case 130:

  VAR_16 = 13000;
  VAR_14 = 90;


  VAR_17 = 32000;
  VAR_15 = 75;
  break;

 case 129:

  VAR_16 = 10000;
  VAR_14 = 85;


  VAR_17 = 32000;
  VAR_15 = 60;
  break;
 }




 if (FUNC_3(VAR_11))
  goto skip_hw_write;

 FUNC_1(VAR_9,
     FUNC_0(VAR_11, VAR_16));
 FUNC_1(VAR_10,
     FUNC_0(VAR_11,
           VAR_16 * VAR_14 / 100));

 FUNC_1(VAR_1,
     FUNC_0(VAR_11, VAR_17));
 FUNC_1(VAR_3,
     FUNC_0(VAR_11,
           VAR_17 * VAR_15 / 100));

 FUNC_1(VAR_0,
     (FUNC_2(VAR_11) > 9 ? 0 : VAR_7) |
     VAR_5 |
     VAR_6 |
     VAR_4 |
     VAR_8 |
     VAR_2);

skip_hw_write:
 VAR_13->power.mode = VAR_12;
 VAR_13->power.up_threshold = VAR_14;
 VAR_13->power.down_threshold = VAR_15;
}
