
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {scalar_t__ sagv_status; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,int ,int ) ;

int
FUNC_6(struct drm_i915_private *VAR_5)
{
 int VAR_6;

 if (!FUNC_4(VAR_5))
  return 0;

 if (VAR_5->sagv_status == VAR_3)
  return 0;

 FUNC_1("Enabling SAGV\n");
 VAR_6 = FUNC_5(VAR_5, VAR_1,
          VAR_2);







 if (FUNC_3(VAR_5) && VAR_6 == -VAR_0) {
  FUNC_0("No SAGV found on system, ignoring\n");
  VAR_5->sagv_status = VAR_4;
  return 0;
 } else if (VAR_6 < 0) {
  FUNC_2("Failed to enable SAGV\n");
  return VAR_6;
 }

 VAR_5->sagv_status = VAR_3;
 return 0;
}
