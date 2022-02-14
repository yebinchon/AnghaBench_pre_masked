
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum phy { ____Placeholder_phy } phy ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 scalar_t__ FUNC_8 (struct drm_i915_private*) ;
 int VAR_3 ;
 int FUNC_9 (int) ;
 int VAR_4 ;
 int FUNC_10 (struct drm_i915_private*,int) ;
 int FUNC_11 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_12 (int ) ;

__attribute__((used)) static void FUNC_13(struct intel_encoder *VAR_5)
{
 struct drm_i915_private *VAR_6 = FUNC_12(VAR_5->base.dev);
 enum port VAR_7 = VAR_5->port;
 enum phy VAR_8 = FUNC_11(VAR_6, VAR_7);

 if (FUNC_5(VAR_6) >= 11) {
  if (!FUNC_10(VAR_6, VAR_8) ||
      (FUNC_7(VAR_6) && VAR_7 >= VAR_3))
   FUNC_4(FUNC_0(VAR_7), VAR_0);
 } else if (FUNC_6(VAR_6)) {
  FUNC_4(VAR_1, FUNC_3(VAR_1) |
      FUNC_1(VAR_7));
 } else if (FUNC_8(VAR_6)) {
  FUNC_4(VAR_2, FUNC_3(VAR_2) |
      FUNC_2(VAR_7));
 } else if (FUNC_5(VAR_6) < 9) {
  FUNC_4(FUNC_9(VAR_7), VAR_4);
 }
}
