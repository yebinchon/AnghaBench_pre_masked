
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_hdmi {int dummy; } ;
struct drm_i915_private {int dummy; } ;
typedef enum drm_mode_status { ____Placeholder_drm_mode_status } drm_mode_status ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 scalar_t__ FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct intel_hdmi*,int,int) ;
 int FUNC_3 (struct intel_hdmi*) ;
 struct drm_i915_private* FUNC_4 (int ) ;

__attribute__((used)) static enum drm_mode_status
FUNC_5(struct intel_hdmi *VAR_4,
        int VAR_5, bool VAR_6,
        bool VAR_7)
{
 struct drm_i915_private *VAR_8 = FUNC_4(FUNC_3(VAR_4));

 if (VAR_5 < 25000)
  return VAR_1;
 if (VAR_5 > FUNC_2(VAR_4, VAR_6, VAR_7))
  return VAR_0;


 if (FUNC_1(VAR_8) && VAR_5 > 223333 && VAR_5 < 240000)
  return VAR_2;


 if (FUNC_0(VAR_8) && VAR_5 > 216000 && VAR_5 < 240000)
  return VAR_2;

 return VAR_3;
}
