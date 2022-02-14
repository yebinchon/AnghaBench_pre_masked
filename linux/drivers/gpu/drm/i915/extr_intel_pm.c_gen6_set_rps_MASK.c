
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct intel_rps {scalar_t__ cur_freq; } ;
struct TYPE_2__ {struct intel_rps rps; } ;
struct drm_i915_private {TYPE_1__ gt_pm; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*,scalar_t__) ;
 int FUNC_9 (struct drm_i915_private*,scalar_t__) ;
 int FUNC_10 (struct drm_i915_private*,scalar_t__) ;
 int FUNC_11 (struct drm_i915_private*,scalar_t__) ;
 int FUNC_12 (int ) ;

__attribute__((used)) static int FUNC_13(struct drm_i915_private *VAR_4, u8 VAR_5)
{
 struct intel_rps *VAR_6 = &VAR_4->gt_pm.rps;




 if (VAR_5 != VAR_6->cur_freq) {
  FUNC_9(VAR_4, VAR_5);

  if (FUNC_5(VAR_4) >= 9)
   FUNC_4(VAR_2,
       FUNC_2(VAR_5));
  else if (FUNC_7(VAR_4) || FUNC_6(VAR_4))
   FUNC_4(VAR_2,
       FUNC_3(VAR_5));
  else
   FUNC_4(VAR_2,
       FUNC_0(VAR_5) |
       FUNC_1(0) |
       VAR_0);
 }




 FUNC_4(VAR_3, FUNC_11(VAR_4, VAR_5));
 FUNC_4(VAR_1, FUNC_8(VAR_4, VAR_5));

 VAR_6->cur_freq = VAR_5;
 FUNC_12(FUNC_10(VAR_4, VAR_5));

 return 0;
}
