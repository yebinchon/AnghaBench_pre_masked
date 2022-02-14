
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* ddi_port_info; } ;
struct drm_i915_private {TYPE_2__ vbt; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum phy { ____Placeholder_phy } phy ;
struct TYPE_3__ {int hdmi_level_shift; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 int FUNC_7 (int,char*) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (struct drm_i915_private*,int*) ;
 int FUNC_10 (struct drm_i915_private*,int*) ;
 int FUNC_11 (struct drm_i915_private*,int ,int ,int*) ;
 int VAR_2 ;
 int FUNC_12 (struct drm_i915_private*,int*) ;
 scalar_t__ FUNC_13 (struct drm_i915_private*,int) ;
 int FUNC_14 (struct drm_i915_private*,int) ;

__attribute__((used)) static int FUNC_15(struct drm_i915_private *VAR_3, enum port VAR_4)
{
 int VAR_5, VAR_6, VAR_7;
 enum phy VAR_8 = FUNC_14(VAR_3, VAR_4);

 VAR_6 = VAR_3->vbt.ddi_port_info[VAR_4].hdmi_level_shift;

 if (FUNC_1(VAR_3) >= 11) {
  if (FUNC_13(VAR_3, VAR_8))
   FUNC_11(VAR_3, VAR_1,
      0, &VAR_5);
  else
   VAR_5 = FUNC_0(VAR_2);
  VAR_7 = VAR_5 - 1;
 } else if (FUNC_3(VAR_3)) {
  FUNC_10(VAR_3, &VAR_5);
  VAR_7 = VAR_5 - 1;
 } else if (FUNC_5(VAR_3)) {
  FUNC_9(VAR_3, &VAR_5);
  VAR_7 = VAR_5 - 1;
 } else if (FUNC_4(VAR_3)) {
  FUNC_12(VAR_3, &VAR_5);
  VAR_7 = 8;
 } else if (FUNC_2(VAR_3)) {
  FUNC_12(VAR_3, &VAR_5);
  VAR_7 = 7;
 } else if (FUNC_6(VAR_3)) {
  FUNC_12(VAR_3, &VAR_5);
  VAR_7 = 6;
 } else {
  FUNC_7(1, "ddi translation table missing\n");
  return 0;
 }


 if (VAR_6 == VAR_0 || VAR_6 >= VAR_5)
  VAR_6 = VAR_7;

 if (FUNC_8(VAR_5 == 0))
  return 0;
 if (FUNC_8(VAR_6 >= VAR_5))
  VAR_6 = VAR_5 - 1;

 return VAR_6;
}
