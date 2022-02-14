
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_i915_private {scalar_t__ sagv_status; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (struct drm_i915_private*) ;
 int FUNC_5 (struct drm_i915_private*,int ,int ,int ,int ,int) ;

int
FUNC_6(struct drm_i915_private *VAR_6)
{
 int VAR_7;

 if (!FUNC_4(VAR_6))
  return 0;

 if (VAR_6->sagv_status == VAR_4)
  return 0;

 FUNC_1("Disabling SAGV\n");

 VAR_7 = FUNC_5(VAR_6, VAR_1,
    VAR_2,
    VAR_3, VAR_3,
    1);




 if (FUNC_3(VAR_6) && VAR_7 == -VAR_0) {
  FUNC_0("No SAGV found on system, ignoring\n");
  VAR_6->sagv_status = VAR_5;
  return 0;
 } else if (VAR_7 < 0) {
  FUNC_2("Failed to disable SAGV (%d)\n", VAR_7);
  return VAR_7;
 }

 VAR_6->sagv_status = VAR_4;
 return 0;
}
