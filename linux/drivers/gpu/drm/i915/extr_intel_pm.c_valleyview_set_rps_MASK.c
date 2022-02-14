
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_3__ {int cur_freq; } ;
struct TYPE_4__ {TYPE_1__ rps; } ;
struct drm_i915_private {TYPE_2__ gt_pm; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int,char*) ;
 int FUNC_3 (struct drm_i915_private*,int) ;
 int FUNC_4 (struct drm_i915_private*,int) ;
 int FUNC_5 (struct drm_i915_private*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct drm_i915_private*) ;
 int FUNC_8 (struct drm_i915_private*) ;
 int FUNC_9 (struct drm_i915_private*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct drm_i915_private *VAR_2, u8 VAR_3)
{
 int VAR_4;

 if (FUNC_2(FUNC_1(VAR_2) && (VAR_3 & 1),
        "Odd GPU freq value\n"))
  VAR_3 &= ~1;

 FUNC_0(VAR_0, FUNC_3(VAR_2, VAR_3));

 if (VAR_3 != VAR_2->gt_pm.rps.cur_freq) {
  FUNC_7(VAR_2);
  VAR_4 = FUNC_9(VAR_2, VAR_1, VAR_3);
  FUNC_8(VAR_2);
  if (VAR_4)
   return VAR_4;

  FUNC_4(VAR_2, VAR_3);
 }

 VAR_2->gt_pm.rps.cur_freq = VAR_3;
 FUNC_6(FUNC_5(VAR_2, VAR_3));

 return 0;
}
