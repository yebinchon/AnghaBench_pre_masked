
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int dev; } ;
struct intel_encoder {int port; int type; TYPE_1__ base; } ;
struct intel_dp {int link_rate; } ;
struct drm_i915_private {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;
typedef enum phy { ____Placeholder_phy } phy ;


 int FUNC_0 (int*) ;
 int VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (struct drm_i915_private*,int*) ;
 int FUNC_6 (struct drm_i915_private*,int*) ;
 int FUNC_7 (struct drm_i915_private*,int*) ;
 int FUNC_8 (struct drm_i915_private*,int*) ;
 struct intel_dp* FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct drm_i915_private*,int ,int ,int*) ;
 int* VAR_2 ;
 int* VAR_3 ;
 int FUNC_11 (struct drm_i915_private*,int,int*) ;
 int FUNC_12 (struct drm_i915_private*,int,int*) ;
 scalar_t__ FUNC_13 (struct drm_i915_private*,int) ;
 int FUNC_14 (struct drm_i915_private*,int) ;
 struct drm_i915_private* FUNC_15 (int ) ;

u8 FUNC_16(struct intel_encoder *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_15(VAR_4->base.dev);
 struct intel_dp *VAR_6 = FUNC_9(&VAR_4->base);
 enum port VAR_7 = VAR_4->port;
 enum phy VAR_8 = FUNC_14(VAR_5, VAR_7);
 int VAR_9;

 if (FUNC_1(VAR_5) >= 11) {
  if (FUNC_13(VAR_5, VAR_8))
   FUNC_10(VAR_5, VAR_4->type,
      VAR_6->link_rate, &VAR_9);
  else
   VAR_9 = FUNC_0(VAR_2);
 } else if (FUNC_2(VAR_5)) {
  if (VAR_4->type == VAR_1)
   FUNC_8(VAR_5, &VAR_9);
  else
   FUNC_7(VAR_5, &VAR_9);
 } else if (FUNC_3(VAR_5)) {
  if (VAR_4->type == VAR_1)
   FUNC_6(VAR_5, &VAR_9);
  else
   FUNC_5(VAR_5, &VAR_9);
 } else {
  if (VAR_4->type == VAR_1)
   FUNC_12(VAR_5, VAR_7, &VAR_9);
  else
   FUNC_11(VAR_5, VAR_7, &VAR_9);
 }

 if (FUNC_4(VAR_9 < 1))
  VAR_9 = 1;
 if (FUNC_4(VAR_9 > FUNC_0(VAR_3)))
  VAR_9 = FUNC_0(VAR_3);

 return VAR_3[VAR_9 - 1] &
  VAR_0;
}
